libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMaps,names,def{262,276},use{128,135,140,145,147,152,164,165,207,215,223,228,231,245,246,281,286},dvars{retis_mpath,next},pointers{dmt},cfuncs{dm_task_destroy{1},dm_get_next_target{1},dm_task_no_open_count{1},virReportError{2},virStorageBackendIsMultipath{1},virStorageBackendCreateVols{2}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMaps,dmt,def{261},use{269,271,276,289,290},dvars{},pointers{pool},cfuncs{dm_task_destroy{1},dm_task_no_open_count{1}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMaps,retval,def{260,265,272,277},use{265,272,277,292},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMaps,retvaldmt,def{264},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMaps,pool,def{258},use{210,223,235,239,286},dvars{},pointers{},cfuncs{VIR_FREE{1},virStorageBackendCreateVols{1}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendCreateVols,retis_mpath,def{215},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendCreateVols,minor,def{211},use{228,235},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendCreateVols,map_device,def{210},use{223,235,239},dvars{},pointers{pool},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendCreateVols,next,def{212,245},use{246,249},dvars{names},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendCreateVols,pool,def{206},use{235},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendCreateVols,names,def{207,246},use{128,135,140,145,147,152,164,165,215,223,228,231,245},dvars{next,retis_mpath},pointers{names},cfuncs{dm_task_destroy{1},dm_get_next_target{1},dm_task_no_open_count{1},virReportError{2},virStorageBackendIsMultipath{1}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendCreateVols,retval,def{209,251},use{251,253},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendCreateVols,is_mpath,def{209},use{217,221},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendIsMultipath,target_type,def{131},use{152,154,159},dvars{},pointers{},cfuncs{dm_get_next_target{5}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendIsMultipath,retdmt,def{134},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendIsMultipath,length,def{130},use{152},dvars{},pointers{},cfuncs{dm_get_next_target{4}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendIsMultipath,params,def{132},use{152},dvars{},pointers{},cfuncs{dm_get_next_target{6}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendIsMultipath,start,def{130},use{152},dvars{},pointers{},cfuncs{dm_get_next_target{3}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendIsMultipath,dmt,def{128},use{135,140,145,147,152,164,165},dvars{},pointers{names},cfuncs{dm_task_destroy{1},dm_get_next_target{1},dm_task_no_open_count{1}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendIsMultipath,ret,def{127,136,141,148,155,160},use{136,141,148,155,160,167},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendIsMultipath,next,def{129},use{152},dvars{},pointers{},cfuncs{dm_get_next_target{2}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendIsMultipath,dev_name,def{125},use{140},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathRefreshPool,pool,def{314,320},use{261,269,271,276,289,290,318,324},dvars{},pointers{},cfuncs{virStorageBackendGetMaps{1},dm_task_destroy{1},dm_task_no_open_count{1},VIR_DEBUG{3}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathRefreshPool,retval,def{316},use{326},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathRefreshPool,ATTRIBUTE_UNUSED,def{313},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMinorNumber,retdmt,def{178},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMinorNumber,info,def{176},use{190,194},dvars{minor},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMinorNumber,dmt,def{175},use{182,186,190,198,199},dvars{},pointers{},cfuncs{dm_task_destroy{1}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMinorNumber,ret,def{174,195},use{195,201},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMinorNumber,minor,def{172,194},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendGetMinorNumber,dev_name,def{172},use{182},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathNewVol,vol,def{75,83},use{49,51,53,57,61,64,65,66,67,78,85,90,94,95,96,97,98,102,110,111,112,118,297,301,304,305,307,308,310,312,313,314,315,316,317,318,319,320,321,322},dvars{pool},pointers{},cfuncs{virStorageEncryptionFree{1},virBitmapFree{1},virStorageEncryptionSecretFree{1},VIR_FREE{1},virStorageVolDefFree{1}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathNewVol,dev,def{73},use{90},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathNewVol,ret,def{76,113},use{113,117,120},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathNewVol,devnum,def{72},use{85},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathNewVol,pool,def{71,110},use{105,106,111,112},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathCheckPool,retvalisActive,def{302},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathCheckPool,path,def{300},use{304},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathCheckPool,isActive,def{298,305},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathCheckPool,ATTRIBUTE_UNUSED,def{296,297},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathUpdateVolTargetInfo,rcfdret,def{50},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathUpdateVolTargetInfo,ret,def{47,63},use{63,66},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathUpdateVolTargetInfo,allocation,def{44},use{56},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathUpdateVolTargetInfo,fdret,def{48},use{52},dvars{fd},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathUpdateVolTargetInfo,capacity,def{45},use{57},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathUpdateVolTargetInfo,fd,def{48,52},use{55,60,65},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/src/storage/storage_backend_mpath.c,virStorageBackendMpathUpdateVolTargetInfo,target,def{43},use{50,54,60},dvars{rcfdret},pointers{},cfuncs{}
