libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadData,conf,def{183},use{139,143,144,145,146,147,158,160,162,163,164,165,166,167,168,187,190,191,804,808,809,811,812,813,814,815,816},dvars{next,ret},pointers{},cfuncs{virConfFreeValue{1},virConfFreeList{1},VIR_FREE{1},virConfFree{1},virLockDaemonConfigLoadOptions{3}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadData,data,def{179},use{140,142,143,144,145,190},dvars{ret},pointers{},cfuncs{GET_CONF_STR{1},GET_CONF_INT{1},virLockDaemonConfigLoadOptions{1}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadData,filedata,def{181},use{186,781,783,788,790},dvars{len,retconf},pointers{},cfuncs{strlen{1},strlen{2},virConfReadMem{1}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadData,retconf,def{186},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadData,filename,def{180},use{139,142,143,144,145,190},dvars{ret},pointers{},cfuncs{GET_CONF_STR{2},GET_CONF_INT{2},virLockDaemonConfigLoadOptions{2}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadData,ret,def{184,190},use{192},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadFile,conf,def{162,170},use{139,143,144,145,146,147,158,160,162,163,164,165,166,167,168,171,174,175,804,808,809,811,812,813,814,815,816},dvars{next,ret},pointers{},cfuncs{virConfFreeValue{1},virConfFreeList{1},VIR_FREE{1},virConfFree{1},virLockDaemonConfigLoadOptions{3}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadFile,allow_missing,def{160},use{165},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadFile,filename,def{159},use{139,142,143,144,145,166,170,174,196,201,698,706,746,757,761,763},dvars{NULLconf,ctxt,NULLlen,ret,conf},pointers{},cfuncs{virConfCreate{2},GET_CONF_STR{2},GET_CONF_INT{2},VIR_FREE{1},virConfParse{2},virLockDaemonConfigLoadOptions{2},virConfReadFile{1}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadFile,ret,def{163,174},use{176},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadFile,data,def{158},use{140,142,143,144,145,174},dvars{ret},pointers{},cfuncs{GET_CONF_STR{1},GET_CONF_INT{1},virLockDaemonConfigLoadOptions{1}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadOptions,conf,def{140},use{142,143,144,145},dvars{},pointers{},cfuncs{GET_CONF_STR{1},GET_CONF_INT{1}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadOptions,filename,def{139},use{142,143,144,145},dvars{},pointers{filename},cfuncs{GET_CONF_STR{2},GET_CONF_INT{2}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigLoadOptions,data,def{138},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigNew,NULLdata,def{120},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigNew,data,def{113},use{115,120,122},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigNew,ATTRIBUTE_UNUSED,def{111},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigFilePath,configdir,def{89,91},use{94,95,98},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigFilePath,configfile,def{83},use{86,94},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigFilePath,privileged,def{83},use{85},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,virLockDaemonConfigFree,data,def{126},use{128,131,132,134},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,checkType,required_type,def{42},use{44,49},dvars{},pointers{},cfuncs{virConfTypeName{2}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,checkType,key,def{42},use{47},dvars{},pointers{},cfuncs{virReportError{3}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,checkType,,def{59,72},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/lock_daemon_config.c,checkType,filename,def{41},use{47},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/locking/lock_daemon_config.c,checkType,p,def{41},use{44,48},dvars{},pointers{},cfuncs{virConfTypeName{4}}
