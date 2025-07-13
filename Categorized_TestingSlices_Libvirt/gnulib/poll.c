libvirt-1.1.0/gnulib/lib/poll.c,IsSocketHandle,,def{120},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,IsSocketHandle,FALSEev,def{87},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,IsSocketHandle,ev,def{80},use{87,88,89},dvars{},pointers{},cfuncs{WSAEnumNetworkEvents {3}}
libvirt-1.1.0/gnulib/lib/poll.c,IsSocketHandle,h,def{78},use{82,88},dvars{},pointers{},cfuncs{WSAEnumNetworkEvents {1}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,bRet,def{544,545},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,sought,def{472,594},use{476,487,492,497,512,513,571,588,595},dvars{happened,h},pointers{},cfuncs{windows_compute_revents {2}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,msg,def{449},use{545,547,548},dvars{bRet},pointers{},cfuncs{DispatchMessage {1},TranslateMessage {1}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,poll_again,def{448,524,529},use{555},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,wait_timeout,def{446,525,531,533},use{525,539},dvars{ret},pointers{},cfuncs{MsgWaitForMultipleObjects {4}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,handle_array,def{445,463,514,559},use{538,572},dvars{ret},pointers{},cfuncs{MsgWaitForMultipleObjects {2}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,ev,def{444},use{575,581,582,584,586,589},dvars{happened},pointers{},cfuncs{windows_compute_revents_socket {3},WSAEnumNetworkEvents {3}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,happenednfdnfdsc_open_maxsc_open_maxnfdsc_open_max,def{340},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,h,def{445,480,571},use{481,482,490,495,500,504,512,514,572,575,576,580,583,585,588,595},dvars{happened,handle_array},pointers{},cfuncs{windows_compute_revents_socket {1},WSAEnumNetworkEvents {1},assert {1},windows_compute_revents {1},FD_SET {1},WSAEventSelect {1}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,happened,def{431,563,588,595},use{433,435,480,599},dvars{h},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,rcrc,def{425},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,errno,def{342,349,359,381,413,455},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,sc_open_max,def{335},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,nfd,def{325},use{347,357,390,426,453,470,561},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,i,def{332,451},use{390,426,470,561},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,rc,def{331,420,450},use{421,422,425,436,440,600,603,609},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,hEvent,def{443,460},use{459,463,504},dvars{handle_array},pointers{},cfuncs{WSAEventSelect {2}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,tv,def{329},use{366,372},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,efds,def{328},use{389,404,420,432},dvars{rc},pointers{},cfuncs{compute_revents {5},select {4},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,rfds,def{328,447},use{387,396,420,432,465,490,520,556,580},dvars{rc},pointers{},cfuncs{compute_revents {3},select {2},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,ret,def{446,538},use{541},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,requested,def{484},use{489,494,499,503,504},dvars{},pointers{},cfuncs{WSAEventSelect {3}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,xfds,def{447},use{467,500,520,556,585},dvars{},pointers{},cfuncs{select {4},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,timeout,def{325,516},use{364,370,373,374,376,420,453,516,530,533,603},dvars{wait_timeout,rc},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,poll,maxfd,def{331,386,410},use{386,405,411,420},dvars{rc},pointers{},cfuncs{select {1}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,ptv,def{330,366,367,368,372,373,374,378},use{367,368,420},dvars{rc},pointers{timeout,tv},cfuncs{select {5}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,wfds,def{328,447},use{388,402,420,432,466,495,520,556,583},dvars{rc},pointers{},cfuncs{compute_revents {4},select {3},FD_SET {2},FD_ZERO {1}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,nhandles,def{446,464,560},use{464,538,541,560,596},dvars{ret},pointers{},cfuncs{MsgWaitForMultipleObjects {1}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,tv0,def{442},use{520,556},dvars{},pointers{},cfuncs{select {5}}
libvirt-1.1.0/gnulib/lib/poll.c,poll,pfd,def{325,428,435,473,512},use{357,392,395,396,401,402,403,404,405,406,410,427,428,431,472,473,474,480,515,565,567,571,588,594,599},dvars{happened,h,sought,maxfd},pointers{sought,h,happened},cfuncs{_get_osfhandle {1},compute_revents {2},compute_revents {1},windows_compute_revents_socket {2},FD_SET {1}}
libvirt-1.1.0/gnulib/lib/poll.c,GLOBAL,,def{75},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,compute_revents,data,def{289},use{290},dvars{r},pointers{},cfuncs{recv {4},recv {2}}
libvirt-1.1.0/gnulib/lib/poll.c,compute_revents,socket_errno,def{277,285,291},use{286,298,302,303,307},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,compute_revents,r,def{276,284,290},use{285,286,287,291,293,298},dvars{socket_errno},pointers{},cfuncs{ioctl {3}}
libvirt-1.1.0/gnulib/lib/poll.c,compute_revents,sought,def{271},use{299,308,315,318},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,compute_revents,wfds,def{271},use{314},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,compute_revents,happened,def{273},use{294,299,304,308,311,315,318,320},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,compute_revents,rfds,def{271},use{274},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,compute_revents,efds,def{271},use{317},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,compute_revents,fd,def{271},use{274,284,287,290,314,317},dvars{r},pointers{},cfuncs{ioctl {1},recv {1}}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents_socket,data,def{240},use{242},dvars{r},pointers{},cfuncs{recv {4},recv {2}}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents_socket,error,def{238,243},use{246,250,251},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents_socket,happened,def{231},use{234,247,252,255,259,262,264},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents_socket,lNetworkEvents,def{229},use{233,236,258,261},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents_socket,sought,def{229},use{234,247,259,262},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents_socket,r,def{238,242},use{246,250},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents_socket,h,def{229},use{242},dvars{r},pointers{},cfuncs{recv {1}}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,p_soughtret,def{218},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,happenedret,def{185},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,once_only,def{139,149},use{144},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,NtQueryInformationFile,def{138,146},use{174,175},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,fpli,def{137},use{172,175,177,178,179},dvars{},pointers{},cfuncs{memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,nbuffer,def{134,189},use{190,195,200,201},dvars{irbuffer,bRet},pointers{},cfuncs{alloca {1},PeekConsoleInput {3},GetNumberOfConsoleInputEvents {2}}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,avail,def{134},use{153,155,189,201,202,205},dvars{bRet,nbuffer},pointers{},cfuncs{PeekConsoleInput {4}}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,irbuffer,def{133,200},use{201,206},dvars{bRet},pointers{},cfuncs{PeekConsoleInput {2}}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,bRet,def{135,190,201},use{191,202},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,iosb,def{136},use{171,175},dvars{},pointers{},cfuncs{memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,h,def{130},use{141,153,175,185,186,190,201,218},dvars{p_soughtret,bRet,happenedret},pointers{},cfuncs{PeekConsoleInput {1},GetNumberOfConsoleInputEvents {1},WaitForSingleObject {1}}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,happened,def{132,152},use{152,156,159,180,182},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,i,def{132},use{205},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,p_sought,def{130},use{156,180,187,194,197,207,213,214,220,222},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/poll.c,windows_compute_revents,ret,def{132},use{187,219},dvars{},pointers{},cfuncs{}
