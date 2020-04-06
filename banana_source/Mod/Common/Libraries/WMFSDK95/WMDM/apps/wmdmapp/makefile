#
# Microsoft Windows Media Technologies.
# Copyright (c) Microsoft Corporation. All rights reserved.
#

#----- Include the PSDK's WIN32.MAK to pick up defines------------------------------------
!include <win32.mak>

TARGET=wmdmapp

TARGETEXE=$(TARGET).exe
TARGETRC=$(TARGET).rc
TARGETRES=$(TARGET).res

#----- OUTDIR is defined in WIN32.MAK This is the name of the destination directory-------
all: $(OUTDIR)\$(TARGETEXE)


WMDM_IDL_DIR=..\..\idl
WMDM_INC_DIR=..\..\inc
WMDM_LIB_DIR=..\..\lib
PROGHELP_INC_DIR=..\proghelp\$(OUTDIR)

!IFNDEF NODEBUG
flags = $(cflags) -D_DEBUG -D_USE_LOGGING /W3
!ENDIF

cflags = $(cflags) -DSTRICT -DUNICODE -D_UNICODE /I$(OUTDIR) /I$(WMDM_IDL_DIR)\$(OUTDIR) /I$(PROGHELP_INC_DIR) /I$(WMDM_INC_DIR)

LINK32_OBJS= \
        $(OUTDIR)\key.obj \
        $(OUTDIR)\wmdevmgr.obj \
        $(OUTDIR)\wmdmapp.obj \
        $(OUTDIR)\devfiles.obj \
        $(OUTDIR)\devices.obj \
        $(OUTDIR)\itemdata.obj \
        $(OUTDIR)\progress.obj \
        $(OUTDIR)\status.obj \
        $(OUTDIR)\util.obj \
        $(OUTDIR)\properties.obj \
        $(OUTDIR)\NotificationHandler.obj \
        $(OUTDIR)\guiddef.obj
        
!IFDEF NODEBUG
MSVCRTLIB=msvcrt.lib
!ELSE
MSVCRTLIB=msvcrtd.lib
!ENDIF

#----"$(MSVCVER)" >= "7.0" does not work with VC 6.0
!IF "$(MSVCVER)" == "6.0"
ATLSLIB=
SHLWAPILIB=
!ELSE
!IFDEF NODEBUG
ATLSLIB=atls.lib
!ELSE
ATLSLIB=atlsd.lib
!ENDIF
SHLWAPILIB=shlwapi.lib
!ENDIF


LIBS=\
        $(WMDM_LIB_DIR)\mssachlp.lib \
        advapi32.lib \
        comctl32.lib \
        comdlg32.lib \
        kernel32.lib \
        ole32.lib \
        oleaut32.lib \
        olepro32.lib \
        user32.lib \
        shell32.lib \
        uuid.lib \
        winspool.lib \
        odbc32.lib \
        odbccp32.lib \
        $(ATLSLIB) \
        $(SHLWAPILIB) \
	$(MSVCRTLIB) \
	wmvcore.lib \
        gdiplus.lib

TARGETS=\
	$(OUTDIR)\$(TARGETRES) \
	$(LINK32_OBJS)



#--------------------- Rules follow ------------------------------------------------------

#----- If OUTDIR does not exist, then create directory
$(OUTDIR) :
    if not exist "$(OUTDIR)/$(NULL)" mkdir $(OUTDIR)


#--------------------- EXE ---------------------------------------------------------------
# Build rule for EXE
$(OUTDIR)\$(TARGETEXE) : $(OUTDIR) $(TARGETS) 
    $(link) /NODEFAULTLIB /LIBPATH:$(OUTDIR) /OPT:NOREF $(ldebug) $(dllllflags) \
    $(LINK32_OBJS) $(OUTDIR)\$(TARGETRES) $(LIBS) \
    -out:$(OUTDIR)\$(TARGETEXE)

#--------------------- Compiling C/CPP Files ---------------------------------------------
# Generic rule for building ALL CPP files and placing their OBJ's in the OUTDIR
.c{$(OUTDIR)}.obj: 
    $(cc) $(cdebug) $(cflags) $(cvarsdll) /Fo"$(OUTDIR)\\" /Fd"$(OUTDIR)\\" $**

.cpp{$(OUTDIR)}.obj: 
    $(cc) $(cdebug) $(cflags) $(cvarsdll) /Fo"$(OUTDIR)\\" /Fd"$(OUTDIR)\\" $**


#--------------------- Compiling Resource Files ------------------------------------------
# Build rule for resource file
SOURCE=.\$(TARGETRC)

$(OUTDIR)\$(TARGETRES) : $(SOURCE) $(OUTDIR)
    $(rc) $(rcflags) /i $(OUTDIR) $(rcvars) /fo $(OUTDIR)\$(TARGETRES) $(SOURCE)


#--------------------- Clean Rule --------------------------------------------------------
# Rules for cleaning out those old files
clean:
        $(CLEANUP)
