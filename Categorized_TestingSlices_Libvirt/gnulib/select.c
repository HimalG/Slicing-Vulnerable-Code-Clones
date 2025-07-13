libvirt-1.1.0/gnulib/lib/select.c,rpl_select,bRet,def{419,420},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,errno,def{345,524},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,rc,def{254,393,399,432},use{393,400,431,452,456,503},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,fd,def{254,291,306,321},use{292,297,298,307,312,313,322,323},dvars{h},pointers{},cfuncs{_get_osfhandle {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,i,def{254,519},use{289,304,319,337,339,342,355,361,367,383,438,440,443,448,449,450,451,473,475,478,484,486,488,494,495,496,497,498,499,527,529,530,531,532},dvars{h},pointers{},cfuncs{FD_SET {1},windows_poll_handle {2},_get_osfhandle {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,tv0,def{246},use{399,432},dvars{rc},pointers{},cfuncs{select {5}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,nsock,def{252,278},use{278,375,392,431},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,nhandles,def{252,277,437,472},use{277,413,416,434,437,447,472,493},dvars{ret},pointers{},cfuncs{MsgWaitForMultipleObjects {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,msg,def{253},use{420,422,423},dvars{bRet},pointers{},cfuncs{DispatchMessage {1},TranslateMessage {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,wait_timeout,def{252,260,263,384,408},use{268,382,384,392,408,414,456},dvars{ret},pointers{},cfuncs{MsgWaitForMultipleObjects {4},Sleep {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,wbits,def{250},use{285,312,361,383,448,450,496},dvars{},pointers{},cfuncs{windows_poll_handle {4},memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,rbits,def{250},use{284,297,355,383,448,449,494},dvars{},pointers{},cfuncs{windows_poll_handle {3},memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,handle_xfds,def{249},use{334,371,399,405,432,462,487},dvars{rc},pointers{},cfuncs{select {4},memcpy {1},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,handle_wfds,def{249},use{333,365,399,404,432,461,485},dvars{rc},pointers{},cfuncs{select {3},memcpy {1},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,handle_rfds,def{249},use{332,359,399,403,432,460,483},dvars{rc},pointers{},cfuncs{select {2},memcpy {1},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,handle_array,def{248,276,379,389},use{413,444,479},dvars{ret},pointers{},cfuncs{MsgWaitForMultipleObjects {2}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,nbuffer,def{252},use{294,309},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,h,def{248,292,307,342,443,478},use{293,294,308,309,343,349,358,359,364,365,370,371,374,379,383,444,448,479,482,483,485,487},dvars{handle_array},pointers{},cfuncs{windows_poll_handle {1},WSAEventSelect {1},FD_SET {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,hEvent,def{247,274},use{273,276,374},dvars{handle_array},pointers{},cfuncs{WSAEventSelect {2}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,xbits,def{250},use{286,322,367,383,448,451,498},dvars{},pointers{},cfuncs{windows_poll_handle {5},memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,nfds,def{242,257,516,539},use{256,337,438,473,522,527,537,539,544},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,requested,def{351},use{357,363,369,374},dvars{},pointers{},cfuncs{WSAEventSelect {3}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,timeout,def{243,517},use{259,263,544},dvars{wait_timeout},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,xfds,def{242,326,516,542},use{266,318,319,321,331,370,405,462,471,488,499,531,544},dvars{fd},pointers{},cfuncs{memcpy {2},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,anyfds_in,def{251},use{287,298,313,323,339,440,475},dvars{},pointers{},cfuncs{memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,wfds,def{242,316,516,541},use{266,303,304,306,330,364,404,461,470,486,497,530,544},dvars{fd},pointers{},cfuncs{memcpy {2},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,ret,def{252,413},use{416},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,rpl_select,rfds,def{242,301,516,540},use{266,288,289,291,329,358,403,460,469,484,495,529,544},dvars{fd},pointers{},cfuncs{memcpy {2},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/select.c,IsSocketHandle,FALSEev,def{99},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,IsSocketHandle,ev,def{92},use{99,100,101},dvars{},pointers{},cfuncs{WSAEnumNetworkEvents {3}}
libvirt-1.1.0/gnulib/lib/select.c,IsSocketHandle,h,def{90},use{94,100},dvars{},pointers{},cfuncs{WSAEnumNetworkEvents {1}}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,NtQueryInformationFile,def{120,134},use{161,162},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,fpli,def{119},use{159,162,164,165,166},dvars{},pointers{},cfuncs{memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,iosb,def{118},use{158,162},dvars{},pointers{},cfuncs{memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,bRet,def{117,186,197},use{189,198},dvars{},pointers{},cfuncs{assert {1}}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,nbuffer,def{116,185},use{186,190,196,197},dvars{irbuffer,bRet},pointers{},cfuncs{alloca {1},PeekConsoleInput {3},GetNumberOfConsoleInputEvents {2}}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,avail,def{116},use{140,142,185,197,198,204},dvars{bRet,nbuffer},pointers{},cfuncs{PeekConsoleInput {4}}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,irbuffer,def{115,196},use{197,205},dvars{bRet},pointers{},cfuncs{PeekConsoleInput {2}}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,read,def{113,123,127,143,181,206,214},use{220},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,except,def{113,192,200},use{123,232},dvars{read},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,write,def{113,128,167,172,212},use{123,226},dvars{read},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,fd,def{108},use{173,220,222,226,228,232,234},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,ret,def{114,176,211,219},use{177,213,219,223,229,235,238},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,rbits,def{109},use{173,220,222},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,xbits,def{111},use{232,234},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,h,def{108},use{124,140,162,176,179,186,197,211},dvars{bRet,ret},pointers{},cfuncs{PeekConsoleInput {1},GetNumberOfConsoleInputEvents {1},WaitForSingleObject {1}}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,once_only,def{121,137},use{132},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,wbits,def{110},use{226,228},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,windows_poll_handle,i,def{114},use{204},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/select.c,GLOBAL,,def{79,87},use{},dvars{},pointers{},cfuncs{}
