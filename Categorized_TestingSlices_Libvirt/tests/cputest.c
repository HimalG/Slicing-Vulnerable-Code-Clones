libvirt-1.1.0/tests/cputest.c,mymain,abs_top_srcdir,def{504,506},use{505,506,508},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,mymain,ret,def{501},use{630},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,mymain,map,def{502},use{508,509,510,629},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/cputest.c,mymain,,def{499},use{149,153,330,334,346,348,351,352,353,508,509,630},dvars{ret},pointers{},cfuncs{va_end{1},virVasprintf{3},va_start{1},cpuMapOverride{1},virAsprintf{3},virAsprintf{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestRun,tmp,def{468,473},use{474},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestRun,log,def{478,479},use{132,481,482},dvars{},pointers{},cfuncs{VIR_FREE{1},fprintf{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestRun,label,def{467},use{470,476,485,489},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestRun,data,def{465},use{470,476},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestRun,name,def{465},use{470},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,nodes,def{114},use{125,130,131,140,211,218,219,451,469,470,476,480,483,578,607,608,609,611,614,618},dvars{err,val,ctxt,ret,n},pointers{},cfuncs{memcpy{3},virStrToLong_ui{1},VIR_FREE{1},strtoul{1},virCPUDefParseXML{1},virXPathNodeSet{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,ctxt,def{113,130},use{122,125,131,141,187,211,212,255,273,288,298,299,307,322,327,334,339,348,351,357,372,435,437,573,580,589,591},dvars{deffallback,def,n,defmodel,relnode,ret,doc},pointers{},cfuncs{virXPathString{2},xmlXPathFreeContext{1},virCPUDefParseXML{2},virXPathULong{2},virXPathNodeSet{2}}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,count,def{109,136},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,doc,def{112,122},use{142},dvars{},pointers{},cfuncs{xmlFreeDoc{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,i,def{117},use{129,146},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,xml,def{111},use{119,122,139},dvars{doc},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,n,def{116,125},use{126,129,136,146},dvars{count},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,name,def{108},use{119},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,cpus,def{115,131},use{107,109,110,111,112,114,116,118,121,126,132,143,147,148},dvars{},pointers{ctxt,nodes},cfuncs{VIR_FREE{1},VIR_STRDUP{1},virCPUDefFree{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadMultiXML,arch,def{107},use{119},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestCompResStr,result,def{192},use{194},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestHasFeature,,def{455},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestHasFeature,rethost,def{423},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestHasFeature,result,def{421,430},use{431,434,437,438},dvars{},pointers{},cfuncs{cpuTestBoolWithErrorStr{2},cpuTestBoolWithErrorStr{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestHasFeature,hostData,def{420},use{207,212,217,223,425,426,430,431,443,449},dvars{result},pointers{},cfuncs{VIR_DEBUG{2},cpuDataFree{2},virArchToString{2},cpuHasFeature{2}}
libvirt-1.1.0/tests/cputest.c,cpuTestHasFeature,host,def{419},use{107,109,110,111,112,114,116,118,121,208,212,214,227,423,426,430,448,449,450},dvars{result,rethost},pointers{},cfuncs{free){1},VIR_DEBUG{2},VIR_STRDUP{1},virCPUDefFree{1},cpuDataFree{1},cpuHasFeature{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestHasFeature,arg,def{415},use{417,423,430},dvars{result,rethost},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestHasFeature,ret,def{418,445},use{445,451},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestHasFeature,data,def{417},use{423,426,430,431,434,437,443},dvars{result,rethost},pointers{arg},cfuncs{VIR_DEBUG{3},cpuTestBoolWithErrorStr{3},cpuHasFeature{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestCompare,result,def{226,232},use{233,236,239,240},dvars{},pointers{},cfuncs{cpuTestCompResStr{2},cpuTestCompResStr{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestCompare,cpu,def{225},use{107,109,110,111,112,114,115,116,117,118,121,123,127,229,232,251},dvars{result,host},pointers{},cfuncs{virArchToString{2},VIR_STRDUP{1},virCPUDefFree{1},VIR_DEBUG{2},cpuCompare{2}}
libvirt-1.1.0/tests/cputest.c,cpuTestCompare,host,def{224,228},use{107,109,110,111,112,114,116,118,121,232,250},dvars{result},pointers{},cfuncs{VIR_STRDUP{1},virCPUDefFree{1},cpuCompare{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestCompare,arg,def{220},use{222,228,229},dvars{host},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestCompare,ret,def{223,247},use{247,252},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestCompare,data,def{222},use{228,229,233,236,239},dvars{host},pointers{arg},cfuncs{cpuTestCompResStr{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestCompareXML,expected,def{160},use{168,174,177,185},dvars{},pointers{data},cfuncs{VIR_FREE{1},virtTestDifference{2}}
libvirt-1.1.0/tests/cputest.c,cpuTestCompareXML,flags,def{157},use{171},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestCompareXML,actual,def{161,171},use{174,177,186,356,359,360,385},dvars{},pointers{flags,cpu},cfuncs{VIR_FREE{1},(int) {3},strlen{1},virtTestDifference{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestCompareXML,xml,def{159},use{164,168,184},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestCompareXML,name,def{156},use{134,138,141,165,176},dvars{},pointers{},cfuncs{fprintf{4}}
libvirt-1.1.0/tests/cputest.c,cpuTestCompareXML,cpu,def{155},use{171},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestCompareXML,ret,def{162,181},use{181,187},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestCompareXML,arch,def{154},use{132,165,176},dvars{},pointers{result},cfuncs{fprintf{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,rethost,def{269},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,buf,def{266},use{243,245,292,293,294,295,296,298,299,301,302,305,307},dvars{ret},pointers{},cfuncs{va_end{1},virBufferVasprintf{3},va_start{1},virBufferAddLit{1},VIR_FREE{1},virBufferContentAndReset{1},virBufferFreeAndReset{1},virBufferAsprintf{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,guestData,def{264},use{207,212,217,223,254,260,272,273,285,312},dvars{cmpResult},pointers{},cfuncs{VIR_DEBUG{3},virArchToString{2},cpuDataFree{2},cpuGuestData{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,result,def{267,305},use{132,154,165,176,287,307,310},dvars{ret},pointers{buf},cfuncs{fprintf{3},VIR_FREE{1},cpuTestCompareXML{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,guest,def{263,281,282,283,284},use{107,109,110,111,112,114,116,118,121,155,171,278,285,307,315},dvars{ret},pointers{},cfuncs{VIR_STRDUP{1},virCPUDefFree{1},cpuTestCompareXML{2}}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,cpu,def{262},use{107,109,110,111,112,114,116,118,121,253,260,262,268,270,272,273,284,314},dvars{guest,cmpResult,rethost},pointers{},cfuncs{virArchToString{2},VIR_DEBUG{2},VIR_STRDUP{1},virCPUDefFree{1},cpuGuestData{2}}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,host,def{261},use{107,109,110,111,112,114,116,118,121,208,212,214,227,269,273,281,294,311,312,313},dvars{guest,cmpResult,rethost},pointers{},cfuncs{free){1},VIR_DEBUG{2},VIR_STRDUP{1},virBufferAsprintf{3},virCPUDefFree{1},cpuDataFree{1},cpuGuestData{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,arg,def{257},use{259,269,270,307},dvars{ret,rethost},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,ret,def{260,289,307},use{289,316},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,cmpResult,def{265,273},use{274,275},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestGuestData,data,def{259},use{160,168,174,177,185,269,270,285,286,287,290,294,295,296,297,298,307},dvars{ret,rethost},pointers{arg},cfuncs{virtTestDifference{2},VIR_FREE{1},cpuTestCompareXML{1},virBufferAsprintf{4},virBufferAsprintf{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestBoolWithErrorStr,result,def{207},use{209},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestUpdate,rethost,def{393},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestUpdate,result,def{391},use{132,154,165,176,400,403,409},dvars{ret},pointers{},cfuncs{fprintf{3},VIR_FREE{1},cpuTestCompareXML{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestUpdate,cpu,def{390},use{107,109,110,111,112,114,116,118,121,155,171,394,397,403,408},dvars{ret,rethost},pointers{},cfuncs{VIR_STRDUP{1},virCPUDefFree{1},cpuTestCompareXML{2}}
libvirt-1.1.0/tests/cputest.c,cpuTestUpdate,host,def{389},use{107,109,110,111,112,114,116,118,121,393,397,400,407},dvars{rethost},pointers{},cfuncs{VIR_STRDUP{1},virCPUDefFree{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestUpdate,arg,def{385},use{387,393,394,403},dvars{ret,rethost},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestUpdate,ret,def{388,403},use{410},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestUpdate,data,def{387},use{160,168,174,177,185,393,394,400,403},dvars{ret,rethost},pointers{arg},cfuncs{virtTestDifference{2},VIR_FREE{1},cpuTestCompareXML{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,cmp,def{355,357},use{358,359},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,retcpus,def{331},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,i,def{329},use{132,354,362,374},dvars{},pointers{},cfuncs{fprintf{3}}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,result,def{328},use{335,348,351,379},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,baseline,def{326,334},use{107,109,110,111,112,114,115,116,117,118,121,123,127,337,345,351,357,378},dvars{cmp},pointers{},cfuncs{virArchToString{2},VIR_STRDUP{1},virCPUDefFree{1},VIR_DEBUG{2},cpuCompare{2}}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,arg,def{321},use{323,331},dvars{retcpus},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,cpus,def{325},use{107,109,110,111,112,114,116,118,121,334,357,373,375,376},dvars{cmp,baseline},pointers{},cfuncs{VIR_STRDUP{1},virCPUDefFree{1},VIR_FREE{1},cpuCompare{1},cpuBaseline{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,ret,def{324,338,365,370},use{338,365,370,380},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,ncpus,def{327},use{331,334,354,359,363,364,367,368,374},dvars{baseline,retcpus},pointers{},cfuncs{VIR_DEBUG{2},cpuBaseline{2}}
libvirt-1.1.0/tests/cputest.c,cpuTestBaseline,data,def{323},use{331,335,348,351},dvars{retcpus},pointers{arg},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadXML,doc,def{86,93},use{100},dvars{},pointers{},cfuncs{xmlFreeDoc{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadXML,ctxt,def{87},use{93,96,99,187,211,212,218,219,255,273,288,298,299,307,322,327,334,339,348,351,357,372,435,437,451,469,470,476,480,483,573,580,589,591},dvars{val,deffallback,err,def,ret,cpu,n,defmodel,relnode,doc},pointers{},cfuncs{strtoul{1},VIR_FREE{1},virStrToLong_ui{1},virXPathULong{2},virXPathNodeSet{2},virXPathString{2},xmlXPathFreeContext{1},virCPUDefParseXML{2},virCPUDefParseXML{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadXML,xml,def{85},use{90,93,101},dvars{doc},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadXML,cpu,def{88,96},use{102},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadXML,name,def{83},use{90},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/cputest.c,cpuTestLoadXML,arch,def{83},use{90},dvars{},pointers{},cfuncs{}
