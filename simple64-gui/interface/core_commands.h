#ifndef __CORE_COMMANDS_H__
#define __CORE_COMMANDS_H__

#include "m64p_frontend.h"
#include "m64p_config.h"

extern ptr_CoreStartup                 CoreStartup;
extern ptr_CoreShutdown                CoreShutdown;
extern ptr_CoreDoCommand               CoreDoCommand;
extern ptr_CoreAttachPlugin            CoreAttachPlugin;
extern ptr_CoreDetachPlugin            CoreDetachPlugin;
extern ptr_CoreOverrideVidExt          CoreOverrideVidExt;

extern ptr_ConfigGetUserConfigPath     ConfigGetUserConfigPath;
extern ptr_ConfigSaveFile              ConfigSaveFile;
extern ptr_ConfigGetParameterHelp      ConfigGetParameterHelp;
extern ptr_ConfigGetParamInt           ConfigGetParamInt;
extern ptr_ConfigGetParamFloat         ConfigGetParamFloat;
extern ptr_ConfigGetParamBool          ConfigGetParamBool;
extern ptr_ConfigGetParamString        ConfigGetParamString;
extern ptr_ConfigSetParameter          ConfigSetParameter;
extern ptr_ConfigDeleteSection         ConfigDeleteSection;
extern ptr_ConfigOpenSection           ConfigOpenSection;
extern ptr_ConfigSaveSection           ConfigSaveSection;
extern ptr_ConfigListParameters        ConfigListParameters;
extern ptr_ConfigGetSharedDataFilepath ConfigGetSharedDataFilepath;
#endif
