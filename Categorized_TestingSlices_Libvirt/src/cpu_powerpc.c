libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,cpu,def{393,457,458,469},use{107,109,110,111,112,114,116,118,121,450,451,454,463,468},dvars{},pointers{},cfuncs{VIR_STRDUP{1},virCPUDefFree{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,vnd,def{413,424},use{431,436,440,446},dvars{},pointers{vendor,cpus,map},cfuncs{virReportError{4}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,model,def{391,399},use{401,405,408,415,430,431,435,451},dvars{},pointers{cpus,map},cfuncs{virReportError{3},virReportError{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,NULLdatamap,def{396},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,vendor,def{392,446},use{421,424,426,430,431,435,439,440,446,454},dvars{vendor},pointers{vnd},cfuncs{virReportError{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,nmodels,def{388},use{405},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,ncpus,def{386},use{412},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,models,def{387},use{405},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,i,def{394},use{412},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,map,def{390},use{120,122,125,126,269,270,271,399,424,461},dvars{},pointers{},cfuncs{ppcVendorFree{1},VIR_FREE{1},ppcMapFree{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcBaseline,cpus,def{385},use{399,401,415,421,424,426},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcUpdate,ATTRIBUTE_UNUSED,def{378,379},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDataFree,data,def{351},use{353,356},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDecode,model,def{317,322},use{329,332,336,337},dvars{},pointers{data,map},cfuncs{virReportError{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDecode,map,def{316},use{120,122,125,126,269,270,271,322,344},dvars{},pointers{},cfuncs{ppcVendorFree{1},VIR_FREE{1},ppcMapFree{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDecode,ret,def{315,341},use{341,346},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDecode,ATTRIBUTE_UNUSED,def{313},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDecode,VIR_CPU_COMPARE_IDENTICALVIR_CPU_COMPARE_INCOMPATIBLEdataNULLmap,def{319},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDecode,models,def{311},use{329},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDecode,data,def{310},use{322,325},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDecode,nmodels,def{312},use{329},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcDecode,cpu,def{309},use{336,337},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcCompare,cpu,def{299},use{301,302},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcCompare,host,def{298},use{301,302},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcLoadMap,map,def{280},use{120,122,125,126,269,270,271,282,287,290,293},dvars{},pointers{},cfuncs{ppcVendorFree{1},VIR_FREE{1},ppcMapFree{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcLoadMap,,def{278},use{79,87,101,104,126,282,287},dvars{xml},pointers{},cfuncs{cpuMapLoad{3},cpuMapLoad{2},virReportError{2},VIR_ALLOC{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcMapFree,vendor,def{269},use{120,122,125,126,270,271},dvars{},pointers{vendor,map},cfuncs{VIR_FREE{1},ppcVendorFree{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcMapFree,model,def{263},use{59,61,64,65,264,265},dvars{},pointers{map},cfuncs{VIR_FREE{1},ppcModelFree{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcMapFree,map,def{257,264,270},use{259,262,263,264,268,269,270,274},dvars{map},pointers{vendor,model},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelLoad,modelvendor,def{203},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelLoad,vendor,def{173,195},use{196,203,206,228},dvars{modelvendor},pointers{ctxt},cfuncs{VIR_FREE{1},virReportError{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelLoad,pvr,def{174},use{212,218,221},dvars{map},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelLoad,ctxt,def{169},use{181,194,195,203,211,212},dvars{modelvendor},pointers{},cfuncs{virXPathString{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelLoad,model,def{172,181,218,223},use{59,61,64,65,176,182,188,190,199,206,215,221,223,224,232},dvars{model},pointers{pvr,map,ctxt},cfuncs{VIR_FREE{1},ppcModelFree{1},virReportError{3},virReportError{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelLoad,map,def{170,221,224},use{188,203,220,223,224},dvars{map,modelvendor},pointers{model},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcMapLoadCallback,data,def{239},use{241},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcMapLoadCallback,map,def{241},use{245,247},dvars{},pointers{data},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcMapLoadCallback,ctxt,def{238},use{245,247},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcMapLoadCallback,element,def{237},use{243},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFind,modelmodel,def{79},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFind,model,def{72,74},use{75,76,77,79},dvars{modelmodel},pointers{map},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFind,name,def{70},use{76},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFind,map,def{69},use{74,79},dvars{modelmodel},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcVendorLoad,vendor,def{133,140,156},use{120,122,125,126,135,141,147,149,154,156,157,164},dvars{vendor},pointers{map,ctxt},cfuncs{VIR_FREE{1},ppcVendorFree{1},virReportError{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcVendorLoad,map,def{131,154,157},use{147,153,156,157},dvars{map},pointers{vendor},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcVendorLoad,ctxt,def{130},use{140,154},dvars{map},pointers{},cfuncs{virXPathString{2}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcNodeData,data,def{363},use{365,373},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcNodeData,,def{361},use{365},dvars{},pointers{},cfuncs{VIR_ALLOC{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcVendorFind,vendorvendor,def{113},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcVendorFind,NULLvendor,def{108},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcVendorFind,vendor,def{106},use{109,110,111,113},dvars{vendorvendor},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcVendorFind,name,def{104},use{110},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcVendorFind,map,def{103},use{108},dvars{NULLvendor},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFree,model,def{59},use{61,64,65},dvars{},pointers{model},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcVendorFree,vendor,def{120},use{122,125,126},dvars{},pointers{vendor},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFindPVR,modelmodel,def{96},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFindPVR,NULLmodel,def{91},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFindPVR,model,def{89},use{92,93,94,96},dvars{modelmodel},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFindPVR,pvr,def{87},use{93},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/cpu/cpu_powerpc.c,ppcModelFindPVR,map,def{86},use{91},dvars{NULLmodel},pointers{},cfuncs{}
