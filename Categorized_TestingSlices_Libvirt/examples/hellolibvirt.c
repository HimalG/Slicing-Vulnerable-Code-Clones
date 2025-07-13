libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showDomains,active,def{93},use{96,117,122,123},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showDomains,numNames,def{89},use{92},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showDomains,numInactiveDomains,def{74},use{75,83},dvars{},pointers{},cfuncs{printf{3}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showDomains,flags,def{58},use{91,9218,9220,9235},dvars{ret,numNames},pointers{},cfuncs{connectListAllDomains{3},VIR_DEBUG{4},virConnectListAllDomains{3}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showDomains,retnumActiveDomains,def{66},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showDomains,nameList,def{60},use{90,93,95,98,100,254,256,258,259,260,262,263,266,271,272,273,274,338,343,581,598,605,2320,2322,2326,2331,3424,3426,3430,3435,17365,17367,17371,17376,17378,17386},dvars{is_zero,ret,klass,numNames},pointers{},cfuncs{(handler){1},domainIsActive{1},memset{3},memset{1},virDispatchError{1},virAtomicIntDecAndTest{1},virConnectListAllDomains{2},dispose{1},VIR_DOMAIN_DEBUG{1},PROBE{3},VIR_FREE{1},free{1},virDomainGetName{2},VIR_DEBUG{2},virDomainFree{1},virObjectUnref{1},virDomainIsActive{1}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showDomains,ret,def{57,68,76},use{68,76,103},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showDomains,conn,def{55},use{66,74,89,581,598,605,1894,1896,1900,1906,1907,1915,9067,9069,9073,9079,9081,9090,9216,9220,9227,9233,9235,9244},dvars{ret,numNames,numInactiveDomains,retnumActiveDomains},pointers{},cfuncs{connectNumOfDefinedDomains{1},connectNumOfDomains{1},virDispatchError{1},(handler){1},virConnectListAllDomains{1},connectListAllDomains{1},VIR_DEBUG{2},virConnectNumOfDefinedDomains{1},virConnectNumOfDomains{1}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,main,uri,def{112,116,129},use{117,120,122,123,130,137,138,1129,1141,1144,1145,1155,1160,1437,1446,1448},dvars{returi,ret,retval,conn},pointers{conn,argc},cfuncs{VIR_DEBUG{2},VIR_FREE{1},do_open{1},NULLSTR{2},vfprintf {2},va_start {2},free{1},printf{2},virConnectOpenAuth{1}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,main,conn,def{111,120},use{122,129,140,145,151,581,598,605,1738,1741,1745,1751,1757},dvars{NULLname},pointers{},cfuncs{(handler){1},VIR_DEBUG{2},virDispatchError{1},virConnectGetURI{1}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,main,ret,def{110,123,131,141,146,154},use{123,131,141,146,154,160},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,main,argv[],def{108},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,main,argc,def{108},use{116,120},dvars{conn},pointers{},cfuncs{}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showHypervisorInfo,major,def{16,38},use{45},dvars{},pointers{},cfuncs{printf{3}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showHypervisorInfo,minor,def{16,40},use{46},dvars{},pointers{},cfuncs{printf{4}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showHypervisorInfo,hvType,def{17},use{24,44,117,122,123},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showHypervisorInfo,hvVer,def{16},use{31,38,39,40,41},dvars{release,minor,major},pointers{},cfuncs{}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showHypervisorInfo,ret,def{15,25,32},use{25,32,50},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showHypervisorInfo,rethvType,def{23},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showHypervisorInfo,release,def{16,41},use{47,117},dvars{},pointers{},cfuncs{printf{5}}
libvirt-1.1.0/examples/hellolibvirt/hellolibvirt.c,showHypervisorInfo,conn,def{13},use{23,31,1579,1582,1586,1592,1593,1596},dvars{rethvType},pointers{},cfuncs{connectGetType{1},VIR_DEBUG{2},virConnectGetType{1}}
