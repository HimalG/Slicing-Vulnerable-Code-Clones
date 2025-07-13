libvirt-1.1.0/src/locking/sanlock_helper.c,authCallback,ATTRIBUTE_UNUSED,def{42,43,44},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,getArgs,act,def{20,30},use{31,35},dvars{action},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,getArgs,uuid,def{17,28},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,getArgs,action,def{18,35},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,getArgs,uri,def{16,27},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,getArgs,argv,def{15},use{23,27,28,30,32,132,137,138},dvars{act,uuid,retval,uri},pointers{},cfuncs{vfprintf {2},va_start {2},virDomainLockFailureTypeFromString{1},fprintf{2}}
libvirt-1.1.0/src/locking/sanlock_helper.c,getArgs,argc,def{14},use{22},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,auth,def{67},use{83},dvars{conn},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,conn,def{57,83},use{110,133,134},dvars{dom},pointers{},cfuncs{virConnectClose{1}}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,xml,def{56,101},use{105,110,135},dvars{dom},pointers{dom},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,dom,def{58,110},use{84,89,90,95,96,97,98,101,106,107,109,110,116,131,132,254,256,258,259,260,262,263,266,271,272,273,274,338,343,581,598,605,2320,2322,2326,2331,4395,4407,4409,4415,4417,4426},dvars{NULLconn,is_zero,klass,dom,conn},pointers{},cfuncs{(handler){1},virAtomicIntDecAndTest{1},virDispatchError{1},memset{3},memset{1},dispose{1},virObjectUnref{1},PROBE{3},VIR_DOMAIN_DEBUG{1},VIR_FREE{1},virDomainFree{1},virDomainGetXMLDesc{1}}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,uuid,def{54},use{80,84},dvars{conn},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,action,def{55},use{80,87,126},dvars{},pointers{},cfuncs{virDomainLockFailureTypeToString{2}}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,authTypes,def{61},use{68,69},dvars{auth},pointers{},cfuncs{ARRAY_CARDINALITY{1}}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,uri,def{53},use{80,83},dvars{conn},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,argv,def{51},use{76,80,132,137,138},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},fprintf{2}}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,ret,def{59,91,99,111,117,121},use{137},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/locking/sanlock_helper.c,main,argc,def{51},use{80},dvars{},pointers{},cfuncs{}
