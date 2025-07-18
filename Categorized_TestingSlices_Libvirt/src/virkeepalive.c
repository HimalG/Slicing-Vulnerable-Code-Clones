libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveStop,ka,def{301,311},use{84,85,88,90,157,162,210,224,303,307,309,310,311,314,316,318,320,324,337,339,341,345},dvars{},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},virEventRemoveTimeout{1},PROBE{4},PROBE{3},virObjectLock{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveDispose,ka,def{224},use{227,229},dvars{},pointers{},cfuncs{freeCB{1},PROBE{3}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveDispose,obj,def{222},use{224},dvars{ka},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveCheckMessage,ret,def{371,392},use{414},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveCheckMessage,msg,def{368},use{374,385,386,387,390,391,393,405},dvars{},pointers{},cfuncs{PROBE{7},PROBE{6},PROBE{5},VIR_DEBUG{2},VIR_DEBUG{4}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveCheckMessage,response,def{369,376,396},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveCheckMessage,ka,def{367,382,383},use{84,85,88,90,142,144,210,224,316,318,320,324,337,339,341,345,374,377,380,390,395,396,400,405,409,410,412},dvars{response},pointers{},cfuncs{updateTimeoutImpl{1},updateTimeoutImpl{2},pthread_mutex_unlock{1},VIR_WARN{3},VIR_WARN{2},virMutexLock{1},virObjectUnlock{1},virEventUpdateTimeout{2},virEventUpdateTimeout{1},virMutexUnlock{1},VIR_DEBUG{2},VIR_DEBUG{3},virKeepAliveMessage{1},pthread_mutex_lock{1},PROBE{4},PROBE{3},virObjectLock{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveNew,ka,def{194,205,206,207,208,209,210,211},use{207,215,217},dvars{},pointers{},cfuncs{PROBE{4},PROBE{3}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveNew,freeCB,def{192},use{211},dvars{ka},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveNew,deadCB,def{191},use{210},dvars{ka},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveNew,sendCB,def{190},use{209},dvars{ka},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveNew,client,def{189},use{196,208,215},dvars{ka},pointers{},cfuncs{PROBE{4},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveNew,count,def{188},use{196,205,206},dvars{ka},pointers{},cfuncs{VIR_DEBUG{4}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveNew,NULLka,def{201,204},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveNew,interval,def{187},use{196,204},dvars{NULLka},pointers{},cfuncs{VIR_DEBUG{3}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveOnceInit,virNetServerClientSendMessageclientmsgvirKeepAliveClass,def{58},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveOnceInit,,def{56},use{58,60,61,119,121,135,140,141,143,144,145,147,150},dvars{klass},pointers{},cfuncs{VIR_FREE{1},virClassNew{1},virClassNew{4},virClassNew{0}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimer,dead,def{157,163},use{165,171},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimer,client,def{158,162},use{172,173,174},dvars{},pointers{ka},cfuncs{VIR_WARN{2},deadCB{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimer,msg,def{156},use{68,71,74,76,77,79,80,81,82,83,116,145,163,165,173,175},dvars{dead},pointers{},cfuncs{cb{2},cb{1},VIR_DEBUG{4},VIR_DEBUG{3},VIR_DEBUG{2},VIR_FREE{1},virNetMessageFree{1},VIR_FORCE_CLOSE{1},virKeepAliveTimerInternal{2}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimer,ka,def{155},use{84,85,88,90,160,162,163,168,169,172,173,178,179,182,210,224,254,256,258,259,260,262,263,266,271,272,273,274,316,318,320,324,337,338,339,341,343,345},dvars{klass,is_zero,dead},pointers{},cfuncs{pthread_mutex_unlock{1},virMutexUnlock{1},VIR_WARN{3},VIR_WARN{2},virAtomicIntDecAndTest{1},dispose{1},pthread_mutex_lock{1},virKeepAliveTimerInternal{1},PROBE{3},virObjectUnref{1},virMutexLock{1},virObjectRef{1},virObjectUnlock{1},VIR_FREE{1},memset{3},memset{1},virObjectLock{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimer,opaque,def{153},use{155},dvars{ka},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimer,ATTRIBUTE_UNUSED,def{153},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTrigger,dead,def{352,359},use{362},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTrigger,msg,def{350,354},use{116,145,359},dvars{dead},pointers{},cfuncs{virKeepAliveTimerInternal{2}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTrigger,ka,def{349},use{84,85,88,90,210,224,316,318,320,324,337,339,341,345,355,358,359,360},dvars{dead},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},virObjectUnlock{1},virKeepAliveTimerInternal{1},virObjectLock{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimerInternal,timeval,def{119,125},use{126,133,140,142,144},dvars{},pointers{},cfuncs{updateTimeoutImpl{2},VIR_WARN{4},PROBE{6},virEventUpdateTimeout{2}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimerInternal,now,def{118},use{124,125,130,144},dvars{ka,falsetimeval,timeval},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimerInternal,falsetimeval,def{130},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimerInternal,msg,def{116,145},use{},dvars{},pointers{msg},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimerInternal,ka,def{115,144},use{121,124,125,126,130,133,135,138,139,142,143,144,145,146},dvars{msg,falsetimeval,timeval},pointers{},cfuncs{updateTimeoutImpl{1},updateTimeoutImpl{2},VIR_WARN{3},VIR_WARN{2},PROBE{5},PROBE{4},PROBE{3},virEventUpdateTimeout{2},virKeepAliveMessage{1},virEventUpdateTimeout{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveMessage,NULLmsg,def{87},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveMessage,procstr,def{73,77,80},use{77,80,101,109},dvars{},pointers{},cfuncs{VIR_WARN{2},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveMessage,msg,def{72,90,91,92,93},use{68,71,74,76,77,79,80,81,82,83,95,96,97,104,106},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1},cb{2},cb{1},VIR_DEBUG{4},VIR_DEBUG{3},VIR_DEBUG{2},PROBE{7},PROBE{6},PROBE{5},VIR_FREE{1},virNetMessageFree{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveMessage,proc,def{70},use{75,83,93,104},dvars{msg},pointers{},cfuncs{PROBE{7},VIR_WARN{2}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveMessage,ka,def{70},use{101,104},dvars{},pointers{},cfuncs{PROBE{4},PROBE{3},VIR_DEBUG{3}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimeout,timeout,def{321,329,331,333,336},use{329,332,333,335,341,344},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveTimeout,ka,def{319},use{84,85,88,90,210,224,316,318,320,323,324,326,328,331,337,339,341,345},dvars{timeout},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virObjectUnlock{1},virMutexUnlock{1},virObjectLock{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveStart,timeout,def{240,281,283},use{117,125,281,284,285},dvars{ka},pointers{},cfuncs{virEventAddTimeout{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveStart,delay,def{239,279},use{280,283},dvars{timeout},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveStart,count,def{236},use{264,265,276},dvars{ka},pointers{},cfuncs{PROBE{6}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveStart,now,def{241,278},use{279,284},dvars{ka,delay},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveStart,ret,def{238,247,270,292},use{247,270,292,296},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveStart,interval,def{235},use{251,252,258,260,263,268,276,280,283,284},dvars{timeout,ka},pointers{},cfuncs{PROBE{5},virReportError{2}}
libvirt-1.1.0/src/rpc/virkeepalive.c,virKeepAliveStart,ka,def{234,263,264,265,284,285},use{84,85,88,90,119,125,210,224,243,245,252,268,276,279,280,283,286,287,290,291,292,295,298,316,318,320,324,337,339,341,345},dvars{obj,timeout,delay},pointers{},cfuncs{pthread_mutex_unlock{1},virObjectRef{1},virObjectUnlock{1},virMutexLock{1},VIR_WARN{3},VIR_WARN{2},virMutexUnlock{1},pthread_mutex_lock{1},PROBE{4},PROBE{3},virEventAddTimeout{3},virObjectLock{1}}
libvirt-1.1.0/src/rpc/virkeepalive.c,GLOBAL,obj,def{54},use{},dvars{},pointers{},cfuncs{}
