#include "DUALportRAMinterface_v3_capi_host.h"
static DUALportRAMinterface_v3_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        DUALportRAMinterface_v3_host_InitializeDataMapInfo(&(root), "DUALportRAMinterface_v3");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
