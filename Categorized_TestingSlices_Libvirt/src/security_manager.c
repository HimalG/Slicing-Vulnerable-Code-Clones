libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetImageFDLabel,fd,def{652},use{657},dvars{ret},pointers{},cfuncs{domainSetSecurityImageFDLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetImageFDLabel,ret,def{655,657},use{659},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetImageFDLabel,vm,def{651},use{657},dvars{ret},pointers{},cfuncs{domainSetSecurityImageFDLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetImageFDLabel,mgr,def{650},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,654,656,657,658},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},virMutexUnlock{1},virObjectUnlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},pthread_mutex_unlock{1},domainSetSecurityImageFDLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerVerify,secdef,def{625,634},use{635},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerVerify,def,def{623},use{634,641,17950,17955,17958,17959,17961,17962},dvars{ret,secdef},pointers{},cfuncs{domainSecurityVerify{2},virDomainDefGetSecurityLabelDef{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerVerify,ret,def{639,641},use{643},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerVerify,mgr,def{622},use{84,85,210,316,318,320,324,627,634,638,640,641,642,17950,17955,17959,17961},dvars{ret,secdef},pointers{},cfuncs{virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virObjectUnlock{1},domainSecurityVerify{1},virObjectLock{1},pthread_mutex_lock{1},virDomainDefGetSecurityLabelDef{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetHugepages,path,def{718},use{723},dvars{ret},pointers{},cfuncs{domainSetSecurityHugepages{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetHugepages,ret,def{721,723},use{725},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetHugepages,vm,def{717},use{723},dvars{ret},pointers{},cfuncs{domainSetSecurityHugepages{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetHugepages,mgr,def{716},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,720,722,723,724},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexUnlock{1},domainSetSecurityHugepages{1},virObjectUnlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetChildProcessLabel,cmd,def{613},use{616},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetChildProcessLabel,vm,def{612},use{616},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetChildProcessLabel,mgr,def{611},use{615,616},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetProcessLabel,sec,def{582},use{587},dvars{ret},pointers{},cfuncs{domainGetSecurityProcessLabel{4}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetProcessLabel,pid,def{581},use{587},dvars{ret},pointers{},cfuncs{domainGetSecurityProcessLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetProcessLabel,ret,def{585,587},use{589},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetProcessLabel,vm,def{580},use{587},dvars{ret},pointers{},cfuncs{domainGetSecurityProcessLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetProcessLabel,mgr,def{579},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,584,586,587,588},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexUnlock{1},virObjectUnlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},domainGetSecurityProcessLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerReleaseLabel,ret,def{536,538},use{540},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerReleaseLabel,vm,def{533},use{538},dvars{ret},pointers{},cfuncs{domainReleaseSecurityLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerReleaseLabel,mgr,def{532},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,535,537,538,539},dvars{ret},pointers{conn,ctl,driver,nwfilter,nwfilters,ipl,c,state,req,dom,vm,mgr,m},cfuncs{pthread_mutex_lock{1},virMutexUnlock{1},virObjectUnlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},pthread_mutex_unlock{1},domainReleaseSecurityLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerReserveLabel,pid,def{518},use{523},dvars{ret},pointers{},cfuncs{domainReserveSecurityLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerReserveLabel,ret,def{521,523},use{525},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerReserveLabel,vm,def{517},use{523},dvars{ret},pointers{},cfuncs{domainReserveSecurityLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerReserveLabel,mgr,def{516},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,520,522,523,524},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexUnlock{1},virObjectUnlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},domainReserveSecurityLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetProcessLabel,ret,def{600,602},use{604},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetProcessLabel,vm,def{597},use{602},dvars{ret},pointers{},cfuncs{domainSetSecurityProcessLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetProcessLabel,mgr,def{596},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,599,601,602,603},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},domainSetSecurityProcessLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreSavedStateLabel,savefile,def{410},use{415},dvars{ret},pointers{},cfuncs{domainRestoreSavedStateLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreSavedStateLabel,ret,def{413,415},use{417},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreSavedStateLabel,vm,def{409},use{415},dvars{ret},pointers{},cfuncs{domainRestoreSavedStateLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreSavedStateLabel,mgr,def{408},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,412,414,415,416},dvars{ret},pointers{m},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},domainRestoreSavedStateLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetSavedStateLabel,savefile,def{394},use{399},dvars{ret},pointers{tmp},cfuncs{domainSetSavedStateLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetSavedStateLabel,ret,def{397,399},use{401},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetSavedStateLabel,vm,def{393},use{399},dvars{ret},pointers{},cfuncs{domainSetSavedStateLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetSavedStateLabel,mgr,def{392},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,396,398,399,400},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},domainSetSavedStateLabel{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetHostdevLabel,dev,def{377},use{383},dvars{ret},pointers{},cfuncs{domainSetSecurityHostdevLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetHostdevLabel,ret,def{381,383},use{385},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetHostdevLabel,vroot,def{378},use{383},dvars{ret},pointers{},cfuncs{domainSetSecurityHostdevLabel{4}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetHostdevLabel,vm,def{376},use{383},dvars{ret},pointers{},cfuncs{domainSetSecurityHostdevLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetHostdevLabel,mgr,def{375},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,380,382,383,384},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},domainSetSecurityHostdevLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetRequireConfined,mgr,def{276},use{278},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetNested,NULLlist,def{711},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetNested,list,def{700,712},use{706,713},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetNested,mgr,def{698},use{702,703,711},dvars{NULLlist},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetModel,ret,def{255,257},use{259},dvars{},pointers{mgr},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetModel,mgr,def{252},use{84,85,88,90,210,224,254,256,257,258,316,318,320,324,337,339,341,345},dvars{},pointers{m},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},getModel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetDefaultConfined,mgr,def{271},use{273},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerStackAddNested,nested,def{126},use{130},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerStackAddNested,stack,def{125},use{128,130},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetSocketLabel,ret,def{316,318},use{320},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetSocketLabel,vm,def{313},use{318},dvars{ret},pointers{},cfuncs{domainSetSecuritySocketLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetSocketLabel,mgr,def{312},use{84,85,88,90,210,224,315,316,317,318,319,320,324,337,339,341,345},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexUnlock{1},virObjectUnlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},domainSetSecuritySocketLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewStack,mgr,def{110},use{45,49,117,120,122,215,217},dvars{},pointers{},cfuncs{virSecurityManagerGetPrivateData{1},virSecurityStackAddNested{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewStack,primary,def{108},use{112,113,114,115,120},dvars{},pointers{},cfuncs{virSecurityManagerGetRequireConfined{2},virSecurityStackAddNested{2},virSecurityManagerGetAllowDiskFormatProbing{2},virSecurityManagerGetDefaultConfined{2},virSecurityManagerGetDriver{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetDaemonSocketLabel,ret,def{301,303},use{305},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetDaemonSocketLabel,vm,def{298},use{303},dvars{ret},pointers{},cfuncs{domainSetSecurityDaemonSocketLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetDaemonSocketLabel,mgr,def{297},use{84,85,88,90,210,224,300,302,303,304,316,318,320,324,337,339,341,345},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},pthread_mutex_unlock{1},domainSetSecurityDaemonSocketLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetDriver,mgr,def{231},use{233},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetAllLabel,stdin_path,def{549},use{554},dvars{ret},pointers{},cfuncs{domainSetSecurityAllLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetAllLabel,ret,def{552,554},use{556},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetAllLabel,vm,def{548},use{554},dvars{ret},pointers{},cfuncs{domainSetSecurityAllLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetAllLabel,mgr,def{547},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,551,553,554,555},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},pthread_mutex_unlock{1},domainSetSecurityAllLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetPrivateData,mgr,def{215},use{217},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreImageLabel,disk,def{283},use{288},dvars{ret},pointers{},cfuncs{domainRestoreSecurityImageLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreImageLabel,ret,def{286,288},use{290},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreImageLabel,vm,def{282},use{288},dvars{ret},pointers{},cfuncs{domainRestoreSecurityImageLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreImageLabel,mgr,def{281},use{84,85,88,90,210,224,285,287,288,289,316,318,320,324,337,339,341,345},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},domainRestoreSecurityImageLabel{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetMountOptions,ret,def{686,688},use{690},dvars{},pointers{vm,mgr},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetMountOptions,vm,def{683},use{688},dvars{},pointers{},cfuncs{domainGetSecurityMountOptions{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetMountOptions,mgr,def{682},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,685,687,688,689},dvars{},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},domainGetSecurityMountOptions{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,GLOBAL,obj,def{50},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGenLabel,retsec_managers,def{436},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGenLabel,generated,def{431,454,459},use{476,489,510},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGenLabel,seclabel,def{430,455,457,464,466,467,479,502},use{456,459,462,471,478,490,511,1075,1077,1079,1080,1081,1082,1083},dvars{generated},pointers{},cfuncs{VIR_FREE{1},virSecurityLabelDefFree{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGenLabel,j,def{428},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGenLabel,i,def{428},use{440},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGenLabel,sec_managers,def{429},use{441,442,445,453,455,457,463,472,484,495,512,17950,17955,17959,17961},dvars{seclabel},pointers{},cfuncs{VIR_FREE{1},virDomainDefGetSecurityLabelDef{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGenLabel,ret,def{427,506},use{434,437,506,513},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGenLabel,vm,def{425},use{440,442,448,455,476,490,495,496,497,498,17950,17955,17958,17959,17961,17962},dvars{seclabel},pointers{},cfuncs{virDomainDefGetSecurityLabelDef{1},virReportError{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGenLabel,mgr,def{424},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,433,436,439,509},dvars{retsec_managers},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virObjectUnlock{1},virMutexUnlock{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerPostFork,mgr,def{210},use{88,90,212,224,337,339,341,345},dvars{},pointers{m},cfuncs{pthread_mutex_unlock{1},virMutexUnlock{1},VIR_WARN{3},VIR_WARN{2},virObjectUnlock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNew,drv,def{164},use{165,169,188},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNew,requireConfined,def{162},use{170,192},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNew,defaultConfined,def{161,184},use{176,191},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNew,allowDiskFormatProbing,def{160},use{190},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNew,virtDriver,def{159},use{61,64,67,69,70,74,75,164,189},dvars{drv},pointers{},cfuncs{VIR_DEBUG{2},virSecurityDriverLookup{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNew,name,def{158},use{164,169,177},dvars{},pointers{driver},cfuncs{virSecurityDriverLookup{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetTapFDLabel,fd,def{668},use{673},dvars{ret},pointers{},cfuncs{domainSetSecurityTapFDLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetTapFDLabel,ret,def{671,673},use{675},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetTapFDLabel,vm,def{667},use{673},dvars{ret},pointers{},cfuncs{domainSetSecurityTapFDLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetTapFDLabel,mgr,def{666},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,670,672,673,674},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},domainSetSecurityTapFDLabel{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerPreFork,mgr,def{200},use{84,85,202,210,316,318,320,324},dvars{},pointers{m},cfuncs{pthread_mutex_lock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerClearSocketLabel,ret,def{331,333},use{335},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerClearSocketLabel,vm,def{328},use{333},dvars{ret},pointers{},cfuncs{domainClearSecuritySocketLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerClearSocketLabel,mgr,def{327},use{84,85,88,90,210,224,316,318,320,324,330,332,333,334,337,339,341,345},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},domainClearSecuritySocketLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDAC,dynamicOwnership,def{139},use{67,70,153},dvars{priv},pointers{},cfuncs{virSecurityDACSetDynamicOwnership{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDAC,mgr,def{141},use{50,53,58,61,66,69,148,151,152,153,155,215,217},dvars{},pointers{},cfuncs{virSecurityManagerGetPrivateData{1},virSecurityDACSetGroup{1},virSecurityDACSetDynamicOwnership{1},virSecurityDACSetUser{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDAC,requireConfined,def{138},use{67,80,94,146},dvars{mgr},pointers{},cfuncs{VIR_DEBUG{5},virSecurityManagerNewDriver{5}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDAC,defaultConfined,def{137},use{66,79,97,145},dvars{mgr},pointers{},cfuncs{VIR_DEBUG{4},virSecurityManagerNewDriver{4}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDAC,user,def{134},use{151},dvars{},pointers{},cfuncs{virSecurityDACSetUser{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDAC,allowDiskFormatProbing,def{136},use{65,79,83,93,100,144},dvars{NULLmgr},pointers{},cfuncs{VIR_DEBUG{3},VIR_DEBUG{2},virSecurityManagerNewDriver{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDAC,group,def{135},use{59,62,152},dvars{priv},pointers{},cfuncs{virSecurityDACSetGroup{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDAC,virtDriver,def{133},use{143},dvars{},pointers{},cfuncs{virSecurityManagerNewDriver{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreAllLabel,ret,def{568,570},use{572},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreAllLabel,migrated,def{565},use{570},dvars{ret},pointers{},cfuncs{domainRestoreSecurityAllLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreAllLabel,vm,def{564},use{570},dvars{ret},pointers{},cfuncs{domainRestoreSecurityAllLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreAllLabel,mgr,def{563},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,567,569,570,571},dvars{ret},pointers{m},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},domainRestoreSecurityAllLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerDispose,mgr,def{223},use{225,226,227},dvars{},pointers{},cfuncs{VIR_FREE{1},close{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerDispose,obj,def{221},use{223},dvars{mgr},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerOnceInit,FALSETRUEvirSecurityManagerClass,def{54},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerOnceInit,,def{52},use{54,56,57,119,121,135,140,141,143,144,145,147,150},dvars{klass},pointers{},cfuncs{VIR_FREE{1},virClassNew{1},virClassNew{4},virClassNew{0}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreHostdevLabel,dev,def{360},use{366},dvars{ret},pointers{},cfuncs{domainRestoreSecurityHostdevLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreHostdevLabel,ret,def{364,366},use{368},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreHostdevLabel,vroot,def{361},use{366},dvars{ret},pointers{},cfuncs{domainRestoreSecurityHostdevLabel{4}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreHostdevLabel,vm,def{359},use{366},dvars{ret},pointers{},cfuncs{domainRestoreSecurityHostdevLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerRestoreHostdevLabel,mgr,def{358},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,363,365,366,367},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},domainRestoreSecurityHostdevLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetImageLabel,disk,def{344},use{349},dvars{ret},pointers{},cfuncs{domainSetSecurityImageLabel{3}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetImageLabel,ret,def{347,349},use{351},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetImageLabel,vm,def{343},use{349},dvars{ret},pointers{},cfuncs{domainSetSecurityImageLabel{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerSetImageLabel,mgr,def{342},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,346,348,349,350},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexUnlock{1},virObjectUnlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},domainSetSecurityImageLabel{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetDOI,ret,def{240,242},use{244},dvars{},pointers{mgr},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetDOI,mgr,def{237},use{84,85,88,90,210,224,239,241,242,243,316,318,320,324,337,339,341,345},dvars{},pointers{m},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},getDOI{1},virObjectLock{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDriver,NULLmgr,def{88,93},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDriver,privateData,def{72},use{83,89,98},dvars{mgr},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDriver,mgr,def{71,94,95,96,97,98},use{100,101,105,254,256,258,259,260,262,263,266,271,272,273,274,338,343},dvars{klass,is_zero},pointers{},cfuncs{VIR_FREE{1},dispose{1},virAtomicIntDecAndTest{1},memset{3},memset{1},PROBE{3},virObjectUnref{1}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDriver,drv,def{65},use{79,83,93,100},dvars{NULLmgr},pointers{},cfuncs{VIR_DEBUG{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDriver,requireConfined,def{69},use{81,96},dvars{mgr},pointers{},cfuncs{VIR_DEBUG{7}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDriver,defaultConfined,def{68},use{80,95},dvars{mgr},pointers{},cfuncs{VIR_DEBUG{6}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDriver,allowDiskFormatProbing,def{67},use{80,94},dvars{mgr},pointers{},cfuncs{VIR_DEBUG{5}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerNewDriver,virtDriver,def{66},use{79,97},dvars{mgr},pointers{defaultConfined},cfuncs{VIR_DEBUG{4}}
libvirt-1.1.0/src/security/security_manager.c,virSecurityManagerGetAllowDiskFormatProbing,mgr,def{266},use{268},dvars{},pointers{},cfuncs{}
