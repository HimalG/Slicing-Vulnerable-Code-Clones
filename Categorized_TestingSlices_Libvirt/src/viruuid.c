libvirt-1.1.0/src/util/viruuid.c,virUUIDIsValid,c,def{237,242},use{245},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDIsValid,ctr,def{236},use{246,248},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDIsValid,i,def{236},use{244},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDIsValid,uuid,def{234},use{239,242,245},dvars{c},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,getDMISystemUUID,paths,def{255},use{61,62,66,68,261,262},dvars{mode},pointers{},cfuncs{va_end {1},va_arg {1},va_start {1},open{1}}
libvirt-1.1.0/src/util/viruuid.c,getDMISystemUUID,i,def{254},use{271},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,getDMISystemUUID,len,def{252},use{264},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,getDMISystemUUID,fd,def{262},use{263,264,266,269},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/src/util/viruuid.c,getDMISystemUUID,uuid,def{252,265},use{264,265},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDFormat,uuidstr,def{209,217},use{42,44,45,47,211,217,218},dvars{},pointers{doms,node,uuidbuf,dst,virtPort,host_uuid,data,ctl,src,md5,priv,uuidinterim,entry,list,params,snapshot,vmuuid,pool,vm,secret,network,driver,nwfilter,domain,obj,dom,uuid,caps,ovsport,def,vmDef,mig},cfuncs{va_end {1},vasnprintf {4},va_start {1},snprintf{1}}
libvirt-1.1.0/src/util/viruuid.c,virUUIDFormat,uuid,def{209},use{37,40,46,49,56,64,66,70,213,214,215,216},dvars{pruned_len},pointers{},cfuncs{snprintf{19},snprintf{18},snprintf{17},snprintf{16},snprintf{15},snprintf{14},snprintf{13},snprintf{12},snprintf{11},snprintf{10},snprintf{9},snprintf{8},snprintf{7},snprintf{6},snprintf{5},snprintf{4}}
libvirt-1.1.0/src/util/viruuid.c,virUUIDParse,i,def{152},use{163,181},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDParse,cur,def{151},use{160,161,165,167,168,171,173,175,176,178,180,182,185,186,188,220,222,223},dvars{uuid},pointers{record,utf8,uuidstrdst,machineIdUtf8,uuidstr,uuid},cfuncs{virHexToBin{1}}
libvirt-1.1.0/src/util/viruuid.c,virUUIDParse,errcur,def{159},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDParse,uuid,def{150,164,173},use{164,174,180},dvars{},pointers{raw_uuid,uuidinterim,def,d,uuid},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDParse,uuidstr,def{150},use{159},dvars{errcur},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGenerate,ebuf,def{110},use{113,186,188,190,192,210,212,213,215,229,232,234,1303,1306,1308,1309,1311},dvars{len,ret},pointers{},cfuncs{strlen {1},strerror_r {3},strerror_r {2},virStrerror{3},virStrerror{5},safe_copy {3},strerror_r{3}}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGenerate,err,def{104,109,114},use{113,136,137,142,144,155,165,173,179,180,188,192,195,198,208,217,227,234,273,293,311,321,1303,1308,1309},dvars{ret,safe_copybufbuflenmsgret},pointers{},cfuncs{snprintf {2},strerror_r {3},strerror_r {5},virStrerror{2},safe_copy {2},__xpg_strerror_r {3},strerror_r{2}}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGenerate,uuid,def{102,133,134},use{82,86,106,109,114},dvars{err},pointers{uuid},cfuncs{virUUIDGeneratePseudoRandomBytes{1}}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGeneratePseudoRandomBytes,buflen,def{83},use{85,87},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGeneratePseudoRandomBytes,buf,def{82,86},use{},dvars{},pointers{uuid},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGenerateRandomBytes,n,def{63,65},use{69,72,73},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGenerateRandomBytes,fd,def{57},use{65,68,76},dvars{n},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGenerateRandomBytes,EXIT_FAILUREEXIT_SUCCESSfd,def{59},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGenerateRandomBytes,buflen,def{55},use{62,65,73},dvars{n},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virUUIDGenerateRandomBytes,buf,def{54},use{65,72},dvars{n},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virGetHostUUID,ret,def{326,329},use{333},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virGetHostUUID,uuid,def{324},use{331},dvars{},pointers{hostuuid,},cfuncs{memcpy{1}}
libvirt-1.1.0/src/util/viruuid.c,virSetHostUUIDStr,virUUIDGeneratehost_uuidrc,def{305},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virSetHostUUIDStr,dmiuuid,def{290},use{296,297,298},dvars{},pointers{},cfuncs{memset{4},memset{1}}
libvirt-1.1.0/src/util/viruuid.c,virSetHostUUIDStr,rc,def{289},use{306,307},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruuid.c,virSetHostUUIDStr,uuid,def{287},use{151,160,161,165,167,168,171,173,175,176,178,180,182,185,186,188,220,222,223,295,305},dvars{uuid,virUUIDGeneratehost_uuidrc},pointers{},cfuncs{virHexToBin{1},virUUIDParse{1}}
