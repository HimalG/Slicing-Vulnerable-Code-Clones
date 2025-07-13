libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,event,def{926},use{932,933,2903,2908},dvars{},pointers{},cfuncs{virDomainEventStateQueue{2},xenUnifiedDomainEventDispatch{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,removed,def{890,915,941},use{915,941,947},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,nread,def{893,908},use{909},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,new_domids,def{892},use{267,287,904,908,911,919,945},dvars{nread},pointers{},cfuncs{VIR_FREE{1},xenStoreDoListDomains{3}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,new_domain_cnt,def{891,900},use{271,275,279,901,904,908,909,918},dvars{retidlist,nread},pointers{},cfuncs{xs_directory{4},xenStoreDoListDomains{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,retries,def{890},use{947},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,priv,def{895},use{475,477,480,483,484,485,489,490,491,492,494,495,496,497,499,500,502,503,504,506,511,515,516,517,520,524,525,661,662,672,677,682,687,897,908,916,919,928,929,933,936,937,938,939,1399,1402,1408,1410,2861,2862,2866,2867,2868,2870,2902,2905,2908},dvars{nread},pointers{},cfuncs{memcpy{2},memcpy{1},virDomainEventNewInternal{2},virDomainEventNewInternal{3},virDomainEventFree{1},virDomainEventStateQueue{1},VIR_FREE{1},xenUnifiedRemoveDomainInfo{4},xenUnifiedRemoveDomainInfo{3},xenUnifiedRemoveDomainInfo{2},xenUnifiedRemoveDomainInfo{1},xenUnifiedDomainEventDispatch{1},virDomainEventNew{3},virDomainEventNew{2},xenStoreDoListDomains{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,j,def{890},use{916},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,found,def{890,917,920},use{917,920,925},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,conn,def{885},use{232,234,270,276,280,281,291,900,908},dvars{id,nread,new_domain_cnt},pointers{},cfuncs{xs_directory{1},strtol{1},VIR_FREE{1},xenStoreDoListDomains{1},xenStoreNumOfDomains{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,ATTRIBUTE_UNUSED,def{886,887},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,i,def{890},use{918},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainReleased,opaque,def{888},use{895},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,sw,def{765,787},use{788,789},dvars{},pointers{},cfuncs{cb{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,stringCount,def{764},use{780,784,785},dvars{token,path},pointers{},cfuncs{xs_read_watch{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,priv,def{768},use{84,85,88,90,210,224,743,748,749,750,751,770,775,777,780,787,793,2911,2913,2916,2918},dvars{sw},pointers{},cfuncs{virMutexLock{1},pthread_mutex_unlock{1},virMutexUnlock{1},xenStoreFindWatch{1},pthread_mutex_lock{1},xs_read_watch{1},xenUnifiedUnlock{1},xenUnifiedLock{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,path,def{762,784},use{744,749,787,789},dvars{sw},pointers{event},cfuncs{cb{2},xenStoreFindWatch{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,event,def{761,780},use{781,784,785,787,790},dvars{sw},pointers{stringCount,priv},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,token,def{763,785},use{745,750,787,789},dvars{sw},pointers{event},cfuncs{cb{3},xenStoreFindWatch{3}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,events,def{759},use{773},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,data,def{759},use{767},dvars{conn},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,conn,def{767},use{768,789},dvars{priv},pointers{},cfuncs{cb{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchEvent,ATTRIBUTE_UNUSED,def{757,758},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreFindWatch,i,def{747},use{748},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreFindWatch,token,def{745},use{750},dvars{},pointers{token},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreFindWatch,path,def{744},use{749},dvars{},pointers{path},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreFindWatch,list,def{743},use{748,749,750,751},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreRemoveWatch,token,def{696},use{711,715,722},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreRemoveWatch,list,def{699,705},use{706,709,710,711,714,715,721,722,723,725,726,727,728,729,731,732,735},dvars{},pointers{},cfuncs{memmove{0},memmove{4},memmove{2},memmove{1},VIR_FREE{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreRemoveWatch,i,def{698},use{709,725,726,727,729},dvars{},pointers{},cfuncs{memmove{0},memmove{2},memmove{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreRemoveWatch,priv,def{700},use{702,705,713},dvars{list},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreRemoveWatch,path,def{696},use{710,714,721},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreRemoveWatch,conn,def{696},use{700},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreAddWatch,watch,def{637,664,665},use{659,666,667,677,680,683,684,685,686},dvars{list},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreAddWatch,cb,def{634},use{664},dvars{watch},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreAddWatch,priv,def{640},use{642,645,680},dvars{list},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreAddWatch,n,def{638,671},use{650,672},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreAddWatch,path,def{632},use{651,666,680,684},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreAddWatch,opaque,def{635},use{665},dvars{watch},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreAddWatch,list,def{639,645,677},use{646,650,651,652,671,672,678},dvars{n},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreAddWatch,token,def{633},use{652,667,680,685},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreAddWatch,conn,def{631},use{640},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchListFree,i,def{617},use{618},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreWatchListFree,list,def{615},use{618,619,620,621,623},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetUUID,ret,def{592,607},use{611},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetUUID,len,def{590},use{601,603,607},dvars{ret},pointers{},cfuncs{xs_read{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetUUID,uuidstr,def{591,601,604},use{151,160,161,165,167,168,171,173,175,176,178,180,182,185,186,188,220,222,223,604,607,609},dvars{uuid,ret},pointers{len,prop,priv},cfuncs{virHexToBin{1},VIR_FREE{1},virUUIDParse{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetUUID,prop,def{588,598},use{42,44,45,47,597,598,601},dvars{},pointers{},cfuncs{va_end {1},vasnprintf {4},va_start {1},xs_read{3},snprintf{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetUUID,uuid,def{586},use{150,164,173,174,180,607},dvars{ret},pointers{},cfuncs{virUUIDParse{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetUUID,id,def{586},use{37,49,66,597},dvars{},pointers{},cfuncs{snprintf{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetUUID,priv,def{589},use{594,601},dvars{},pointers{},cfuncs{xs_read{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetUUID,conn,def{586},use{589},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,ret,def{412},use{432,438},dvars{},pointers{conn},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,num,def{411},use{419,422},dvars{list},pointers{},cfuncs{xs_directory{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,len,def{411},use{424},dvars{val},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,match,def{427},use{431},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,i,def{411},use{422},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,mac,def{408},use{415,427},dvars{},pointers{def},cfuncs{virMacAddrCompare{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,val,def{410,424},use{40,46,47,49,55,320,323,325,353,427,429},dvars{d},pointers{},cfuncs{c_tolower{1},VIR_FREE{1},virMacAddrCompare{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,path,def{410},use{42,44,45,47,56,57,423,424},dvars{val},pointers{},cfuncs{va_end {1},vasnprintf {4},va_start {1},memcpy {3},snprintf{3},snprintf{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,list,def{410,419},use{56,57,420,423,432,437},dvars{},pointers{},cfuncs{memcpy {3},VIR_FREE{1},VIR_STRDUP{2},snprintf{3}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,id,def{408},use{41,45,46,415,418},dvars{len},pointers{},cfuncs{vasnprintf {2},snprintf{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,priv,def{413},use{415,419,424},dvars{val,list},pointers{},cfuncs{xs_directory{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,dir,def{410},use{41,42,44,45,46,47,56,57,418,419,423},dvars{len,list},pointers{},cfuncs{va_end {1},va_start {1},vasnprintf {4},vasnprintf {2},memcpy {3},xs_directory{3},snprintf{2},snprintf{3},snprintf{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetNetworkID,conn,def{408},use{413},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetSerialConsolePath,domid,def{386},use{388},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetSerialConsolePath,conn,def{386},use{388},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreOpen,privxsWatch,def{167},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreOpen,priv,def{112,117,119},use{121,135,143,150,159,167},dvars{privxsWatch},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreOpen,flags,def{110},use{116},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreOpen,ATTRIBUTE_UNUSED,def{109},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreOpen,conn,def{108},use{112,149,158,170},dvars{privxsWatch,priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetVNCPort,end,def{340},use{341,342},dvars{ret},pointers{id},cfuncs{strtol{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetVNCPort,rettmp,def{338},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetVNCPort,tmp,def{335},use{339,341,342,344},dvars{ret},pointers{conn},cfuncs{VIR_FREE{1},strtol{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetVNCPort,domid,def{333},use{338},dvars{rettmp},pointers{},cfuncs{virDomainDoStoreQuery{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetVNCPort,ret,def{336,341,343},use{342,343,346},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetVNCPort,conn,def{333},use{42,44,45,47,79,86,87,89,338},dvars{rettmp},pointers{},cfuncs{va_end {1},va_start {1},snprintf{1},vasnprintf {4},virDomainDoStoreQuery{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreListDomains,maxids,def{306},use{271,275,279,312},dvars{retidlist,ret},pointers{},cfuncs{xs_directory{4},xenStoreDoListDomains{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreListDomains,ret,def{309,312},use{315},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreListDomains,priv,def{308},use{84,85,88,90,210,224,311,312,313,2911,2913,2916,2918},dvars{ret},pointers{},cfuncs{pthread_mutex_lock{1},virMutexLock{1},virMutexUnlock{1},pthread_mutex_unlock{1},xenUnifiedUnlock{1},xenStoreDoListDomains{2},xenUnifiedLock{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreListDomains,ids,def{306},use{267,287,312},dvars{ret},pointers{},cfuncs{xenStoreDoListDomains{3}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreListDomains,conn,def{306},use{270,276,280,281,291,308,312},dvars{id,ret,priv},pointers{},cfuncs{strtol{1},VIR_FREE{1},xenStoreDoListDomains{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,ret,def{272},use{279,292},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,i,def{271},use{279},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,num,def{271},use{275,279},dvars{retidlist},pointers{},cfuncs{xs_directory{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,idlist,def{270},use{276,280,281,291},dvars{id},pointers{conn},cfuncs{VIR_FREE{1},strtol{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,id,def{273,280},use{286,287},dvars{ids},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,maxids,def{268},use{279},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,ids,def{267,287},use{},dvars{},pointers{ids,new_domids},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,priv,def{266},use{275},dvars{retidlist},pointers{},cfuncs{xs_directory{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,retidlist,def{275},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDoListDomains,conn,def{265},use{286},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,uuid,def{844},use{661,672,682,687,850,856,864},dvars{event},pointers{},cfuncs{virDomainEventNewInternal{3},xenUnifiedAddDomainInfo{4},virDomainEventNew{3}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,name,def{843,846},use{662,677,682,687,852,856,864,866},dvars{event},pointers{new_domids,conn},cfuncs{memcpy{2},memcpy{1},VIR_FREE{1},virDomainEventNewInternal{2},xenUnifiedAddDomainInfo{3},virDomainEventNew{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,event,def{842,856},use{859,860,2903,2908},dvars{},pointers{},cfuncs{virDomainEventStateQueue{2},xenUnifiedDomainEventDispatch{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,nread,def{811,824},use{825},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,new_domids,def{810},use{267,287,820,824,827,835,846,850,856,864,869,2812,2820,2831},dvars{event,nread},pointers{},cfuncs{memcpy{2},memcpy{1},xenUnifiedAddDomainInfo{2},virDomainEventNew{1},VIR_FREE{1},xenStoreDoListDomains{3}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,new_domain_cnt,def{809,816},use{271,275,279,817,820,824,825,832},dvars{retidlist,nread},pointers{},cfuncs{xs_directory{4},xenStoreDoListDomains{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,retries,def{808},use{871},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,priv,def{813},use{475,477,480,483,484,485,489,490,491,492,494,495,496,497,499,500,502,503,504,506,511,515,516,517,520,524,525,824,834,835,860,863,1399,1402,1408,1410,2811,2819,2828,2847,2902,2905,2908},dvars{nread},pointers{},cfuncs{virDomainEventFree{1},xenUnifiedAddDomainInfo{1},virDomainEventStateQueue{1},xenUnifiedDomainEventDispatch{1},VIR_FREE{1},xenStoreDoListDomains{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,j,def{808},use{834},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,found,def{808,833,836},use{833,836,841},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,conn,def{803},use{232,234,270,276,280,281,291,816,824,846,850},dvars{id,nread,new_domain_cnt},pointers{},cfuncs{xs_directory{1},strtol{1},VIR_FREE{1},xenStoreDoListDomains{1},xenStoreNumOfDomains{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,ATTRIBUTE_UNUSED,def{804,805},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,i,def{808},use{832},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,missing,def{808,831,847,851},use{831,847,851,871},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainIntroduced,opaque,def{806},use{813},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetName,len,def{571},use{578},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetName,prop,def{569,577},use{42,44,45,47,576,577,578},dvars{},pointers{},cfuncs{va_end {1},vasnprintf {4},va_start {1},snprintf{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetName,id,def{567},use{37,49,66,576},dvars{},pointers{},cfuncs{snprintf{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetName,priv,def{570},use{573,578},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetName,conn,def{567},use{570},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreNumOfDomains,priv,def{232},use{234},dvars{},pointers{},cfuncs{xs_directory{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreNumOfDomains,id,def{231,237},use{243},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreNumOfDomains,realnum,def{230},use{244,248},dvars{ret},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreNumOfDomains,i,def{230},use{236},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreNumOfDomains,idlist,def{229,234},use{235,237,238,247},dvars{id},pointers{num,priv},cfuncs{VIR_FREE{1},strtol{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreNumOfDomains,num,def{228},use{234,236,237},dvars{id},pointers{},cfuncs{xs_directory{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreNumOfDomains,ret,def{230,248},use{250},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreNumOfDomains,conn,def{226},use{232,243},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreClose,priv,def{188,201,203,212},use{92,97,200,202,205,208,209,211,615,618,619,620,621,623,2787,2791,2794,2795,2796,2798,2799},dvars{},pointers{},cfuncs{xs_daemon_close{1},virEventRemoveHandle{1},VIR_FREE{1},xenUnifiedDomainInfoListFree{1},xenStoreWatchListFree{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreClose,conn,def{186},use{188,190,195},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,ret,def{461},use{481,485,501,505},dvars{},pointers{conn},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,num,def{460},use{471,473,491,493},dvars{list},pointers{},cfuncs{xs_directory{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,len,def{460},use{475,478,495,498},dvars{val},pointers{},cfuncs{xs_read{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,i,def{460},use{473,493},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,NULLdevlen,def{466},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,val,def{459,475,495},use{476,478,479,483,496,498,499,503},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,list,def{459,471,491},use{56,57,472,474,481,484,488,492,494,501,504,508},dvars{},pointers{},cfuncs{memcpy {3},VIR_FREE{1},VIR_STRDUP{2},snprintf{3}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,path,def{459},use{42,44,45,47,56,57,474,475,494,495},dvars{val},pointers{},cfuncs{va_end {1},vasnprintf {4},va_start {1},memcpy {3},xs_read{3},snprintf{3},snprintf{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,dev,def{457},use{464,466,478,498},dvars{NULLdevlen},pointers{},cfuncs{strlen{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,id,def{457},use{41,45,46,464,470,490},dvars{len},pointers{},cfuncs{vasnprintf {2},snprintf{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,priv,def{462},use{464,471,475,491,495},dvars{val,list},pointers{},cfuncs{xs_read{1},xs_directory{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,dir,def{459},use{41,42,44,45,46,47,56,57,470,471,474,490,491,494},dvars{len,list},pointers{},cfuncs{va_end {1},va_start {1},vasnprintf {4},vasnprintf {2},memcpy {3},xs_directory{3},snprintf{2},snprintf{3},snprintf{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,devlen,def{460},use{467,478,498},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetDiskID,conn,def{457},use{462},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetConsolePath,domid,def{365},use{367},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetConsolePath,conn,def{365},use{367},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,GLOBAL,list,def{58},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,GLOBAL,data,def{57},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,GLOBAL,events,def{57},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,GLOBAL,fd,def{57},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,GLOBAL,watch,def{57},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,ret,def{533},use{553,559},dvars{},pointers{conn},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,num,def{532},use{540,543},dvars{list},pointers{},cfuncs{xs_directory{4}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,len,def{532},use{545},dvars{val},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,match,def{548},use{552},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,i,def{532},use{543},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,val,def{531,545},use{548,550},dvars{},pointers{},cfuncs{VIR_FREE{1},STREQ{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,list,def{531,540},use{56,57,541,544,553,558},dvars{},pointers{},cfuncs{memcpy {3},VIR_FREE{1},VIR_STRDUP{2},snprintf{3}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,path,def{531},use{42,44,45,47,56,57,544,545},dvars{val},pointers{},cfuncs{va_end {1},vasnprintf {4},va_start {1},memcpy {3},snprintf{3},snprintf{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,bdf,def{529},use{536,548},dvars{},pointers{def,ids},cfuncs{STREQ{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,id,def{529},use{41,45,46,536,539},dvars{len},pointers{},cfuncs{vasnprintf {2},snprintf{2}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,priv,def{534},use{536,540,545},dvars{val,list},pointers{},cfuncs{xs_directory{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,dir,def{531},use{41,42,44,45,46,47,56,57,539,540,544},dvars{len,list},pointers{},cfuncs{va_end {1},va_start {1},vasnprintf {4},vasnprintf {2},memcpy {3},xs_directory{3},snprintf{2},snprintf{3},snprintf{1}}
libvirt-1.1.0/src/xen/xs_internal.c,xenStoreDomainGetPCIID,conn,def{529},use{534},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,virDomainDoStoreQuery,s,def{79,87},use{42,44,45,47,86,87,89},dvars{},pointers{},cfuncs{va_end {1},vasnprintf {4},va_start {1},snprintf{1}}
libvirt-1.1.0/src/xen/xs_internal.c,virDomainDoStoreQuery,priv,def{81},use{83,89},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,virDomainDoStoreQuery,path,def{77},use{86},dvars{},pointers{},cfuncs{snprintf{5}}
libvirt-1.1.0/src/xen/xs_internal.c,virDomainDoStoreQuery,len,def{80},use{89},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xs_internal.c,virDomainDoStoreQuery,domid,def{77},use{37,49,66,86},dvars{},pointers{},cfuncs{snprintf{4}}
libvirt-1.1.0/src/xen/xs_internal.c,virDomainDoStoreQuery,conn,def{77},use{81},dvars{priv},pointers{},cfuncs{}
