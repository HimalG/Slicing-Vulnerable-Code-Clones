libvirt-1.1.0/src/util/virerror.c,virSetErrorLogPriorityFunc,virErrorLogPriorityFilter,def{1398},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetErrorLogPriorityFunc,func,def{1396},use{1398},dvars{virErrorLogPriorityFilter},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virReportOOMErrorFull,virerr,def{1382,1384},use{1387},dvars{},pointers{},cfuncs{virRaiseErrorFull{12},virRaiseErrorFull{7}}
libvirt-1.1.0/src/util/virerror.c,virReportOOMErrorFull,linenr,def{1380},use{1385},dvars{},pointers{},cfuncs{virRaiseErrorFull{3}}
libvirt-1.1.0/src/util/virerror.c,virReportOOMErrorFull,funcname,def{1379},use{649,701,703,705,764,773,796,824,826,840,865,877,895,1385},dvars{ret},pointers{filename},cfuncs{virLogOutputToFd{2},virLogMessage{2},f{2},virLogFormatString{4},virLogVMessage{2},virErrorLogPriorityFilter{2},virRaiseErrorFull{2}}
libvirt-1.1.0/src/util/virerror.c,virReportOOMErrorFull,filename,def{1378},use{330,334,675,676,677,678,1385},dvars{ret},pointers{domcode},cfuncs{va_end{1},virVasprintf{3},va_start{1},virRaiseErrorFull{1}}
libvirt-1.1.0/src/util/virerror.c,virReportOOMErrorFull,domcode,def{1377},use{636,688,1386},dvars{to},pointers{},cfuncs{virRaiseErrorFull{4}}
libvirt-1.1.0/src/util/virerror.c,virStrerror,ret,def{1306,1309},use{1311},dvars{},pointers{ebuf,errBuf},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virStrerror,errBuf,def{1303},use{137,142,144,155,165,173,179,180,188,192,195,198,208,217,227,234,273,293,311,321,1308,1309},dvars{safe_copybufbuflenmsgret,ret},pointers{strerror_buf,pciret,err},cfuncs{snprintf {2},strerror_r {3},strerror_r {5},safe_copy {2},__xpg_strerror_r {3},strerror_r{2}}
libvirt-1.1.0/src/util/virerror.c,virStrerror,save_errno,def{1305},use{1310},dvars{errno},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virStrerror,errBufLen,def{1303},use{186,188,190,192,210,212,213,215,229,232,234,1308},dvars{ret,len},pointers{},cfuncs{strlen {1},strerror_r {3},strerror_r {2},safe_copy {3},strerror_r{3}}
libvirt-1.1.0/src/util/virerror.c,virStrerror,errno,def{1310},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virStrerror,theerrno,def{1303},use{254,256,257,261,263,264,273,275,276,293,311,1308},dvars{ret},pointers{},cfuncs{catclose {1},catgets {1},strerror_r{1}}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,virerr,def{1274,1284},use{1287,1288},dvars{},pointers{,errorMessage,errorcode},cfuncs{virRaiseErrorFull{12},virRaiseErrorFull{7}}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,errorMessage,def{1273,1281},use{41,45,48,51,55,56,60,330,334,335,644,648,673,677,690,707,723,731,740,746,752,758,764,769,770,776,782,791,797,803,809,818,827,833,839,845,851,857,863,869,875,881,887,893,899,905,911,917,923,929,935,941,947,953,959,965,971,977,983,989,995,1001,1007,1013,1019,1025,1031,1037,1043,1049,1055,1061,1067,1073,1079,1085,1091,1097,1103,1109,1115,1121,1127,1133,1139,1145,1151,1157,1163,1169,1175,1181,1187,1193,1199,1205,1211,1217,1223,1229,1235,1241,1278,1281,1284,1287,1288},dvars{to,ret},pointers{},cfuncs{virLogMessage{8},VIR_STRDUP_QUIET{1},free {1},memcpy {2},memcpy {3},virVasprintf{1},virRaiseErrorFull{13},virRaiseErrorFull{8},virErrorMsg{2},vsnprintf{3},vsnprintf{1}}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,args,def{1272},use{43,45,46,1277,1278,1279},dvars{len},pointers{},cfuncs{vasnprintf {2},va_end{1},vsnprintf{2},va_start{1}}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,,def{1269},use{1284},dvars{},pointers{info,buf,ret},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,fmt,def{1269},use{41,45,48,51,56,60,1276,1277,1278},dvars{},pointers{},cfuncs{free {1},vsnprintf{1},memcpy {2},va_start{2}}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,errno,def{1289},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,save_errno,def{1271},use{1289},dvars{errno},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,funcname,def{1267},use{649,701,703,705,764,773,796,824,826,840,865,877,895,1285},dvars{ret},pointers{ctxt,error,errNum,ret},cfuncs{virLogOutputToFd{2},virLogMessage{2},f{2},virLogFormatString{4},virLogVMessage{2},virErrorLogPriorityFilter{2},virRaiseErrorFull{2}}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,errorcode,def{1265},use{637,664,689,723,727,1284,1286},dvars{to},pointers{},cfuncs{virRaiseErrorFull{5},virErrorMsg{1}}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,filename,def{1266},use{330,334,675,676,677,678,1285},dvars{ret},pointers{},cfuncs{va_end{1},virVasprintf{3},va_start{1},virRaiseErrorFull{1}}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,linenr,def{1268},use{1285},dvars{},pointers{},cfuncs{virRaiseErrorFull{3}}
libvirt-1.1.0/src/util/virerror.c,virReportErrorHelper,domcode,def{1264},use{636,688,1286},dvars{to},pointers{},cfuncs{virRaiseErrorFull{4}}
libvirt-1.1.0/src/util/virerror.c,virErrorMsg,errmsg,def{725,732,734,737,741,743,747,749,753,755,759,761,765,767,771,773,777,779,783,785,788,792,794,798,800,804,806,810,812,815,819,821,824,828,830,834,836,840,842,846,848,852,854,858,860,864,866,870,872,876,878,882,884,888,890,894,896,900,902,906,908,912,914,918,920,924,926,930,932,936,938,942,944,948,950,954,956,960,962,966,968,972,974,978,980,984,986,990,992,996,998,1002,1004,1008,1010,1014,1016,1020,1022,1026,1028,1032,1034,1038,1040,1044,1046,1050,1052,1056,1058,1062,1064,1068,1070,1074,1076,1080,1082,1086,1088,1092,1094,1098,1100,1104,1106,1110,1112,1116,1118,1122,1124,1128,1130,1134,1136,1140,1142,1146,1148,1152,1154,1158,1160,1164,1166,1170,1172,1176,1178,1182,1184,1188,1190,1194,1196,1200,1202,1206,1208,1212,1214,1218,1220,1224,1226,1230,1232,1236,1238,1242,1244},use{926,944,950,956,1247},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virErrorMsg,info,def{723},use{731,740,746,752,758,764,770,776,782,791,797,803,809,818,827,833,839,845,851,857,863,869,875,881,887,893,899,905,911,917,923,929,935,941,947,953,959,965,971,977,983,989,995,1001,1007,1013,1019,1025,1031,1037,1043,1049,1055,1061,1067,1073,1079,1085,1091,1097,1103,1109,1115,1121,1127,1133,1139,1145,1151,1157,1163,1169,1175,1181,1187,1193,1199,1205,1211,1217,1223,1229,1235,1241},dvars{},pointers{fmt,errorMessage},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virErrorMsg,error,def{723},use{727},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virCopyError,ret,def{181,191,193,195,197},use{191,193,195,197,203},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virCopyError,to,def{179,187,188,189,198,199},use{182,184,190,192,194,196,348,350,352,353,354,355,356},dvars{},pointers{},cfuncs{memset{1},VIR_FREE{1},virResetError{1}}
libvirt-1.1.0/src/util/virerror.c,virCopyError,from,def{178},use{185,187,188,189,190,192,194,196,198,199},dvars{to},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,priority,def{649,701,703},use{703,705,764,773,796,824,826,840,865,877,895},dvars{ret},pointers{},cfuncs{virLogOutputToFd{2},virLogMessage{2},f{2},virLogFormatString{4},virLogVMessage{2},virErrorLogPriorityFilter{2}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,ap,def{675},use{330,334,676,677,678},dvars{ret},pointers{},cfuncs{va_end{1},virVasprintf{3},va_start{1}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,str,def{648},use{330,334,335,673,677,690,707,769},dvars{ret,to},pointers{err,st,errorMessage,ctl,configstr,disk,configfile,strp,,node,uuidstr,msgDetail,def,vmDef,addr,str},cfuncs{virLogMessage{8},virVasprintf{1},VIR_STRDUP_QUIET{1}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,,def{644},use{},dvars{},pointers{err,msgDetail,st,errorMessage},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,str3,def{641},use{694},dvars{},pointers{},cfuncs{VIR_STRDUP_QUIET{2},VIR_STRDUP_QUIET{1}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,str1,def{639},use{692},dvars{},pointers{},cfuncs{VIR_STRDUP_QUIET{2},VIR_STRDUP_QUIET{1}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,domain,def{636},use{688},dvars{to},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,linenr,def{635},use{330,334,346,351,352,702,706,716,720,766,774,798,840,878,896},dvars{ret},pointers{},cfuncs{virVasprintf{2},va_start{2},virAsprintf{2},virLogVMessage{4},virAsprintf{4},virLogOutputToFd{4},virLogMessage{4},f{4},virLogFormatString{2}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,int2,def{643},use{696},dvars{to},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,fmt,def{644},use{330,334,672,676,677},dvars{ret},pointers{},cfuncs{virVasprintf{2},va_start{2}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,level,def{638},use{691,701},dvars{priority,to},pointers{},cfuncs{virErrorLevelPriority{1}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,int1,def{642},use{695},dvars{to},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,errno,def{658,665,709},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,save_errno,def{646},use{658,665,709},dvars{errno},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,code,def{637},use{664,689},dvars{to},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,str2,def{640},use{693},dvars{},pointers{},cfuncs{VIR_STRDUP_QUIET{2},VIR_STRDUP_QUIET{1}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,funcname,def{634},use{346,699,706,716,767,774,799,840,878,896},dvars{ret},pointers{},cfuncs{virLogOutputToFd{5},virLogMessage{5},f{5},virLogFormatString{3},virAsprintf{3},virLogVMessage{5}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,to,def{647,656,688,689,690,691,695,696},use{348,350,352,353,354,355,356,657,662,692,693,694,703},dvars{priority},pointers{},cfuncs{memset{1},VIR_FREE{1},virErrorLogPriorityFilter{1},VIR_STRDUP_QUIET{1},virResetError{1}}
libvirt-1.1.0/src/util/virerror.c,virRaiseErrorFull,ATTRIBUTE_UNUSED,def{633},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virConnCopyLastError,to,def{446},use{348,350,352,353,354,355,356,449,455,457,459},dvars{},pointers{},cfuncs{virCopyError{2},virResetError{1},VIR_FREE{1},memset{4},memset{1}}
libvirt-1.1.0/src/util/virerror.c,virConnCopyLastError,conn,def{446},use{84,85,88,90,179,182,184,187,188,189,190,192,194,196,198,199,210,224,348,350,352,353,354,355,356,451,453,454,457,458},dvars{},pointers{conn,m},cfuncs{pthread_mutex_lock{1},memset{1},VIR_FREE{1},virCopyError{1},virResetError{1},pthread_mutex_unlock{1},virMutexUnlock{1},virMutexLock{1}}
libvirt-1.1.0/src/util/virerror.c,virLastErrorObject,err,def{209},use{211,212,214,215,217},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virerror.c,virLastErrorObject,reterr,def{210},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virLastErrorObject,,def{207},use{212,214,270,272},dvars{},pointers{},cfuncs{pthread_setspecific{1},pthread_setspecific{2},virThreadLocalSet{2},virThreadLocalSet{1},VIR_ALLOC{1}}
libvirt-1.1.0/src/util/virerror.c,virDispatchError,userData,def{581,598},use{605},dvars{},pointers{st,network,secret,stream,nwfilter,dom,iface,dev,pool,domain,dconn,sec,vol,snapshot,ctl,net,conn},cfuncs{(handler){1}}
libvirt-1.1.0/src/util/virerror.c,virDispatchError,handler,def{580,597},use{596,604,605},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virDispatchError,err,def{579},use{179,182,184,187,188,189,190,192,194,196,198,199,348,350,352,353,354,355,356,584,588,589,594,605,607},dvars{},pointers{},cfuncs{memset{1},virErrorGenericFailure{1},virDefaultErrorFunc{1},VIR_FREE{1},virResetError{1},virCopyError{2},virCopyError{1},(handler){2}}
libvirt-1.1.0/src/util/virerror.c,virDispatchError,conn,def{577},use{84,85,88,90,210,224,592,593,594,596,597,598,600},dvars{handler},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexUnlock{1},virCopyError{2},virMutexLock{1}}
libvirt-1.1.0/src/util/virerror.c,virErrorGenericFailure,virLastErrvirLastErrFreeDataerr,def{166},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virErrorGenericFailure,err,def{164,167,168},use{169},dvars{},pointers{},cfuncs{VIR_STRDUP_QUIET{1}}
libvirt-1.1.0/src/util/virerror.c,virConnSetErrorFunc,handler,def{509},use{514},dvars{conn},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virConnSetErrorFunc,userData,def{508},use{515},dvars{conn},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virConnSetErrorFunc,conn,def{508,514,515},use{84,85,88,90,210,224,511,513,516},dvars{},pointers{},cfuncs{pthread_mutex_lock{1},pthread_mutex_unlock{1},virMutexUnlock{1},virMutexLock{1}}
libvirt-1.1.0/src/util/virerror.c,virDefaultErrorFunc,len,def{529,552},use{557},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virDefaultErrorFunc,network,def{528,550},use{556,559,562},dvars{},pointers{err},cfuncs{fprintf{6}}
libvirt-1.1.0/src/util/virerror.c,virDefaultErrorFunc,domain,def{528,548},use{544,548,553,556,559,562},dvars{domain},pointers{dom,err},cfuncs{fprintf{5},virErrorDomainTypeToString{1}}
libvirt-1.1.0/src/util/virerror.c,virDefaultErrorFunc,dom,def{528,544,546},use{132,545,546,547,548,556,559,562},dvars{},pointers{domain,err},cfuncs{fprintf{3}}
libvirt-1.1.0/src/util/virerror.c,virDefaultErrorFunc,lvl,def{528,535,538,541},use{134,138,141,535,556,559,562},dvars{},pointers{},cfuncs{fprintf{4}}
libvirt-1.1.0/src/util/virerror.c,virDefaultErrorFunc,err,def{526},use{531,533,544,547,548,549,550,552,553,554,556,557,559,562},dvars{len},pointers{},cfuncs{fprintf{8},fprintf{7},strlen{1},virErrorDomainTypeToString{1}}
libvirt-1.1.0/src/util/virerror.c,virFreeError,err,def{366},use{348,350,352,353,354,355,356,368,369},dvars{},pointers{},cfuncs{memset{1},VIR_FREE{1},virResetError{1}}
libvirt-1.1.0/src/util/virerror.c,virConnGetLastError,conn,def{412},use{414,416},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virResetLastError,err,def{384},use{348,350,352,353,354,355,356,385,386},dvars{},pointers{},cfuncs{memset{1},VIR_FREE{1},virResetError{1}}
libvirt-1.1.0/src/util/virerror.c,virResetLastError,,def{382},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virResetError,err,def{348},use{350,352,353,354,355,356},dvars{},pointers{},cfuncs{memset{1},VIR_FREE{1}}
libvirt-1.1.0/src/util/virerror.c,virSaveLastError,saved_errno,def{331},use{337},dvars{errno},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSaveLastError,errno,def{337},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSaveLastError,to,def{330},use{179,182,184,187,188,189,190,192,194,196,198,199,307,310,311,333,336,338,348,350,352,353,354,355,356},dvars{},pointers{},cfuncs{memset{1},VIR_FREE{1},virResetError{1},virCopyError{1},virCopyLastError{1}}
libvirt-1.1.0/src/util/virerror.c,virSaveLastError,,def{328},use{333},dvars{},pointers{},cfuncs{VIR_ALLOC{1}}
libvirt-1.1.0/src/util/virerror.c,virCopyLastError,err,def{307},use{179,182,184,187,188,189,190,192,194,196,198,199,310,311,348,350,352,353,354,355,356},dvars{},pointers{},cfuncs{memset{1},VIR_FREE{1},virResetError{1},virCopyError{1}}
libvirt-1.1.0/src/util/virerror.c,virCopyLastError,to,def{305},use{309,311,313,314,348,350,352,353,354,355,356},dvars{},pointers{},cfuncs{virResetError{1},virCopyError{2},VIR_FREE{1},memset{4},memset{1}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,args,def{1343},use{43,45,46,1346,1347,1348},dvars{len,n},pointers{},cfuncs{vasnprintf {2},va_end{1},vsnprintf{2},va_start{1}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,p,def{1352},use{1353},dvars{},pointers{n,msgDetailBuf},cfuncs{stpcpy{1}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,errnoDetail,def{1337},use{1350,1353,1359},dvars{},pointers{},cfuncs{stpcpy{2},strlen{1}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,errno,def{1364},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,save_errno,def{1333},use{1364},dvars{errno},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,strerror_buf,def{1334},use{137,142,144,155,165,173,179,180,188,192,195,198,208,217,227,234,273,293,311,321,1303,1305,1308,1309,1310,1337,1338},dvars{ret,safe_copybufbuflenmsgret,errno},pointers{},cfuncs{snprintf {2},strerror_r {3},strerror_r {5},virStrerror{2},virStrerror{4},safe_copy {2},__xpg_strerror_r {3},strerror_r{2}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,,def{1331},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,linenr,def{1330},use{1361},dvars{},pointers{},cfuncs{virRaiseErrorFull{3}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,msgDetail,def{1340,1354,1359},use{330,334,335,644,648,673,677,690,707,769,1358,1363},dvars{to,ret},pointers{errnoDetail,msgDetailBuf},cfuncs{virLogMessage{8},virVasprintf{1},VIR_STRDUP_QUIET{1},virRaiseErrorFull{13},virRaiseErrorFull{8}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,msg,def{1339},use{1363},dvars{},pointers{},cfuncs{virRaiseErrorFull{12},virRaiseErrorFull{7}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,domcode,def{1326},use{636,688,1362},dvars{to},pointers{},cfuncs{virRaiseErrorFull{4}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,funcname,def{1329},use{649,701,703,705,764,773,796,824,826,840,865,877,895,1361},dvars{ret},pointers{},cfuncs{virLogOutputToFd{2},virLogMessage{2},f{2},virLogFormatString{4},virLogVMessage{2},virErrorLogPriorityFilter{2},virRaiseErrorFull{2}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,filename,def{1328},use{330,334,675,676,677,678,1361},dvars{ret},pointers{},cfuncs{va_end{1},virVasprintf{3},va_start{1},virRaiseErrorFull{1}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,n,def{1344,1347},use{1351,1352},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,msgDetailBuf,def{1335},use{41,45,48,51,55,56,60,1347,1351,1352,1354},dvars{n},pointers{},cfuncs{memcpy {2},memcpy {3},free {1},vsnprintf{3},vsnprintf{1}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,fmt,def{1331},use{41,45,48,51,56,60,723,731,740,746,752,758,764,770,776,782,791,797,803,809,818,827,833,839,845,851,857,863,869,875,881,887,893,899,905,911,917,923,929,935,941,947,953,959,965,971,977,983,989,995,1001,1007,1013,1019,1025,1031,1037,1043,1049,1055,1061,1067,1073,1079,1085,1091,1097,1103,1109,1115,1121,1127,1133,1139,1145,1151,1157,1163,1169,1175,1181,1187,1193,1199,1205,1211,1217,1223,1229,1235,1241,1339,1342,1346,1347},dvars{n},pointers{},cfuncs{free {1},vsnprintf{1},memcpy {2},va_start{2},virErrorMsg{2}}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,len,def{1350},use{1351},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virReportSystemErrorFull,theerrno,def{1327},use{254,256,257,261,263,264,273,275,276,293,311,642,695,1303,1308,1337,1363},dvars{ret,to},pointers{},cfuncs{strerror_r{1},virRaiseErrorFull{10},catclose {1},catgets {1},virStrerror{1}}
libvirt-1.1.0/src/util/virerror.c,virGetLastErrorMessage,err,def{252},use{253,255,257},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virGetLastErrorMessage,,def{250},use{257},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetErrorFunc,virErrorHandler,def{493},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetErrorFunc,handler,def{491},use{493},dvars{virErrorHandler},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetErrorFunc,virUserData,def{494},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetErrorFunc,userData,def{491},use{494},dvars{virUserData},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virGetLastError,err,def{234},use{235,237},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virGetLastError,,def{232},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virLastErrFreeData,err,def{136},use{137,139,140,348,350,352,353,354,355,356},dvars{},pointers{},cfuncs{memset{1},VIR_FREE{1},virResetError{1}}
libvirt-1.1.0/src/util/virerror.c,virLastErrFreeData,data,def{134},use{136},dvars{err},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virErrorInitialize,,def{152},use{154,254,255,258},dvars{ret},pointers{},cfuncs{virThreadLocalInit{2},virThreadLocalInit{1}}
libvirt-1.1.0/src/util/virerror.c,virErrorLevelPriority,level,def{44},use{45},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetError,messageerr,def{279},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetError,saved_errno,def{276},use{286},dvars{errno},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetError,err,def{275},use{280,283,284,348,350,352,353,354,355,356},dvars{ret},pointers{},cfuncs{memset{1},VIR_FREE{1},virCopyError{2},virResetError{1}}
libvirt-1.1.0/src/util/virerror.c,virSetError,ret,def{277,284},use{287},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetError,errno,def{286},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virerror.c,virSetError,newerr,def{273},use{179,182,184,187,188,189,190,192,194,196,198,199,284,348,350,352,353,354,355,356},dvars{ret},pointers{},cfuncs{memset{1},VIR_FREE{1},virResetError{1},virCopyError{1}}
libvirt-1.1.0/src/util/virerror.c,virConnResetLastError,conn,def{472},use{84,85,88,90,210,224,348,350,352,353,354,355,356,474,476,477,478},dvars{},pointers{},cfuncs{pthread_mutex_lock{1},memset{1},virResetError{1},VIR_FREE{1},pthread_mutex_unlock{1},virMutexUnlock{1},virMutexLock{1}}
