libvirt-1.1.0/tests/testutils.c,virtTestClearLineRegex,ret,def{748,753},use{755},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestClearLineRegex,str,def{738},use{741,742,753,760},dvars{lineEnd,ret},pointers{},cfuncs{strchr{1}}
libvirt-1.1.0/tests/testutils.c,virtTestClearLineRegex,lineEnd,def{742,750,760,767,769},use{749,750,756,757,766,767,768,769},dvars{lineEnd},pointers{lineStart,strchr},cfuncs{strlen{3},memmove{2}}
libvirt-1.1.0/tests/testutils.c,virtTestClearLineRegex,lineStart,def{741,762,763,768,771},use{224,246,251,254,747,753,757,760,762,768,769},dvars{length,err,lineStart,ret},pointers{lineEnd,str},cfuncs{strlen {1},strchr{1},re_search_internal {2},memmove{1},regexec{2}}
libvirt-1.1.0/tests/testutils.c,virtTestClearLineRegex,reg,def{740},use{223,232,250,251,254,664,665,666,744,753,776},dvars{err,ret},pointers{},cfuncs{free_dfa_content {1},re_search_internal {1},regfree{1},regexec{1}}
libvirt-1.1.0/tests/testutils.c,virtTestClearLineRegex,pattern,def{737},use{744},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,EXIT_AM_HARDFAILprogname,def{594},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,abs_srcdir,def{588},use{591,726},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/testutils.c,virtTestMain,worker,def{583,672},use{132,680,682,686,700},dvars{},pointers{},cfuncs{fprintf{3}}
libvirt-1.1.0/tests/testutils.c,virtTestMain,workers,def{582,670},use{632,671,705,708},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/testutils.c,virtTestMain,virTestGetDebugabs_srcdir,def{586},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,mp,def{581,630},use{132,631,632,667,669,680,681,682,685,699,704},dvars{},pointers{},cfuncs{fprintf{3}}
libvirt-1.1.0/tests/testutils.c,virtTestMain,ret,def{574,633,639,656,694,706,722},use{134,138,141,640,657,701,715,728,731,733},dvars{},pointers{},cfuncs{fprintf{4},_exit{1}}
libvirt-1.1.0/tests/testutils.c,virtTestMain,n,def{578},use{80,81,680,682,691},dvars{},pointers{},cfuncs{virAllocTestOOM{1}}
libvirt-1.1.0/tests/testutils.c,virtTestMain,abs_srcdir_cleanup,def{575,589},use{725},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,oomCount,def{580,621,624},use{54,58,620,621,623,624,625,691},dvars{testMallocFailLast},pointers{},cfuncs{virAllocTestOOM{2}}
libvirt-1.1.0/tests/testutils.c,virtTestMain,approxAlloc,def{577,660},use{132,134,138,141,665,680,713},dvars{},pointers{},cfuncs{fprintf{3},fprintf{4}}
libvirt-1.1.0/tests/testutils.c,virtTestMain,argc,def{570},use{597},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,testOOM,def{626},use{648,650},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,,def{572},use{160,181,183,186,187,191,192,195,199,200,202,205,594,595,613,614,620,632,654,655,656,657,658,662,669,670,674,680,686,687,688,689,690,705},dvars{val,err,virLogOutputs,end_ptr,EXIT_AM_HARDFAILprogname},pointers{},cfuncs{strtol{1},strtol{2},VIR_FREE{1},virProcessWait{2},virProcessWait{1},VIR_ALLOC_N{2},VIR_ALLOC_N{1},virLogDefineOutput{6},virLogDefineOutput{5},virLogDefineOutput{4},virLogDefineOutput{3},virLogDefineOutput{2},virLogDefineOutput{1},virStrToLong_i{4},virStrToLong_i{2},virStrToLong_i{1},NULLSTR{3},STRPREFIX{1}}
libvirt-1.1.0/tests/testutils.c,virtTestMain,oomStr,def{579},use{620},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,i,def{668,703},use{669,672,704},dvars{worker},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,func,def{572},use{639,656,693,722},dvars{ret},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,EXIT_FAILUREoomStr,def{619},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestMain,argv,def{571},use{30,32,132,594,598},dvars{EXIT_AM_HARDFAILprogname},pointers{},cfuncs{fprintf{3},FILE_SYSTEM_PREFIX_LEN {1},last_component{1}}
libvirt-1.1.0/tests/testutils.c,virtTestErrorHook,retntrace,def{529},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestErrorHook,ntrace,def{525},use{37,40,529,530,533},dvars{retntrace},pointers{},cfuncs{backtrace_symbols{2},backtrace{2}}
libvirt-1.1.0/tests/testutils.c,virtTestErrorHook,i,def{526},use{533},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestErrorHook,symbols,def{527,530},use{132,531,534,535,537},dvars{},pointers{ntrace,trace},cfuncs{VIR_FREE{1},fprintf{3}}
libvirt-1.1.0/tests/testutils.c,virtTestErrorHook,trace,def{524},use{37,39,525,529,530},dvars{retntrace},pointers{},cfuncs{backtrace_symbols{1},backtrace{1},ARRAY_CARDINALITY{1}}
libvirt-1.1.0/tests/testutils.c,virtTestErrorHook,ATTRIBUTE_UNUSED,def{522},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestErrorHook,n,def{522},use{132,532},dvars{},pointers{},cfuncs{fprintf{3}}
libvirt-1.1.0/tests/testutils.c,virTestGetFlag,flag,def{545},use{550,553},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virTestGetFlag,flagStr,def{544,547},use{550},dvars{},pointers{name},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virTestGetFlag,name,def{543},use{547},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestLogContentAndReset,NULLret,def{514},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestLogContentAndReset,ret,def{510},use{515,516,517},dvars{},pointers{},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/tests/testutils.c,virtTestLogContentAndReset,,def{508},use{258,260,263,512,514},dvars{NULLret},pointers{},cfuncs{virBufferError{1}}
libvirt-1.1.0/tests/testutils.c,virtTestLogClose,log,def{500},use{243,245,502},dvars{},pointers{data},cfuncs{VIR_FREE{1},virBufferFreeAndReset{1}}
libvirt-1.1.0/tests/testutils.c,virtTestLogClose,data,def{498},use{500},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virTestGetVerbose,testVerbose,def{566},use{567},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virTestGetVerbose,,def{564},use{567},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestDifference,actualEnd,def{362},use{376,378,379,391,392},dvars{},pointers{actual},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestDifference,actualStart,def{361},use{369,370,371,376,391,392},dvars{},pointers{actual},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestDifference,expect,def{356},use{359,360,385},dvars{},pointers{formatted,escaped,unescaped,gotxmcfgData,datastoreName,directoryName,gotxml,addrstr,directoryAndFileName,actualargv,value,actualCmdline,result,errbuf,sysfsExpectData,actualxml,outactual,actual,actualData,diskName,jointactual,gotsexpr,actuallog,buf,erractual,outbuf},cfuncs{(int) {3},strlen{1}}
libvirt-1.1.0/tests/testutils.c,virtTestDifference,expectEnd,def{360},use{377,378,380,386,387},dvars{},pointers{expect},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestDifference,expectStart,def{359},use{369,370,372,377,385,386,387},dvars{},pointers{expect},cfuncs{(int) {3}}
libvirt-1.1.0/tests/testutils.c,virtTestDifference,actual,def{357},use{361,362},dvars{},pointers{},cfuncs{strlen{1}}
libvirt-1.1.0/tests/testutils.c,virtTestDifference,stream,def{355},use{135,137,138,139,385,387,389,390,392,394,397},dvars{retval},pointers{},cfuncs{va_end {1},vfprintf {3},va_start {1},fprintf{1}}
libvirt-1.1.0/tests/testutils.c,virtTestDifferenceBin,end,def{415,433,442},use{134,138,141,440,441,445,446,452,453},dvars{},pointers{},cfuncs{fprintf{4}}
libvirt-1.1.0/tests/testutils.c,virtTestDifferenceBin,i,def{416},use{423,425,431,433,446,447,453,454},dvars{end,start},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestDifferenceBin,actual,def{412},use{132,424,432,456},dvars{},pointers{msg},cfuncs{fprintf{3}}
libvirt-1.1.0/tests/testutils.c,virtTestDifferenceBin,start,def{415,425},use{132,439,445,452},dvars{},pointers{},cfuncs{fprintf{3}}
libvirt-1.1.0/tests/testutils.c,virtTestDifferenceBin,length,def{413},use{415,423,441,442},dvars{end},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestDifferenceBin,expect,def{411},use{132,424,432,449},dvars{},pointers{},cfuncs{fprintf{3}}
libvirt-1.1.0/tests/testutils.c,virtTestDifferenceBin,stream,def{410},use{135,137,138,139,445,448,449,451,452,455,456,458,461},dvars{retval},pointers{},cfuncs{va_end {1},vfprintf {3},va_start {1},fprintf{1}}
libvirt-1.1.0/tests/testutils.c,virtTestErrorFuncQuiet,ATTRIBUTE_UNUSED,def{468,469},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramOutput,pid,def{314},use{315,330},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramOutput,len,def{309,328},use{333},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramOutput,maxlen,def{306},use{328,922,926,933,1125,1132,1134,1135,1144,1145,1146,1147,1154,1167,1172,1176,1179},dvars{length,requested,nreadbuf,count,alloc,len},pointers{},cfuncs{saferead{2},read{2},MIN{2},MIN{1},saferead_lim{2},virFileReadLimFD{2}}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramOutput,buf,def{306},use{328,1167,1186},dvars{len},pointers{},cfuncs{virFileReadLimFD{3}}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramOutput,pipefd,def{308},use{267,285,293,295,311,317,318,320,327,328,329,1170,1176,1177,1180,1186},dvars{buf,len},pointers{},cfuncs{virFileReadLimFD{1},VIR_FREE{1},virtTestCaptureProgramExecChild{2},VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramOutput,ATTRIBUTE_UNUSED,def{338,339,340},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramOutput,argv[],def{306},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestLogOutput,log,def{492},use{292,293,294,295,494},dvars{},pointers{data},cfuncs{va_end{1},virBufferVasprintf{3},va_start{1},virBufferAsprintf{1}}
libvirt-1.1.0/tests/testutils.c,virtTestLogOutput,str,def{489},use{494},dvars{},pointers{},cfuncs{virBufferAsprintf{4}}
libvirt-1.1.0/tests/testutils.c,virtTestLogOutput,data,def{490},use{492},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestLogOutput,flags,def{487},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestLogOutput,timestamp,def{485},use{290,494},dvars{},pointers{},cfuncs{virBufferAsprintf{3}}
libvirt-1.1.0/tests/testutils.c,virtTestLogOutput,ATTRIBUTE_UNUSED,def{480,481,482,483,484,486,488},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramExecChild,env,def{271},use{299},dvars{},pointers{},cfuncs{execve{3}}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramExecChild,stdinfd,def{270},use{284,291,302},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramExecChild,i,def{268},use{283,284,285,286},dvars{tmpfd},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramExecChild,open_max,def{269,282},use{283},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramExecChild,pipefd,def{267},use{285,293,295},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramExecChild,tmpfd,def{286},use{287},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramExecChild,bufstdinfd,def{279},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCaptureProgramExecChild,argv[],def{266},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestLoadFile,buflen,def{213},use{134,138,141,226,228,229},dvars{tmplen},pointers{},cfuncs{fprintf{4}}
libvirt-1.1.0/tests/testutils.c,virtTestLoadFile,len,def{213,239},use{241,244,245,249,250},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestLoadFile,tmp,def{212,234,246},use{238,239,244,246,249},dvars{len},pointers{cmdline},cfuncs{strlen{1}}
libvirt-1.1.0/tests/testutils.c,virtTestLoadFile,st,def{211},use{220,226,236},dvars{tmplen},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestLoadFile,fp,def{210},use{215,220,222,230,238,252,254,260},dvars{},pointers{},cfuncs{VIR_FORCE_FCLOSE{1}}
libvirt-1.1.0/tests/testutils.c,virtTestLoadFile,tmplen,def{213,226},use{238,250},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestLoadFile,buf,def{208,235},use{228,234,235,255,261},dvars{tmp},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/testutils.c,virtTestLoadFile,file,def{208},use{132,210,216,221,229,253,379,383,391,399,408},dvars{},pointers{},cfuncs{fprintf{3},fopen{1}}
libvirt-1.1.0/tests/testutils.c,virtTestCountAverage,i,def{80},use{82},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCountAverage,sum,def{79},use{83,85},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCountAverage,nitems,def{77},use{82,85},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestCountAverage,items,def{77},use{83},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virTestGetDebug,testDebug,def{559},use{560},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virTestGetDebug,,def{557},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestRun,err,def{159},use{160},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestRun,ts,def{136,171},use{148,154,169,176,178,200},dvars{},pointers{before,after},cfuncs{VIR_FREE{1},virtTestCountAverage{3}}
libvirt-1.1.0/tests/testutils.c,virtTestRun,ret,def{135,158},use{165,176,179,181,191,193,201},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestRun,i,def{135},use{151},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestRun,after,def{152},use{170,171},dvars{},pointers{},cfuncs{DIFF_MSEC{1},GETTIMEOFDAY{1}}
libvirt-1.1.0/tests/testutils.c,virtTestRun,before,def{152},use{155,171},dvars{},pointers{},cfuncs{DIFF_MSEC{2},GETTIMEOFDAY{1}}
libvirt-1.1.0/tests/testutils.c,virtTestRun,bodydata,def{133},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestRun,,def{133},use{148},dvars{},pointers{},cfuncs{VIR_ALLOC_N{2},VIR_ALLOC_N{1}}
libvirt-1.1.0/tests/testutils.c,virtTestRun,data,def{133},use{158},dvars{ret},pointers{},cfuncs{body{1}}
libvirt-1.1.0/tests/testutils.c,virtTestRun,nloops,def{133},use{148,151,178},dvars{},pointers{},cfuncs{virtTestCountAverage{4}}
libvirt-1.1.0/tests/testutils.c,virtTestRun,title,def{133},use{134,138,141,145},dvars{},pointers{},cfuncs{fprintf{4}}
libvirt-1.1.0/tests/testutils.c,virtTestResult,str,def{105},use{106,107,108,132},dvars{},pointers{name},cfuncs{VIR_FREE{1},fprintf{3}}
libvirt-1.1.0/tests/testutils.c,virtTestResult,ret,def{89},use{100,118},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/testutils.c,virtTestResult,vargs,def{91},use{92,106,124},dvars{},pointers{},cfuncs{va_end{1},va_start{1}}
libvirt-1.1.0/tests/testutils.c,virtTestResult,msg,def{89},use{92,104,106},dvars{},pointers{},cfuncs{va_start{2}}
libvirt-1.1.0/tests/testutils.c,virtTestResult,,def{89},use{106,330,334,335},dvars{ret},pointers{},cfuncs{virVasprintf{3},virVasprintf{2},virVasprintf{1}}
libvirt-1.1.0/tests/testutils.c,virtTestResult,name,def{89},use{99,134,138,141},dvars{},pointers{handle,timer,i},cfuncs{fprintf{4}}
libvirt-1.1.0/tests/testutils.c,GLOBAL,,def{60,61},use{},dvars{},pointers{},cfuncs{}
