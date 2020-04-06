#
# Microsoft Windows Media Technologies.
# Copyright (c) Microsoft Corporation. All rights reserved.
#

#----- Include the PSDK's WIN32.MAK to pick up defines------------------------------------
!include <win32.mak>

#----- OUTDIR is defined in WIN32.MAK This is the name of the destination directory-------
all: $(OUTDIR)\MsHDSP.dll

TARGET=MsHDSP

TARGETDLL=$(TARGET).dll
TARGETDEF=$(TARGET).def
TARGETRC=mdsp.rc
TARGETRES=$(TARGET).res

WMDM_IDL_DIR=..\..\idl
WMDM_INC_DIR=..\..\inc
WMDM_LIB_DIR=..\..\lib

cflags = $(cflags) -DINC_OLE2 -UUNICODE -U_UNICODE -D_ATL_STATIC_REGISTRY -I$(OUTDIR) -I$(WMDM_INC_DIR) \
	-I$(WMDM_IDL_DIR)\$(OUTDIR) -W3

LINK32_OBJS= \
        $(OUTDIR)\MDSP.obj  \
        $(OUTDIR)\MDServiceProvider.obj \
        $(OUTDIR)\hdsppch.obj  \
        $(OUTDIR)\MDSPDevice.obj \
        $(OUTDIR)\MDSPStorage.obj \
        $(OUTDIR)\MDSPStorageGlobals.obj \
        $(OUTDIR)\MDSPEnumDevice.obj \
        $(OUTDIR)\MDSPEnumStorage.obj \
        $(OUTDIR)\MDSPutil.obj \
        $(OUTDIR)\loghelp.obj \
        $(OUTDIR)\PropPage.obj \
        $(OUTDIR)\key.obj
        
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
        advapi32.lib \
	gdi32.lib \
        kernel32.lib \
        ole32.lib \
        oleaut32.lib \
        olepro32.lib \
        user32.lib \
	uuid.lib \
        $(WMDM_LIB_DIR)\mssachlp.lib \
	oldnames.lib \
        shell32.lib \
        $(ATLSLIB) \
        $(SHLWAPILIB) \
	$(MSVCRTLIB)

TARGETS=\
	GENERATED_FILES \
	$(OUTDIR)\$(TARGETRES) \
	$(LINK32_OBJS)

IDL_FILES=\
	MsHDSP.idl


#--------------------- Rules follow ------------------------------------------------------

#----- If OUTDIR does not exist, then create directory
$(OUTDIR) :
    if not exist "$(OUTDIR)/$(NULL)" mkdir $(OUTDIR)


#--------------------- DLL ---------------------------------------------------------------
# Build rule for DLL
$(OUTDIR)\$(TARGETDLL) : $(OUTDIR) $(TARGETS) 
    $(link) /NODEFAULTLIB /FIXED:NO /LIBPATH:$(OUTDIR) /OPT:NOREF $(ldebug) $(dllllflags) \
    $(LINK32_OBJS) $(OUTDIR)\$(TARGETRES) $(LIBS) \
    -out:$(OUTDIR)\$(TARGETDLL) \
    -def:$(TARGETDEF)


#--------------------- Compiling C/CPP Files ---------------------------------------------
# Generic rule for building ALL C files and placing their OBJ's in the OUTDIR
.c{$(OUTDIR)}.obj: 
    $(cc) $(cdebug) $(cflags) $(cvarsdll) /Fo"$(OUTDIR)\\" /Fd"$(OUTDIR)\\" $**

# Generic rule for building ALL CPP files and placing their OBJ's in the OUTDIR
.cpp{$(OUTDIR)}.obj: 
    $(cc) $(cdebug) $(cflags) $(cvarsdll) /Fo"$(OUTDIR)\\" /Fd"$(OUTDIR)\\" $**



#--------------------- Compiling Resource Files ------------------------------------------
# Build rule for resource file
SOURCE=.\$(TARGETRC)

$(OUTDIR)\$(TARGETRES) : $(SOURCE) $(OUTDIR)
    $(rc) $(rcflags) /i $(OUTDIR) /i$(WMDM_INC_DIR) $(rcvars) /fo $(OUTDIR)\$(TARGETRES) $(SOURCE)


#--------------------- Compiling IDL files -----------------------------------------------
# Build rule for files generated from IDL files
GENERATED_FILES : $(IDL_FILES)
   !$(midl) $(MIDL_OPTIMIZATION) /I$(WMDM_IDL_DIR) /out $(OUTDIR) -oldnames $**


#--------------------- Clean Rule --------------------------------------------------------
# Rules for cleaning out those old files
clean:
        $(CLEANUP)
