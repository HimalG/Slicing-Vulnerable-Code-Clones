libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSFree,ATTRIBUTE_UNUSED,def{677},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSFree,tmp,def{576,583},use{585},dvars{group},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSFree,group,def{576,581,585},use{582,583,584,683},dvars{tmp},pointers{},cfuncs{virNetServerMDNSGroupFree{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSFree,mdns,def{574},use{578,581,588,589},dvars{group},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSStop,ATTRIBUTE_UNUSED,def{671},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSStop,group,def{560,564,566},use{561,562,563},dvars{},pointers{},cfuncs{avahi_entry_group_free{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSStop,mdns,def{558,570},use{560,568,569},dvars{group},pointers{},cfuncs{avahi_client_free{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveEntry,ATTRIBUTE_UNUSED,def{664,665},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveEntry,prev,def{541,547,552},use{546},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveEntry,tmp,def{541,553},use{543,544,552},dvars{prev},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveEntry,entry,def{539},use{544,545,547,549},dvars{group,prev},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveEntry,group,def{538,549},use{541},dvars{tmp},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddEntry,ATTRIBUTE_UNUSED,def{655,656,657},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddEntry,port,def{517},use{521,527},dvars{NULLentry},pointers{},cfuncs{VIR_DEBUG{3}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddEntry,NULLentry,def{527,532},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddEntry,group,def{515,533},use{521,532},dvars{NULLentry},pointers{},cfuncs{VIR_DEBUG{4}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddEntry,type,def{516},use{521,528},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddEntry,entry,def{519},use{522,528,529,532,533,534},dvars{group,NULLentry},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSStart,ATTRIBUTE_UNUSED,def{633},use{},dvars{},pointers{mdns},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSStart,error,def{454},use{459,464},dvars{},pointers{},cfuncs{avahi_strerror{2},avahi_client_new{5}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSStart,mdns,def{452,456},use{455,456,459,461},dvars{},pointers{error},cfuncs{avahi_client_new{4},avahi_client_new{1},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveGroup,ATTRIBUTE_UNUSED,def{648,649},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveGroup,prev,def{497,503,509},use{502},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveGroup,tmp,def{497,510},use{499,500,509},dvars{prev},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveGroup,group,def{495,505},use{500,501,503,506},dvars{prev},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSRemoveGroup,mdns,def{494},use{497},dvars{tmp},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSClientCallback,group,def{201,213,216,240,244},use{138,140,143,147,148,149,154,155,159,166,168,172,180,187,188,214,215,241,242,243},dvars{mdns,grouphandle,entry,ret},pointers{},cfuncs{avahi_entry_group_reset{1},VIR_DEBUG{2},virNetServerMDNSCreateServices{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSClientCallback,mdns,def{200,203},use{202,212,213,223,224,239,240,249,633,671},dvars{group},pointers{},cfuncs{virNetServerMDNSStop{1},virNetServerMDNSStart{1},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSClientCallback,state,def{197},use{205,208},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSClientCallback,data,def{198},use{200},dvars{mdns},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSClientCallback,c,def{196},use{203,222},dvars{mdns},pointers{},cfuncs{avahi_client_errno{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddGroup,ATTRIBUTE_UNUSED,def{640,641},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddGroup,group,def{475,488},use{478,483,484,489,490},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddGroup,NULLgroup,def{487},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddGroup,name,def{473},use{477,483},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSAddGroup,mdns,def{472,489},use{487,488},dvars{group,NULLgroup},pointers{group},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,GLOBAL,group,def{93},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSNew,NULLmdnspoller,def{443},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSNew,mdns,def{438},use{439,444,448},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSNew,,def{436,626},use{439},dvars{},pointers{},cfuncs{VIR_ALLOC{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutFree,t,def{406},use{157,162,408,409},dvars{},pointers{},cfuncs{virEventRemoveTimeout{1},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSGroupCallback,group,def{100,115},use{105,113,114,115,117,120,126,138,140,143,147,148,149,154,155,159,166,168,172,180,187,188},dvars{mdns,grouphandle,ret,entry,group},pointers{},cfuncs{avahi_entry_group_reset{1},avahi_alternative_service_name{1},avahi_client_errno{2},virNetServerMDNSCreateServices{1},VIR_FREE{1},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSGroupCallback,state,def{97},use{102},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSGroupCallback,n,def{110,113},use{115},dvars{group},pointers{group},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSGroupCallback,data,def{98},use{100},dvars{group},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSGroupCallback,ATTRIBUTE_UNUSED,def{96},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutUpdate,timeout,def{386,396,398,400},use{142,144,397,398,400,403},dvars{},pointers{},cfuncs{updateTimeoutImpl{2},virEventUpdateTimeout{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutUpdate,thenms,def{386,395},use{396},dvars{timeout},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutUpdate,nowms,def{386,393},use{396},dvars{timeout},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutUpdate,now,def{385},use{388,393},dvars{nowms},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutUpdate,tv,def{383},use{387,394,395},dvars{thenms},pointers{},cfuncs{VIR_DEBUG{3}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutUpdate,t,def{383},use{142,144,387,389,403},dvars{},pointers{},cfuncs{updateTimeoutImpl{1},virEventUpdateTimeout{1},VIR_FREE{1},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchNew,wwatch,def{288},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchNew,hEvents,def{275,287},use{288,293},dvars{wwatch},pointers{},cfuncs{virReportError{3}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchNew,NULLw,def{281},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchNew,cb,def{272},use{283},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchNew,fd,def{271},use{281,286,288,293},dvars{wwatch,NULLw},pointers{},cfuncs{virReportError{2},VIR_DEBUG{3}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchNew,userdata,def{272},use{284,290},dvars{wwatch},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchNew,event,def{271},use{286,287,747,750,752,754,756,758},dvars{hEvents},pointers{},cfuncs{virEventPollFromNativeEvents{1},VIR_DEBUG{4}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchNew,w,def{274,282,283,284},use{276,282,286,290,294,298},dvars{wwatch},pointers{userdata,cb},cfuncs{VIR_FREE{1},VIR_DEBUG{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchNew,ATTRIBUTE_UNUSED,def{270},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchFree,w,def{313},use{92,97,315,316},dvars{},pointers{},cfuncs{virEventRemoveHandle{1},VIR_DEBUG{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutDispatch,t,def{321},use{142,144,322,323,324},dvars{},pointers{opaque},cfuncs{updateTimeoutImpl{1},callback{2},callback{1},virEventUpdateTimeout{1},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutDispatch,opaque,def{319},use{321},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutDispatch,ATTRIBUTE_UNUSED,def{319},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchUpdate,event,def{301},use{77,79,303,304},dvars{},pointers{},cfuncs{virEventUpdateHandle{2},updateHandleImpl{2},VIR_DEBUG{4}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchUpdate,w,def{301},use{77,79,303,304},dvars{},pointers{},cfuncs{virEventUpdateHandle{1},updateHandleImpl{1},VIR_DEBUG{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutDofree,t,def{327},use{329},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchGetEvents,w,def{307},use{309,310},dvars{},pointers{},cfuncs{VIR_DEBUG{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSGroupFree,ATTRIBUTE_UNUSED,def{683},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSGroupFree,tmp,def{595,602},use{604},dvars{entry},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSGroupFree,entry,def{595,600,604},use{601,602,603,689},dvars{tmp},pointers{},cfuncs{virNetServerMDNSEntryFree{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSGroupFree,grp,def{593},use{597,600,607,608},dvars{entry},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutNew,nowms,def{339,356},use{359},dvars{timeout},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutNew,now,def{338},use{346,354,356},dvars{nowms},pointers{},cfuncs{VIR_DEBUG{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutNew,userdata,def{335},use{371},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutNew,cb,def{334},use{370},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutNew,t,def{337,366,370,371},use{119,125,341,349,368,373,376,380},dvars{},pointers{userdata,cb,timeout},cfuncs{virEventAddTimeout{3},VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutNew,tv,def{333},use{340,355,357,358},dvars{thenms},pointers{},cfuncs{(int){2},(int){4},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutNew,timeout,def{339,359,361,363},use{117,125,360,361,363,366,375},dvars{},pointers{},cfuncs{virReportError{2},virEventAddTimeout{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutNew,thenms,def{339,358},use{359},dvars{timeout},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSTimeoutNew,ATTRIBUTE_UNUSED,def{332},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchDofree,w,def{264},use{266},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSCreatePoll,NULLp,def{421},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSCreatePoll,p,def{415,423,424,425,426,428,429,430},use{416,432},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSCreatePoll,,def{413},use{416},dvars{},pointers{},cfuncs{VIR_ALLOC{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSCreateServices,grouphandle,def{156},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSCreateServices,ret,def{142,168,187},use{179,190},dvars{},pointers{},cfuncs{avahi_strerror{2},avahi_strerror{4}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSCreateServices,mdns,def{140},use{157,161},dvars{grouphandle},pointers{},cfuncs{avahi_client_errno{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSCreateServices,entry,def{141,166,183},use{147,167,173,176,179},dvars{ret},pointers{},cfuncs{VIR_DEBUG{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSCreateServices,group,def{138},use{140,143,147,148,149,154,155,159,166,168,172,180,187,188},dvars{ret,entry,grouphandle,mdns},pointers{},cfuncs{avahi_entry_group_reset{1},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSEntryFree,ATTRIBUTE_UNUSED,def{689},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSEntryFree,entry,def{612},use{614,617,618},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchDispatch,w,def{257,260},use{261},dvars{},pointers{fd_events,opaque},cfuncs{callback{4},callback{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchDispatch,opaque,def{255},use{257},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchDispatch,events,def{255},use{258,732,735,737,739,741},dvars{},pointers{},cfuncs{virEventPollToNativeEvents{1}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchDispatch,fd,def{255},use{259,261},dvars{},pointers{},cfuncs{callback{2},VIR_DEBUG{3}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchDispatch,fd_events,def{258},use{259,260,261},dvars{},pointers{},cfuncs{callback{3},VIR_DEBUG{4}}
libvirt-1.1.0/src/rpc/virnetservermdns.c,virNetServerMDNSWatchDispatch,watch,def{255},use{259},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
