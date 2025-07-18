libvirt-1.1.0/tests/fdstreamtest.c,mymain,ret,def{321,332,334,336,338},use{332,334,336,338,343},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,mymain,iohelper,def{322},use{324},dvars{},pointers{},cfuncs{virFDStreamSetIOHelper{1}}
libvirt-1.1.0/tests/fdstreamtest.c,mymain,scratchdir,def{320},use{326,331,333,335,337,341,841,856,865,866,874,877,878,883,884},dvars{},pointers{},cfuncs{virReportSystemError{1},virFileDeleteTree{1}}
libvirt-1.1.0/tests/fdstreamtest.c,mymain,,def{318},use{33,35,38,326,331,333,335,337,343},dvars{},pointers{},cfuncs{virtTestRun{4},virtTestRun{3},mkdtemp{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteNonblock,data,def{310},use{312},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteBlock,data,def{306},use{308},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadNonblock,data,def{167},use{169},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadBlock,data,def{163},use{165},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,got,def{221,223},use{224,225,236,237},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,want,def{214,216,218,251,253,255},use{220,223,230,237,257},dvars{got},pointers{},cfuncs{streamSend{3}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,offset,def{213},use{223,236},dvars{got},pointers{},cfuncs{streamSend{2}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,st,def{180,201},use{207,223,241,254,256,258,259,260,262,263,266,271,272,273,274,292,293,338,343,17338,17340,17344,17352},dvars{is_zero,klass,got},pointers{},cfuncs{memset{3},memset{1},VIR_DEBUG{2},virObjectUnref{1},VIR_FREE{1},virStreamFree{1},PROBE{3},dispose{1},virAtomicIntDecAndTest{1},streamSend{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,flags,def{183},use{186,201},dvars{st},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,conn,def{182,188},use{201,297,298},dvars{st},pointers{},cfuncs{virConnectClose{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,buf,def{179},use{192,257,265,270,275,280,301},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,pattern,def{178,196},use{191,223,270,275,280,300},dvars{got},pointers{i},cfuncs{VIR_FREE{1},streamSend{2}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,fd,def{175,247},use{257,287,294},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,ret,def{177,290},use{290,302},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,i,def{181},use{195,196,212,215,223,229,250,252,262,266,271,274,276,281},dvars{got},pointers{},cfuncs{virFilePrintf{3}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,blocking,def{173},use{185,225},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,j,def{263},use{264},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,file,def{176},use{198,207,247,295,296,299},dvars{fd},pointers{},cfuncs{VIR_FREE{1},unlink{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamWriteCommon,scratchdir,def{173},use{198},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,got,def{100,102},use{103,104,112,120,121},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,want,def{93,95,97},use{99,102,114,117,121,191,330,334,335,2331,2339,2342},dvars{ret,got},pointers{},cfuncs{fwrite{4},fwrite{3},fwrite{1},virVasprintf{3},virVasprintf{2},virVasprintf{1},virFilePrintf{4},streamRecv{3}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,offset,def{92},use{102,120},dvars{got},pointers{},cfuncs{streamRecv{2}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,st,def{48,80},use{86,102,141,149,150,254,256,258,259,260,262,263,266,271,272,273,274,338,343,17338,17340,17344,17352},dvars{is_zero,klass,got},pointers{},cfuncs{memset{3},memset{1},dispose{1},virAtomicIntDecAndTest{1},PROBE{3},streamRecv{1},VIR_DEBUG{2},virObjectUnref{1},VIR_FREE{1},virStreamFree{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,flags,def{51},use{54,80},dvars{st},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,conn,def{50,56},use{80,154,155},dvars{st},pointers{},cfuncs{virConnectClose{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,buf,def{47},use{60,102,124,129,134,158},dvars{got},pointers{},cfuncs{VIR_FREE{1},streamRecv{2}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,pattern,def{46,64},use{59,73,124,129,134,157},dvars{},pointers{i},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,fd,def{43,69},use{73,77,151},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,ret,def{45,147},use{147,159},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,i,def{49},use{63,64,72,91,94,114,117,123,125,128,130,135},dvars{},pointers{},cfuncs{virFilePrintf{3}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,blocking,def{41},use{53,104},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,file,def{44},use{66,69,86,152,153,156},dvars{fd},pointers{},cfuncs{VIR_FREE{1},unlink{1}}
libvirt-1.1.0/tests/fdstreamtest.c,testFDStreamReadCommon,scratchdir,def{41},use{66},dvars{},pointers{},cfuncs{}
