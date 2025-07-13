libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStop,reason,def{866},use{868},dvars{},pointers{},cfuncs{virDomainAuditLifecycle{3}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStop,vm,def{866},use{770,775,787,789,868},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{7},virDomainAuditLifecycle{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditSecurityLabel,vmname,def{875,880},use{893,899},dvars{},pointers{driver,vm},cfuncs{VIR_FREE{1},VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditSecurityLabel,uuidstr,def{874},use{879,893},dvars{},pointers{},cfuncs{VIR_AUDIT{6},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditSecurityLabel,success,def{872},use{891},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditSecurityLabel,i,def{877},use{890},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditSecurityLabel,virt,def{876,885,887},use{887,893},dvars{},pointers{vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditSecurityLabel,vm,def{872},use{42,44,45,47,209,211,217,218,879,880,885,886,890,894,895,896},dvars{},pointers{},cfuncs{va_end {1},va_start {1},snprintf{1},VIR_AUDIT_STR{2},VIR_AUDIT_STR{7},vasnprintf {4},VIR_WARN{2},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditInit,virt,def{843,852,854},use{854,859},dvars{},pointers{vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditInit,vmname,def{842,847},use{859,862},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditInit,uuidstr,def{841},use{845,859},dvars{},pointers{},cfuncs{VIR_AUDIT{6},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditInit,vm,def{837},use{42,44,45,47,209,211,217,218,845,847,852,853,859},dvars{},pointers{},cfuncs{va_end {1},snprintf{1},VIR_AUDIT{7},va_start {1},vasnprintf {4},VIR_WARN{2},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditInit,initpid,def{838},use{859},dvars{},pointers{},cfuncs{VIR_AUDIT{8}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditInit,pidns,def{839},use{860},dvars{},pointers{},cfuncs{VIR_AUDIT{9}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStart,redirdev,def{820},use{487,524,821},dvars{},pointers{},cfuncs{VIR_AUDIT{2},virDomainAuditRedirdev{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStart,net,def{810},use{811},dvars{},pointers{},cfuncs{virDomainAuditNet{3}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStart,fs,def{805},use{223,250,251,806},dvars{},pointers{},cfuncs{virDomainAuditFS{3}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStart,disk,def{799},use{94,118,800,801},dvars{},pointers{},cfuncs{virDomainAuditDisk{3}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStart,success,def{794},use{771,780,782,787,833},dvars{},pointers{},cfuncs{VIR_AUDIT{4},virDomainAuditLifecycle{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStart,i,def{796},use{798,804,809,814,819},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStart,reason,def{794},use{833},dvars{},pointers{},cfuncs{virDomainAuditLifecycle{3}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStart,hostdev,def{815},use{362,423,439,451,816},dvars{},pointers{},cfuncs{VIR_AUDIT{2},virDomainAuditHostdev{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditStart,vm,def{794},use{100,118,126,131,138,145,198,204,207,212,229,249,259,264,276,284,296,300,367,397,418,427,433,441,445,453,471,492,519,528,532,548,553,570,575,577,585,750,751,754,758,759,762,770,775,787,789,798,799,801,804,805,806,809,810,811,814,815,816,819,820,821,824,825,827,828,830,831,833},dvars{hostdev,net,fs,redirdev,disk},pointers{path,address,newDef,newsrcpath,hostdev,vm},cfuncs{VIR_AUDIT{6},VIR_AUDIT{8},VIR_AUDIT{9},VIR_AUDIT{2},VIR_AUDIT{7},VIR_FREE{1},virDomainAuditLifecycle{1},virDomainAuditMemory{3},virDomainAuditMemory{1},virDomainAuditRNG{2},virDomainAuditRNG{1},virDomainAuditDisk{1},virDomainAuditVcpu{3},virDomainAuditVcpu{1},virDomainAuditRedirdev{1},virDomainAuditHostdev{1},virDomainAuditNet{1},virDomainAuditTPM{2},virDomainAuditTPM{1},virDomainAuditFS{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditLifecycle,virt,def{771,780,782},use{782,787},dvars{},pointers{success,vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditLifecycle,success,def{767},use{785},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditLifecycle,reason,def{767},use{787},dvars{},pointers{},cfuncs{VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditLifecycle,uuidstr,def{769},use{773,787},dvars{},pointers{},cfuncs{VIR_AUDIT{8},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditLifecycle,vmname,def{770,775},use{787,789},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{7}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditLifecycle,op,def{766},use{787},dvars{},pointers{},cfuncs{VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditLifecycle,vm,def{766},use{42,44,45,47,209,211,217,218,773,775,780,781,787},dvars{},pointers{},cfuncs{va_end {1},snprintf{1},VIR_AUDIT{9},va_start {1},vasnprintf {4},VIR_WARN{2},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditMemory,success,def{752},use{754},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditMemory,newmem,def{751},use{754},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditMemory,reason,def{752},use{754},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditMemory,oldmem,def{751},use{754},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditMemory,vm,def{750},use{754},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupMajor,extra,def{655},use{610,618,620,630,657,663,665},dvars{},pointers{vm,extra},cfuncs{VIR_AUDIT{4},VIR_FREE{1},virDomainAuditCgroup{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupMajor,success,def{653},use{604,630,663},dvars{},pointers{},cfuncs{VIR_AUDIT{5},virDomainAuditCgroup{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupMajor,name,def{652},use{658},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupMajor,reason,def{652},use{663},dvars{},pointers{},cfuncs{virDomainAuditCgroup{3}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupMajor,perms,def{653},use{658},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupMajor,maj,def{652},use{658},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupMajor,cgroup,def{651},use{604,628,663},dvars{},pointers{},cfuncs{VIR_AUDIT{2},virDomainAuditCgroup{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupMajor,vm,def{651},use{609,626,631,635,663},dvars{},pointers{},cfuncs{VIR_FREE{1},VIR_AUDIT{8},virDomainAuditCgroup{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupPath,extra,def{687},use{610,618,620,630,696,702,705},dvars{},pointers{vm,extra},cfuncs{VIR_AUDIT{4},VIR_FREE{1},virDomainAuditCgroup{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupPath,rdev,def{686,693},use{697,707},dvars{},pointers{path},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupPath,rc,def{683},use{604,630,690,702},dvars{},pointers{rc},cfuncs{VIR_AUDIT{5},virDomainAuditCgroup{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupPath,detail,def{685,695},use{706},dvars{},pointers{perms,rdev,extra,path},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupPath,perms,def{682},use{697},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupPath,path,def{682},use{55,693,695,697},dvars{detail},pointers{},cfuncs{virDomainAuditGetRdev{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupPath,reason,def{682},use{702},dvars{},pointers{},cfuncs{virDomainAuditCgroup{3}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupPath,cgroup,def{681},use{604,628,702},dvars{},pointers{},cfuncs{VIR_AUDIT{2},virDomainAuditCgroup{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroupPath,vm,def{681},use{609,626,631,635,702},dvars{},pointers{},cfuncs{VIR_FREE{1},VIR_AUDIT{8},virDomainAuditCgroup{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,virt,def{324,336,338},use{338,343},dvars{},pointers{vhostfdSize,vmDef},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,rdev,def{323,328},use{343,348},dvars{},pointers{def,device},cfuncs{VIR_FREE{1},VIR_AUDIT_STR{9}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,vmname,def{321,330},use{343,346},dvars{},pointers{device,dev_name,vmDef},cfuncs{VIR_FREE{1},VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,dev_name,def{322},use{331,343,347},dvars{},pointers{},cfuncs{VIR_FREE{1},VIR_AUDIT{8}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,macstr,def{320},use{327,343},dvars{},pointers{},cfuncs{VIR_AUDIT{7},virMacAddrFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,netDef,def{316},use{42,44,45,47,191,193,197,198,327},dvars{},pointers{},cfuncs{va_end {1},vasnprintf {4},va_start {1},snprintf{1},virMacAddrFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,success,def{317},use{341},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,uuidstr,def{319},use{326,343},dvars{},pointers{},cfuncs{VIR_AUDIT{6},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,device,def{317},use{55,328,331},dvars{},pointers{},cfuncs{virDomainAuditGetRdev{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNetDevice,vmDef,def{316},use{42,44,45,47,209,211,217,218,326,330,336,337},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditTPM,virt,def{554,562,564},use{564,577},dvars{},pointers{vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditTPM,device,def{553,570},use{577,585},dvars{},pointers{vm,path},cfuncs{VIR_FREE{1},VIR_AUDIT{8}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditTPM,uuidstr,def{550},use{556,577},dvars{},pointers{},cfuncs{VIR_AUDIT{7},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditTPM,success,def{548},use{575},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditTPM,path,def{552,569},use{570},dvars{},pointers{tpm},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditTPM,reason,def{548},use{577},dvars{},pointers{},cfuncs{VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditTPM,vmname,def{551,557},use{577,584},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditTPM,tpm,def{547},use{567,569,570},dvars{device},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditTPM,vm,def{547},use{42,44,45,47,209,211,217,218,556,557,562,563},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,newsrc,def{229,249},use{259,264},dvars{},pointers{vm,newDef},cfuncs{VIR_FREE{1},VIR_AUDIT{9}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,vmname,def{227,233},use{258,262},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,oldsrc,def{228,243},use{259,263},dvars{},pointers{oldDef},cfuncs{VIR_FREE{1},VIR_AUDIT{8}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,uuidstr,def{226},use{232,258},dvars{},pointers{},cfuncs{VIR_AUDIT{7},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,success,def{224},use{256},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,newDef,def{223},use{250,251},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,reason,def{224},use{258},dvars{},pointers{},cfuncs{VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,virt,def{230,238,240},use{240,258},dvars{},pointers{vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,oldDef,def{223},use{244,245},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditFS,vm,def{222},use{42,44,45,47,209,211,217,218,232,233,238,239},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,newsrc,def{145,198},use{207,212},dvars{},pointers{vm,newsrcpath},cfuncs{VIR_FREE{1},VIR_AUDIT{9}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,virt,def{146,192,195},use{195,206},dvars{},pointers{vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,newsrcpath,def{142,152,154,158},use{154,185,198},dvars{},pointers{newDef},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,reason,def{138},use{206},dvars{},pointers{},cfuncs{VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,vmname,def{141,189},use{206,210},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,oldsrc,def{144,201},use{207,211},dvars{},pointers{oldsrcpath},cfuncs{VIR_FREE{1},VIR_AUDIT{8}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,success,def{138},use{204},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,uuidstr,def{140},use{188,206},dvars{},pointers{},cfuncs{VIR_AUDIT{7},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,oldDef,def{137},use{63,65,68,73,76,166,167,169,170,176,201},dvars{oldsrc},pointers{},cfuncs{virDomainAuditChardevPath{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,oldsrcpath,def{143,170,172,176},use{172,185,201},dvars{},pointers{oldDef},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,newDef,def{137},use{63,65,68,73,76,148,149,151,152,158,198},dvars{newsrc},pointers{},cfuncs{virDomainAuditChardevPath{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRNG,vm,def{136},use{42,44,45,47,188,189,192,194,209,211,217,218},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditHostdev,virt,def{368,376,378},use{378,425,441,453},dvars{},pointers{rv,ret,vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditHostdev,device,def{367,418,433,445},use{397,427,441,453,471},dvars{},pointers{vm,hostdev,address},cfuncs{VIR_FREE{1},VIR_AUDIT{8},VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditHostdev,vmname,def{365,371},use{425,441,453,470},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditHostdev,uuidstr,def{364},use{370,425,441,453},dvars{},pointers{},cfuncs{VIR_AUDIT{7},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditHostdev,success,def{362},use{423,439,451},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditHostdev,address,def{366},use{385,395,403,418,472},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditHostdev,reason,def{362},use{425,441,453},dvars{},pointers{},cfuncs{VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditHostdev,hostdev,def{361},use{381,383,386,387,388,389,396,397,404,405,406,407,414,426,431,434,446,458,465},dvars{},pointers{},cfuncs{virDomainHostdevSubsysTypeToString{8},VIR_WARN{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditHostdev,vm,def{361},use{42,44,45,47,209,211,217,218,370,371,376,377},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditGetRdev,ATTRIBUTE_UNUSED,def{55},use{},dvars{},pointers{device,path},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditGetRdev,ret,def{42},use{49,51,330,334,348,351,352,353},dvars{ret},pointers{},cfuncs{va_end{1},virVasprintf{3},va_start{1},virAsprintf{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditGetRdev,min,def{48},use{49},dvars{},pointers{},cfuncs{virAsprintf{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditGetRdev,sb,def{43},use{45,46,47,48},dvars{},pointers{},cfuncs{minor{1},major{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditGetRdev,maj,def{47},use{49,346},dvars{},pointers{},cfuncs{virAsprintf{3}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditGetRdev,path,def{40},use{45},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,newsrc,def{100,118},use{126,131},dvars{},pointers{vm,newDef},cfuncs{VIR_FREE{1},VIR_AUDIT{9}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,vmname,def{98,104},use{125,129},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,oldsrc,def{99,114},use{126,130},dvars{},pointers{oldDef},cfuncs{VIR_FREE{1},VIR_AUDIT{8}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,uuidstr,def{97},use{103,125},dvars{},pointers{},cfuncs{VIR_AUDIT{7},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,success,def{95},use{123},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,newDef,def{94},use{118},dvars{},pointers{def,source,dest,disk},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,reason,def{95},use{125},dvars{},pointers{ret},cfuncs{VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,virt,def{101,109,111},use{111,125},dvars{},pointers{vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,oldDef,def{94},use{114},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditDisk,vm,def{93},use{42,44,45,47,103,104,109,110,209,211,217,218},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditChardevPath,chr,def{63},use{65,68,73,76},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditVcpu,reason,def{760},use{762},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditVcpu,success,def{760},use{762},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditVcpu,newvcpu,def{759},use{762},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditVcpu,oldvcpu,def{759},use{762},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditVcpu,vm,def{758},use{762},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,virt,def{610,618,620},use{620,630},dvars{},pointers{extra,vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,detail,def{609,626},use{631,635},dvars{},pointers{vm,controller},cfuncs{VIR_FREE{1},VIR_AUDIT{8}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,vmname,def{607,613},use{630,633},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,uuidstr,def{606},use{612,630},dvars{},pointers{},cfuncs{VIR_AUDIT{7},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,controller,def{608},use{459,480,625,626,634},dvars{},pointers{},cfuncs{VIR_AUDIT_STR{2},VIR_FREE{1},virCgroupPathOfController{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,success,def{604},use{628},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,extra,def{604},use{631},dvars{},pointers{},cfuncs{VIR_AUDIT{9}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,reason,def{604},use{630},dvars{},pointers{success,rc},cfuncs{VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,cgroup,def{603},use{456,464,465,474,477,481,482,623},dvars{},pointers{},cfuncs{virCgroupPathOfController{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditCgroup,vm,def{603},use{42,44,45,47,209,211,217,218,612,613,618,619},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRedirdev,virt,def{493,501,503},use{503,526},dvars{},pointers{ret,vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRedirdev,device,def{492,519},use{528,532},dvars{},pointers{vm,address},cfuncs{VIR_FREE{1},VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRedirdev,vmname,def{490,496},use{526,531},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRedirdev,success,def{487},use{524},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRedirdev,address,def{491},use{508,519,533},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRedirdev,reason,def{487},use{526},dvars{},pointers{},cfuncs{VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRedirdev,uuidstr,def{489},use{495,526},dvars{},pointers{},cfuncs{VIR_AUDIT{7},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRedirdev,redirdev,def{486},use{506,515,527},dvars{},pointers{},cfuncs{virDomainRedirdevBusTypeToString{8},VIR_WARN{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditRedirdev,vm,def{486},use{42,44,45,47,209,211,217,218,495,496,501,502},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditResource,uuidstr,def{726},use{730,743},dvars{},pointers{},cfuncs{VIR_AUDIT{8},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditResource,success,def{724},use{741},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditResource,reason,def{724},use{743},dvars{},pointers{},cfuncs{VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditResource,oldval,def{723},use{744},dvars{},pointers{},cfuncs{VIR_AUDIT{10}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditResource,vmname,def{727,731},use{743,746},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{7}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditResource,newval,def{723},use{744},dvars{},pointers{},cfuncs{VIR_AUDIT{12}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditResource,virt,def{728,736,738},use{738,743},dvars{},pointers{vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditResource,resource,def{722},use{743,744},dvars{},pointers{},cfuncs{VIR_AUDIT{11},VIR_AUDIT{9},VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditResource,vm,def{722},use{42,44,45,47,209,211,217,218,730,731,736,737},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,vmname,def{276,284},use{296,300},dvars{},pointers{vm},cfuncs{VIR_FREE{1},VIR_AUDIT{6}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,oldMacstr,def{275},use{281,297},dvars{},pointers{},cfuncs{virMacAddrFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,uuidstr,def{273},use{279,296},dvars{},pointers{},cfuncs{VIR_AUDIT{7},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,success,def{271},use{294},dvars{},pointers{},cfuncs{VIR_AUDIT{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,newDef,def{270},use{42,44,45,47,191,193,197,198,282,283,298},dvars{},pointers{},cfuncs{va_end {1},virMacAddrFormat{1},vasnprintf {4},va_start {1},snprintf{1},VIR_AUDIT{9}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,reason,def{271},use{296},dvars{},pointers{ret},cfuncs{VIR_AUDIT{5}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,virt,def{277,289,291},use{291,296},dvars{},pointers{vm},cfuncs{VIR_AUDIT{4}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,oldDef,def{270},use{42,44,45,47,191,193,197,198,280,281,297},dvars{},pointers{},cfuncs{va_end {1},virMacAddrFormat{1},vasnprintf {4},va_start {1},snprintf{1},VIR_AUDIT{8}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,newMacstr,def{274},use{283,298},dvars{},pointers{},cfuncs{virMacAddrFormat{2}}
libvirt-1.1.0/src/conf/domain_audit.c,virDomainAuditNet,vm,def{269},use{42,44,45,47,209,211,217,218,279,284,289,290},dvars{},pointers{},cfuncs{va_end {1},VIR_WARN{2},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1}}
