libvirt-1.1.0/tests/commandtest.c,mymain,virinitret,def{939,978},use{995},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,mymain,environ,def{1022},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,mymain,timer,def{938,1056},use{157,162,1064,1065},dvars{},pointers{},cfuncs{virEventRemoveTimeout{1}}
libvirt-1.1.0/tests/commandtest.c,mymain,fd,def{936,960,982,984,986,988,990,992},use{968,982,983,984,985,986,987,988,989,990,991,992,993},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/tests/commandtest.c,mymain,ret,def{935},use{1070},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,mymain,test,def{937,1019,1054},use{79,81,84,85,88,90,169,195,210,224,244,246,999,1004,1009,1011,1014,1015,1020,1052,1053,1058,1061,1062,1067,1068},dvars{},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},pthread_mutex_destroy{1},VIR_FREE{1},pthread_join{1},virMutexDestroy{1},virThreadJoin{1},virMutexUnlock{1},virMutexLock{1}}
libvirt-1.1.0/tests/commandtest.c,mymain,,def{933},use{52,53,54,55,56,59,62,77,107,118,128,129,135,166,167,168,171,175,177,182,183,185,186,188,189,197,203,960,961,962,963,964,965,966,967,999,1004,1011,1012,1013,1014,1070},dvars{fd,NULLerr,err,ret},pointers{},cfuncs{orig_open {2},va_start {2},pthread_attr_destroy{1},pthread_attr_setdetachstate{1},pthread_mutexattr_destroy{1},pthread_mutex_init{2},pthread_mutexattr_init{1},VIR_CLOSE{1},dup2{1},virMutexInit{1},open {2},VIR_ALLOC{1},pthread_mutexattr_settype{1},virThreadCreate{4},virThreadCreate{3},virThreadCreate{2},virThreadCreate{1},pthread_create{2},open{2}}
libvirt-1.1.0/tests/commandtest.c,virCommandThreadWorker,test,def{904,912,919},use{84,85,88,90,210,224,906,908,909,916,921},dvars{},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexUnlock{1},virMutexLock{1}}
libvirt-1.1.0/tests/commandtest.c,virCommandThreadWorker,opaque,def{902},use{904},dvars{test},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test21,errbufExpected,def{863},use{889,890},dvars{},pointers{},cfuncs{virtTestDifference{2}}
libvirt-1.1.0/tests/commandtest.c,test21,err,def{873},use{117,122,123,874},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test21,errbuf,def{859},use{356,359,360,385,869,882,889,890,897,1593,1595,1605},dvars{cmd},pointers{},cfuncs{(int) {3},VIR_FREE{1},strlen{1},virtTestDifference{3},NULLSTR{2},virCommandSetErrorBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test21,cmd,def{856},use{169,244,246,867,868,869,870,872,878,898,1529,1531,1534,1535,1540,1541,1559,1562,1565,1566,1571,1572,1593,1596,1599,1600,1605,1606,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596,2638,2640,2643},dvars{},pointers{},cfuncs{virCommandAbort{1},virThreadJoin{1},VIR_FORCE_CLOSE{1},VIR_FREE{1},virCommandFree{1},virCommandSetOutputBuffer{1},pthread_join{1},virCommandDoAsyncIO{1},virCommandSetErrorBuffer{1},virCommandSetInputBuffer{1}}
libvirt-1.1.0/tests/commandtest.c,test21,outbufExpected,def{860},use{884,885},dvars{},pointers{},cfuncs{virtTestDifference{2}}
libvirt-1.1.0/tests/commandtest.c,test21,outbuf,def{859},use{356,359,360,385,868,882,884,885,896},dvars{},pointers{},cfuncs{(int) {3},VIR_FREE{1},strlen{1},virCommandSetOutputBuffer{2},virtTestDifference{3},NULLSTR{2}}
libvirt-1.1.0/tests/commandtest.c,test21,wrbuf,def{858},use{867,1529,1534,1540},dvars{},pointers{},cfuncs{virCommandSetInputBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test21,ret,def{857,894},use{899},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test21,ATTRIBUTE_UNUSED,def{854},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test19,err,def{778},use{117,122,123,779},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test19,pid,def{773},use{777,783,790},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test19,cmd,def{772},use{169,244,246,777,788,800,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virThreadJoin{1},virCommandAbort{1}}
libvirt-1.1.0/tests/commandtest.c,test19,ret,def{774,797},use{797,801},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test19,ATTRIBUTE_UNUSED,def{770},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test13,err,def{488},use{117,122,123,489},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test13,ret,def{482,503},use{508},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test13,outexpect,def{479},use{498,499},dvars{},pointers{},cfuncs{virtTestDifference{2}}
libvirt-1.1.0/tests/commandtest.c,test13,outactual,def{478},use{356,359,360,385,485,492,498,499,507,1559,1561,1571},dvars{cmd},pointers{},cfuncs{VIR_FREE{1},(int) {3},strlen{1},virtTestDifference{3},virCommandSetOutputBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test13,cmd,def{477,496},use{169,244,246,484,485,487,495,506,1529,1531,1534,1535,1540,1541,1559,1562,1565,1566,1571,1572,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},virThreadJoin{1},VIR_FORCE_CLOSE{1},virCommandSetOutputBuffer{1},virCommandSetInputBuffer{1}}
libvirt-1.1.0/tests/commandtest.c,test13,ATTRIBUTE_UNUSED,def{475},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test17,err,def{678,700},use{117,122,123,679,701},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test17,errbuf,def{669},use{693,694,705,714,1593,1595,1605},dvars{cmd},pointers{},cfuncs{VIR_FREE{1},virCommandSetErrorBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test17,cmd,def{666},use{169,244,246,671,677,693,699,712,1559,1562,1565,1566,1571,1572,1593,1596,1599,1600,1605,1606,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},virThreadJoin{1},VIR_FORCE_CLOSE{1},virCommandSetErrorBuffer{1},virCommandSetOutputBuffer{1}}
libvirt-1.1.0/tests/commandtest.c,test17,outbuf,def{668},use{671,672,683,687,688,705,713,1559,1561,1571},dvars{cmd},pointers{},cfuncs{VIR_FREE{1},virCommandSetOutputBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test17,ret,def{667,710},use{710,715},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test17,ATTRIBUTE_UNUSED,def{664},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,main,,def{56},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test16,err,def{632},use{117,122,123,633},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test16,fd,def{624,636},use{641,642,656,1729,1740,1742,1746,1748},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1},virCommandWriteArgLog{2}}
libvirt-1.1.0/tests/commandtest.c,test16,ret,def{623,652},use{658},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test16,outexpect,def{622},use{647,648},dvars{},pointers{},cfuncs{virtTestDifference{2}}
libvirt-1.1.0/tests/commandtest.c,test16,outactual,def{621,631},use{356,359,360,385,647,648,657},dvars{},pointers{cmd,virCommandToString},cfuncs{VIR_FREE{1},(int) {3},strlen{1},virtTestDifference{3}}
libvirt-1.1.0/tests/commandtest.c,test16,cmd,def{620},use{169,244,246,626,627,628,629,631,641,655,1159,1164,1165,1167,1170,1185,1187,1306,1311,1318,1323,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{cmd},pointers{},cfuncs{va_end{1},va_start{1},pthread_join{1},virCommandAddEnvFormat{1},VIR_FREE{1},virCommandFree{1},virCommandWriteArgLog{1},virThreadJoin{1},VIR_FORCE_CLOSE{1},virCommandAbort{1},virCommandAddArg{1},virCommandAddEnvPair{1}}
libvirt-1.1.0/tests/commandtest.c,test16,ATTRIBUTE_UNUSED,def{618},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test14,err,def{541,555},use{117,122,123,542,556},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test14,jointactual,def{527},use{356,359,360,385,552,553,559,570,571,581,1593,1595,1605},dvars{cmd},pointers{},cfuncs{(int) {3},VIR_FREE{1},strlen{1},virCommandSetOutputBuffer{2},virtTestDifference{3},virCommandSetErrorBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test14,cmd,def{517,550},use{169,244,246,536,537,538,540,548,551,552,553,554,578,1529,1531,1534,1535,1540,1541,1559,1562,1565,1566,1571,1572,1593,1596,1599,1600,1605,1606,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virThreadJoin{1},VIR_FORCE_CLOSE{1},VIR_FREE{1},virCommandFree{1},virCommandSetOutputBuffer{1},virCommandSetErrorBuffer{1},virCommandSetInputBuffer{1}}
libvirt-1.1.0/tests/commandtest.c,test14,erractual,def{522},use{356,359,360,385,538,545,566,567,580,1593,1595,1605},dvars{cmd},pointers{},cfuncs{VIR_FREE{1},(int) {3},strlen{1},virtTestDifference{3},virCommandSetErrorBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test14,ret,def{534,575},use{582},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test14,outexpect,def{519},use{562,563},dvars{},pointers{},cfuncs{virtTestDifference{2}}
libvirt-1.1.0/tests/commandtest.c,test14,outactual,def{518},use{356,359,360,385,537,545,562,563,579,1559,1561,1571},dvars{cmd},pointers{},cfuncs{VIR_FREE{1},(int) {3},strlen{1},virtTestDifference{3},virCommandSetOutputBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test14,jointexpect,def{528},use{570,571},dvars{},pointers{},cfuncs{virtTestDifference{2}}
libvirt-1.1.0/tests/commandtest.c,test14,errexpect,def{523},use{566,567},dvars{},pointers{},cfuncs{virtTestDifference{2}}
libvirt-1.1.0/tests/commandtest.c,test14,ATTRIBUTE_UNUSED,def{515},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test12,err,def{460},use{117,122,123,461},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test12,cmd,def{455},use{169,244,246,457,459,462,466,1529,1531,1534,1535,1540,1541,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virThreadJoin{1},virCommandSetInputBuffer{1}}
libvirt-1.1.0/tests/commandtest.c,test12,ATTRIBUTE_UNUSED,def{453},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test10,err,def{414},use{117,122,123,415},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test10,cmd,def{406},use{169,244,246,411,413,416,420,1419,1423,1427,1435,1436,1445,1448,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virThreadJoin{1},virCommandAddArgSet{1}}
libvirt-1.1.0/tests/commandtest.c,test10,args,def{407},use{411,1419,1426,1431,1441,1444},dvars{},pointers{},cfuncs{virCommandAddArgSet{2}}
libvirt-1.1.0/tests/commandtest.c,test10,ATTRIBUTE_UNUSED,def{404},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test15,err,def{601},use{117,122,123,602},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test15,cwd,def{593},use{596,598,609,1504,1509,1513},dvars{},pointers{},cfuncs{VIR_FREE{1},virCommandSetWorkingDirectory{2}}
libvirt-1.1.0/tests/commandtest.c,test15,cmd,def{592},use{169,244,246,598,600,610,1504,1506,1509,1510,1513,1514,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},VIR_FORCE_CLOSE{1},virThreadJoin{1},virCommandFree{1},VIR_FREE{1},virCommandSetWorkingDirectory{1}}
libvirt-1.1.0/tests/commandtest.c,test15,ret,def{594,606},use{612},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test15,ATTRIBUTE_UNUSED,def{590},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test9,err,def{388},use{117,122,123,389},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test9,buf,def{370},use{243,245,375,376,377,380,382},dvars{},pointers{},cfuncs{VIR_FREE{1},virBufferFreeAndReset{1},virBufferAddLit{1},virCommandAddArgBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test9,cmd,def{368},use{169,243,244,245,246,372,373,374,375,377,378,383,387,390,394,1306,1311,1318,1323,1336,1339,1344,1347,1351,1419,1423,1427,1435,1436,1445,1448,1462,1468,1469,1471,1479,1481,1486,1491,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{cmd},pointers{},cfuncs{virBufferContentAndReset{1},va_arg{1},virBufferFreeAndReset{1},va_end{1},va_start{1},pthread_join{1},virThreadJoin{1},VIR_FORCE_CLOSE{1},VIR_FREE{1},virCommandFree{1},virCommandAbort{1},virCommandAddArgSet{1},virCommandAddArgPair{1},virCommandAddArgList{1},virCommandAddArgBuffer{1},virCommandAddArg{1}}
libvirt-1.1.0/tests/commandtest.c,test9,args,def{369},use{374,1419,1426,1431,1441,1444},dvars{},pointers{},cfuncs{virCommandAddArgSet{2}}
libvirt-1.1.0/tests/commandtest.c,test9,ATTRIBUTE_UNUSED,def{366},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,virCommandTestFreeTimer,ATTRIBUTE_UNUSED,def{926,927},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test5,err,def{276},use{117,122,123,277},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test5,cmd,def{271},use{169,244,246,273,275,278,282,1159,1164,1165,1167,1170,1185,1187,1256,1259,1264,1276,1278,1283,1285,1287,1288,1289,1290,1291,1292,1293,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{va_start{1},virCommandAddEnvFormat{1},virCommandAddEnvPair{1},va_end{1},VIR_RESIZE_N{3},VIR_RESIZE_N{2},VIR_RESIZE_N{1},pthread_join{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virCommandAddEnvPass{1},virThreadJoin{1},virCommandAbort{1},virCommandAddEnvPassCommon{1}}
libvirt-1.1.0/tests/commandtest.c,test5,ATTRIBUTE_UNUSED,def{269},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test4,err,def{242},use{117,122,123,243},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test4,pid,def{232},use{247,251},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test4,pidfile,def{231},use{235,238,258,259,260},dvars{},pointers{},cfuncs{unlink{1},VIR_FREE{1},virCommandSetPidFile{2}}
libvirt-1.1.0/tests/commandtest.c,test4,cmd,def{230},use{169,238,239,241,244,246,257,943,948,949,1092,1094,1097,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},VIR_FREE{1},virCommandFree{1},virThreadJoin{1},virCommandDaemonize{1},VIR_FORCE_CLOSE{1},virCommandSetPidFile{1}}
libvirt-1.1.0/tests/commandtest.c,test4,ret,def{233,254},use{261},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test4,ATTRIBUTE_UNUSED,def{228},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test20,err,def{830},use{117,122,123,831},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test20,retsig_action,def{817},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test20,buf,def{812},use{823,827,838,1529,1534,1540},dvars{},pointers{},cfuncs{VIR_FREE{1},virCommandSetInputBuffer{2}}
libvirt-1.1.0/tests/commandtest.c,test20,sig_action,def{815,818},use{130,132,135,161,196,201,818,819,821},dvars{},pointers{},cfuncs{sigprocmask {2},sigprocmask {3},sigaction{2},sigemptyset{1}}
libvirt-1.1.0/tests/commandtest.c,test20,cmd,def{810},use{169,244,246,827,829,837,1529,1531,1534,1535,1540,1541,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virThreadJoin{1},virCommandSetInputBuffer{1}}
libvirt-1.1.0/tests/commandtest.c,test20,ret,def{813,835},use{839},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test20,ATTRIBUTE_UNUSED,def{808},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test3,err,def{201},use{117,122,123,202},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test3,ret,def{195,213},use{219},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test3,ATTRIBUTE_UNUSED,def{189},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test3,newfd3,def{194},use{198,208},dvars{},pointers{},cfuncs{virCommandTransferFD{2}}
libvirt-1.1.0/tests/commandtest.c,test3,newfd2,def{193},use{207,218},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/tests/commandtest.c,test3,newfd1,def{192},use{197,206,217,881,886,889,890,894,895,911,913},dvars{STDERR_FILENOfdSTDERR_FILENOret},pointers{},cfuncs{virCommandKeepFD{2},VIR_DEBUG{2},VIR_FORCE_CLOSE{1},virCommandPreserveFD{2}}
libvirt-1.1.0/tests/commandtest.c,test3,cmd,def{191},use{169,197,198,200,216,244,246,881,885,889,890,891,892,893,911,913,927,929,930,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{STDERR_FILENOfdSTDERR_FILENOret},pointers{},cfuncs{pthread_join{1},virCommandKeepFD{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},virThreadJoin{1},VIR_FORCE_CLOSE{1},virCommandTransferFD{1},virCommandPreserveFD{1}}
libvirt-1.1.0/tests/commandtest.c,test6,err,def{300},use{117,122,123,301},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test6,cmd,def{294},use{169,244,246,296,297,299,302,306,1159,1164,1165,1167,1170,1185,1187,1256,1259,1264,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{va_end{1},virCommandAddEnvPair{1},va_start{1},pthread_join{1},virCommandAbort{1},virCommandAddEnvFormat{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virThreadJoin{1},virCommandAddEnvPass{1}}
libvirt-1.1.0/tests/commandtest.c,test6,ATTRIBUTE_UNUSED,def{292},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test2,err,def{162,174},use{117,122,123,163,175},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test2,cmd,def{158},use{161,164,169,173,176,180,244,246,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virThreadJoin{1}}
libvirt-1.1.0/tests/commandtest.c,test2,ret,def{159,168},use{170},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test2,ATTRIBUTE_UNUSED,def{156},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test8,err,def{350},use{117,122,123,351},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test8,cmd,def{342},use{169,244,246,344,345,346,347,349,352,356,1121,1127,1130,1131,1132,1138,1139,1144,1159,1164,1165,1167,1170,1185,1187,1200,1204,1208,1212,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{cmd,namelen},pointers{},cfuncs{virCommandAddEnv{1},va_end{1},va_start{1},pthread_join{1},virCommandAbort{1},virCommandAddEnvString{1},virCommandAddEnvFormat{1},virCommandFree{1},VIR_FREE{1},strcspn{1},virThreadJoin{1},VIR_FORCE_CLOSE{1},virCommandAddEnvPair{1}}
libvirt-1.1.0/tests/commandtest.c,test8,ATTRIBUTE_UNUSED,def{340},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test1,status,def{138},use{141,143},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test1,cmd,def{136},use{141,148,169,244,246,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virThreadJoin{1}}
libvirt-1.1.0/tests/commandtest.c,test1,retcmd,def{140},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test1,ret,def{137,145},use{145,149},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test1,ATTRIBUTE_UNUSED,def{134},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test11,err,def{438},use{117,122,123,439},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test11,cmd,def{435},use{169,244,246,437,440,444,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virThreadJoin{1}}
libvirt-1.1.0/tests/commandtest.c,test11,args,def{431},use{435,803,805,808,809,810,811,813,814,815,816,818,820,1419,1423,1427,1435,1436,1445,1448},dvars{},pointers{},cfuncs{virCommandAddArgSet{1},virCommandNewArgs{1}}
libvirt-1.1.0/tests/commandtest.c,test11,ATTRIBUTE_UNUSED,def{429},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test0,cmd,def{111},use{115,125,169,244,246,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},virCommandFree{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virThreadJoin{1}}
libvirt-1.1.0/tests/commandtest.c,test0,retcmd,def{114},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test0,ret,def{112,122},use{122,126},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test0,ATTRIBUTE_UNUSED,def{109},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test18,err,def{736},use{117,122,123,737},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test18,pid,def{725},use{742,749,754},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test18,pidfile,def{724},use{728,731,761,762,763},dvars{},pointers{},cfuncs{unlink{1},VIR_FREE{1},virCommandSetPidFile{2}}
libvirt-1.1.0/tests/commandtest.c,test18,cmd,def{723,748},use{169,244,246,731,732,735,747,760,943,948,949,1092,1094,1097,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{pthread_join{1},virCommandAbort{1},VIR_FREE{1},virCommandFree{1},virThreadJoin{1},virCommandDaemonize{1},VIR_FORCE_CLOSE{1},virCommandSetPidFile{1}}
libvirt-1.1.0/tests/commandtest.c,test18,ret,def{726,757},use{757,764},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test18,ATTRIBUTE_UNUSED,def{721},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,checkoutput,actuallog,def{69},use{82,87,88,97,356,359,360,385},dvars{},pointers{},cfuncs{VIR_FREE{1},(int) {3},strlen{1},virtTestDifference{3}}
libvirt-1.1.0/tests/commandtest.c,checkoutput,expectlog,def{67},use{77,87,88,99},dvars{},pointers{},cfuncs{VIR_FREE{1},virtTestDifference{2}}
libvirt-1.1.0/tests/commandtest.c,checkoutput,actualname,def{68},use{74,82,83,95,96,98,132},dvars{},pointers{},cfuncs{VIR_FREE{1},unlink{1},fprintf{3}}
libvirt-1.1.0/tests/commandtest.c,checkoutput,expectname,def{66},use{71,77,78,100,132},dvars{},pointers{},cfuncs{VIR_FREE{1},fprintf{3}}
libvirt-1.1.0/tests/commandtest.c,checkoutput,ret,def{65,92},use{92,101},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,checkoutput,testname,def{63},use{72},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/commandtest.c,test7,err,def{325},use{117,122,123,326},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},printf{2}}
libvirt-1.1.0/tests/commandtest.c,test7,cmd,def{318},use{169,244,246,320,321,322,324,327,331,1159,1164,1165,1167,1170,1185,1187,1256,1259,1264,1276,1278,1283,1285,1287,1288,1289,1290,1291,1292,1293,2383,2546,2549,2552,2553,2556,2557,2558,2560,2561,2562,2564,2565,2566,2568,2569,2570,2572,2574,2578,2579,2582,2584,2585,2587,2588,2590,2593,2596},dvars{},pointers{},cfuncs{VIR_RESIZE_N{3},VIR_RESIZE_N{2},VIR_RESIZE_N{1},va_end{1},virCommandAddEnvPair{1},va_start{1},pthread_join{1},virCommandAddEnvFormat{1},virCommandFree{1},VIR_FREE{1},virCommandAddEnvPass{1},virThreadJoin{1},VIR_FORCE_CLOSE{1},virCommandAbort{1},virCommandAddEnvPassCommon{1}}
libvirt-1.1.0/tests/commandtest.c,test7,ATTRIBUTE_UNUSED,def{316},use{},dvars{},pointers{},cfuncs{}
