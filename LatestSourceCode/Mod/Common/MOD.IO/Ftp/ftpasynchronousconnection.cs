/*<copyright>
 MOD Systems, Inc (c) 2005 All Rights Reserved. 720 3rd Ave #1100, Seattle WA 98104 - (206) 973-1036 
All Rights Reserved, (c) 2005, covered by Trademark Laws, contents are considered Restricted Secrets 
by MOD Systems.  The contents also may only be viewed by MOD Systems Engineers (employees) and selected 
SBUX employees as outlined in the Licensing Agreement between MOD Systems and Starbuck Corporation on 
June 3rd, 2005.   
No copying, printing, distribution, or transmission of any contents allowed.  No 3rd Party may open, 
read, or have access to any part or whole of software source code.  If you have done so, immediatly 
report yourself to your manager. 
Do not reproduce any portions of this software.  Unauthorized use or disclosure of this information 
could impact MOD System's competitive advantage.   
Information in this document is considered trade secret.  No license, expressed or implied, by estoppel 
or otherwise, to any intellectual property rights is granted in this source code.   
CONFIDENTIAL SOURCE CODE
</copyright>*/

using System;
using System.Collections;
using System.Threading;
using System.IO;

namespace MOD.IO.Ftp
{
	/// <summary>
	/// Summary description for FTPAsynchronousConnection.
	/// </summary>
	public class FTPAsynchronousConnection : FTPConnection
	{
		private struct FileTransferStruct
		{
			public string RemoteFileName;
			public string LocalFileName;
			public FTPFileTransferType Type;
		}

		private ArrayList threadPool;
		private Queue sendFileTransfersQueue;
		private Queue getFileTransfersQueue;
		private Queue deleteFileQueue;
		private Queue setCurrentDirectoryQueue;
		private Queue makeDirQueue;
		private Queue removeDirQueue;
		private System.Timers.Timer timer;
				
		public FTPAsynchronousConnection() : base()
		{
			this.threadPool = new ArrayList();
			this.sendFileTransfersQueue = new Queue();
			this.getFileTransfersQueue = new Queue();
			this.deleteFileQueue = new Queue();
			this.setCurrentDirectoryQueue = new Queue();
			this.makeDirQueue = new Queue();
			this.removeDirQueue = new Queue();
			this.timer = new System.Timers.Timer(100);
			this.timer.Elapsed+=new System.Timers.ElapsedEventHandler(ManageThreads);
			this.timer.Start();
		}

		public override void Open(string remoteHost, string user, string password)
		{
			base.Open(remoteHost, user, password);
		}

		public override void Open(string remoteHost, string user, string password, FTPMode mode)
		{
			base.Open(remoteHost, user, password, mode);
		}

		public override void Open(string remoteHost, int remotePort, string user, string password)
		{
			base.Open(remoteHost, remotePort, user, password);
		}
		
		public override void Open(string remoteHost, int remotePort, string user, string password, FTPMode mode)
		{
			base.Open(remoteHost, remotePort, user, password, mode);
		}
		
		private Thread CreateGetFileThread(string remoteFileName, string localFileName, FTPFileTransferType type)
		{
			FileTransferStruct ft = new FileTransferStruct();
			ft.LocalFileName = localFileName;
			ft.RemoteFileName = remoteFileName;
			ft.Type = type;
			this.getFileTransfersQueue.Enqueue(ft);

			Thread thread = new Thread(new ThreadStart(GetFileFromQueue));
			thread.Name = "GetFileFromQueue " + remoteFileName + ", " + localFileName + ", " + type.ToString();;
			return thread;
		}

		public override void GetFile(string remoteFileName, FTPFileTransferType type)
		{
			GetFile(remoteFileName, Path.GetFileName(remoteFileName), type);
		}

		public override void GetFile(string remoteFileName, string localFileName, FTPFileTransferType type)
		{
			EnqueueThread(CreateGetFileThread(remoteFileName, localFileName, type));
		}

		private void GetFileFromQueue()
		{
			FileTransferStruct ft = (FileTransferStruct)this.getFileTransfersQueue.Dequeue();
			base.GetFile(ft.RemoteFileName, ft.LocalFileName, ft.Type);
		}

		private Thread CreateSendFileThread(string localFileName, string remoteFileName, FTPFileTransferType type)
		{
			FileTransferStruct ft = new FileTransferStruct();
			ft.LocalFileName = localFileName;
			ft.RemoteFileName = remoteFileName;
			ft.Type = type;
			this.sendFileTransfersQueue.Enqueue(ft);

			Thread thread = new Thread(new ThreadStart(SendFileFromQueue));
			thread.Name = "GetFileFromQueue " + localFileName + ", " + remoteFileName + ", " + type.ToString();;
			return thread;
		}

		public override void SendFile(string localFileName, FTPFileTransferType type)
		{
			SendFile(localFileName, Path.GetFileName(localFileName), type);
		}
		
		public override void SendFile(string localFileName, string remoteFileName, FTPFileTransferType type)
		{
			EnqueueThread(CreateSendFileThread(localFileName, remoteFileName, type));
		}

		private void SendFileFromQueue()
		{
			FileTransferStruct ft = (FileTransferStruct)this.sendFileTransfersQueue.Dequeue();
			base.SendFile(ft.LocalFileName, ft.RemoteFileName, ft.Type);
		}

		public override void DeleteFile(String remoteFileName)
		{
			EnqueueThread(CreateDeleteFileThread(remoteFileName));
		}

		private Thread CreateDeleteFileThread(String remoteFileName)
		{
			this.deleteFileQueue.Enqueue(remoteFileName);

			Thread thread = new Thread(new ThreadStart(DeleteFileFromQueue));
			thread.Name = "DeleteFileFromQueue " + remoteFileName;
			return thread;
		}
		
		private void DeleteFileFromQueue()
		{
			base.DeleteFile((string)this.deleteFileQueue.Dequeue());
		}

		public override void SetCurrentDirectory(String remotePath)
		{
			EnqueueThread(CreateSetCurrentDirectoryThread(remotePath));
		}

		private Thread CreateSetCurrentDirectoryThread(String remotePath)
		{
			this.setCurrentDirectoryQueue.Enqueue(remotePath);

			Thread thread = new Thread(new ThreadStart(SetCurrentDirectoryFromQueue));
			thread.Name = "SetCurrentDirectoryFromQueue " + remotePath;
			return thread;
		}

		private void SetCurrentDirectoryFromQueue()
		{
			base.SetCurrentDirectory((string)this.setCurrentDirectoryQueue.Dequeue());
		}

		public override void MakeDir(string directoryName)
		{
			EnqueueThread(CreateMakeDirFromQueueThread(directoryName));
		}

		private Thread CreateMakeDirFromQueueThread(string directoryName)
		{
			this.makeDirQueue.Enqueue(directoryName);

			Thread thread = new Thread(new ThreadStart(MakeDirFromQueue));
			thread.Name = "MakeDirFromQueue " + directoryName;
			return thread;
		}

		private void MakeDirFromQueue()
		{
			base.MakeDir((String) this.makeDirQueue.Dequeue());
		}
			
		public override void RemoveDir(string directoryName)
		{
			EnqueueThread(CreateRemoveDirFromQueue(directoryName));
		}

		private Thread CreateRemoveDirFromQueue(string directoryName)
		{
			this.removeDirQueue.Enqueue(directoryName);

			Thread thread = new Thread(new ThreadStart(RemoveDirFromQueue));
			thread.Name = "RemoveDirFromQueue " + directoryName;
			return thread;
		}

		private void RemoveDirFromQueue()
		{
			base.RemoveDir((String) this.removeDirQueue.Dequeue());
		}

		public override void Close()
		{
			WaitAllThreads();
			base.Close();
		}

		private void ManageThreads(Object state, System.Timers.ElapsedEventArgs e)
		{
			Thread thread;
			try
			{
				LockThreadPool();
				thread = PeekThread();
				if(thread != null)
				{
					switch (thread.ThreadState)
					{
						case ThreadState.Unstarted:
							LockThreadPool();
							thread.Start();
							UnlockThreadPool();
							break;
						case ThreadState.Stopped:
							LockThreadPool();
							DequeueThread();
							UnlockThreadPool();
							break;
					}
				}
				UnlockThreadPool();
			}
			catch
			{
				UnlockThreadPool();
			}
		}
		
		private void WaitAllThreads()
		{
			while(this.threadPool.Count!=0)
			{
				Thread.Sleep(100);
			}
		}

		private void EnqueueThread(Thread thread)
		{
			LockThreadPool();
			this.threadPool.Add(thread);
			UnlockThreadPool();
		}
		private Thread DequeueThread()
		{
			Thread thread;
			LockThreadPool();
			thread = (Thread)this.threadPool[0];
			this.threadPool.RemoveAt(0);
			UnlockThreadPool();
			return thread;
		}

		private Thread PeekThread()
		{
			Thread thread = null;
			LockThreadPool();
			if(this.threadPool.Count > 0)
			{
				thread = (Thread)this.threadPool[0];
			}
			UnlockThreadPool();
			return thread;
		}

		private void LockThreadPool()
		{
			Monitor.Enter(this.threadPool);
		}

		private void UnlockThreadPool()
		{
			Monitor.Exit(this.threadPool);
		}
	}
}
