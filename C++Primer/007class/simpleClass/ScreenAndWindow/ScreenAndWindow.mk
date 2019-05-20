##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ScreenAndWindow
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/JingQIN/Documents/GitHub/CS_Grad_Courses/C++Primer/007class/simpleClass
ProjectPath            :=C:/Users/JingQIN/Documents/GitHub/CS_Grad_Courses/C++Primer/007class/simpleClass/ScreenAndWindow
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=JingQIN
Date                   :=20/05/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/mingw-64/mingw32/bin/g++.exe
SharedObjectLinkerName :=C:/mingw-64/mingw32/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="ScreenAndWindow.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/mingw-64/mingw32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/mingw-64/mingw32/bin/ar.exe rcu
CXX      := C:/mingw-64/mingw32/bin/g++.exe
CC       := C:/mingw-64/mingw32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw-64/mingw32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Windowmgr.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Screen.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Windowmgr.cpp$(ObjectSuffix): Windowmgr.cpp $(IntermediateDirectory)/Windowmgr.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JingQIN/Documents/GitHub/CS_Grad_Courses/C++Primer/007class/simpleClass/ScreenAndWindow/Windowmgr.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Windowmgr.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Windowmgr.cpp$(DependSuffix): Windowmgr.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Windowmgr.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Windowmgr.cpp$(DependSuffix) -MM Windowmgr.cpp

$(IntermediateDirectory)/Windowmgr.cpp$(PreprocessSuffix): Windowmgr.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Windowmgr.cpp$(PreprocessSuffix) Windowmgr.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JingQIN/Documents/GitHub/CS_Grad_Courses/C++Primer/007class/simpleClass/ScreenAndWindow/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Screen.cpp$(ObjectSuffix): Screen.cpp $(IntermediateDirectory)/Screen.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/JingQIN/Documents/GitHub/CS_Grad_Courses/C++Primer/007class/simpleClass/ScreenAndWindow/Screen.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Screen.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Screen.cpp$(DependSuffix): Screen.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Screen.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Screen.cpp$(DependSuffix) -MM Screen.cpp

$(IntermediateDirectory)/Screen.cpp$(PreprocessSuffix): Screen.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Screen.cpp$(PreprocessSuffix) Screen.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


