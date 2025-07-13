libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetMaxMemory,def,def{2906},use{902,908,910,912,922,982,988,990,992,1002,1444,1446,1447,1448,1450,1452,1453,1455,1457,1458,1459,1460,1461,1463,1465,1466,1467,1468,1469,2912},dvars{ret,hc,jret},pointers{},cfuncs{xenHypervisorDoV2Dom{2},xenHypervisorDoV1Op{2},memset{4},memset{1},xenHypervisorDoV0Op{2},virXen_setmaxmem{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetMaxMemory,jret,def{2912},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetMaxMemory,priv,def{2910},use{75,77,78,79,863,876,902,915,982,995,1439,1453,1461,1469,2912},dvars{ret,jret},pointers{},cfuncs{va_end {1},va_arg {1},xenHypervisorDoV1Op{1},xenHypervisorDoV2Dom{1},va_start {1},ioctl{1},xenHypervisorDoV0Op{1},virXen_setmaxmem{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetMaxMemory,ret,def{2909},use{2913},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetMaxMemory,memory,def{2907},use{1439,1450,1452,1460,1468,2912},dvars{op,jret},pointers{},cfuncs{virXen_setmaxmem{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetMaxMemory,conn,def{2905},use{2910},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorNodeGetCellsFreeMemory,i,def{2849},use{2877,2879,2881},dvars{op_sys},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorNodeGetCellsFreeMemory,ret,def{2849,2882},use{2883},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorNodeGetCellsFreeMemory,op_sys,def{2848,2874,2879,2881},use{942,948,950,952,962,2873,2882,2887,2889},dvars{hc,ret},pointers{},cfuncs{xenHypervisorDoV2Sys{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorNodeGetCellsFreeMemory,priv,def{2850},use{75,77,78,79,942,955,2852,2858,2877,2882},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},va_start {1},ioctl{1},xenHypervisorDoV2Sys{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorNodeGetCellsFreeMemory,freeMems,def{2844,2887,2889},use{},dvars{},pointers{op_sys},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorNodeGetCellsFreeMemory,maxCells,def{2846},use{2858,2877},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorNodeGetCellsFreeMemory,startCell,def{2845},use{2858},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorNodeGetCellsFreeMemory,j,def{2849},use{2877,2891},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorNodeGetCellsFreeMemory,conn,def{2843},use{2850},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,kb_per_pages,def{2722,2724},use{2723,2724,2772,2775},dvars{info},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,domain_shutdown_cause,def{2719,2744},use{2745},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,domain_state,def{2719,2737},use{2738},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,domain_flags,def{2719,2735},use{2736,2737,2744},dvars{domain_shutdown_cause,domain_state},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,ret,def{2718,2730},use{2732},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,conn,def{2714},use{2716},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,dominfo,def{2717},use{1092,1097,1099,2728,2730,2732,2735,2771,2772,2773,2776},dvars{dominfos,info,domain_flags,ret},pointers{},cfuncs{XEN_GETDOMAININFO_MAX_PAGES{1},XEN_GETDOMAININFO_CPUCOUNT{1},XEN_GETDOMAININFO_CLEAR{1},XEN_GETDOMAININFO_TOT_PAGES{1},XEN_GETDOMAININFO_CPUTIME{1},virXen_getdomaininfo{3},XEN_GETDOMAININFO_FLAGS{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,priv,def{2716},use{1092,1102,2730},dvars{ret},pointers{},cfuncs{virXen_getdomaininfo{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,info,def{2714,2740,2747,2750,2754,2757,2760,2763,2771,2772,2773,2776},use{2727,2774,2775},dvars{},pointers{},cfuncs{memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomInfo,id,def{2714},use{1092,1102,2730,2732},dvars{ret},pointers{},cfuncs{virXen_getdomaininfo{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetMaxMemory,conn,def{2679},use{2682},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetMaxMemory,dominfo,def{2683},use{1092,1097,1099,2692,2694,2696,2699},dvars{dominfos,ret},pointers{},cfuncs{virXen_getdomaininfo{3},XEN_GETDOMAININFO_CLEAR{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetMaxMemory,kb_per_pages,def{2687,2689},use{2688,2689,2699},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetMaxMemory,def,def{2680},use{1092,1102,2694,2696},dvars{ret},pointers{},cfuncs{virXen_getdomaininfo{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetMaxMemory,ret,def{2684,2694},use{2696},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetMaxMemory,priv,def{2682},use{1092,1102,2694},dvars{ret},pointers{},cfuncs{virXen_getdomaininfo{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByID,conn,def{2565},use{42,44,45,47,569,576,577,578,2567,2581},dvars{priv},pointers{},cfuncs{va_end {1},va_start {1},snprintf{1},vasnprintf {4},xenStoreDomainGetName{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByID,dominfo,def{2568},use{2572,2574,2577,2587},dvars{NULLret},pointers{},cfuncs{XEN_GETDOMAININFO_UUID{2},XEN_GETDOMAININFO_CLEAR{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByID,id,def{2565},use{2051,2066,2574,2577,2581,2586,2588},dvars{NULLret},pointers{},cfuncs{memcpy{2},memcpy{1},virDomainDefNew{2},xenStoreDomainGetName{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByID,NULLret,def{2586},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByID,ret,def{2569},use{2590},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByID,name,def{2570,2581},use{2054,2056,2061,2062,2066,2067,2069,2583,2586,2589},dvars{NULLret},pointers{id,conn},cfuncs{memcpy{1},VIR_FREE{1},virDomainDefNew{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByID,priv,def{2567},use{84,85,88,90,210,224,2574,2580,2582,2911,2913,2916,2918},dvars{},pointers{},cfuncs{pthread_mutex_lock{1},virMutexLock{1},virMutexUnlock{1},pthread_mutex_unlock{1},xenUnifiedUnlock{1},xenUnifiedLock{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainGetOSType,ostype,def{2518},use{2540,2543},dvars{},pointers{dom},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainGetOSType,dominfo,def{2517},use{2526,2528,2534,2541},dvars{},pointers{},cfuncs{XEN_GETDOMAININFO_FLAGS{2},XEN_GETDOMAININFO_CLEAR{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainGetOSType,def,def{2514},use{2523,2528,2534},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainGetOSType,priv,def{2516},use{2528},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainGetOSType,conn,def{2513},use{2516,2523},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetCapabilities,capsxml,def{2503},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetCapabilities,xml,def{2501},use{2508},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetCapabilities,priv,def{2500},use{2503},dvars{capsxml},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetCapabilities,conn,def{2498},use{2500},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,hvm,def{2360},use{2391,2404},dvars{guest_archs},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,nr_guest_archsguest_archsguest_archstoken,def{2355},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,nonpae,def{2361,2370},use{2370,2412,2413},dvars{guest_archs},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,caps,def{2302,2420},use{254,256,258,259,260,262,263,266,271,272,273,274,338,343,2428,2432},dvars{klass,is_zero},pointers{},cfuncs{VIR_FREE{1},dispose{1},virAtomicIntDecAndTest{1},memset{3},memset{1},PROBE{3},virObjectUnref{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,host_pae,def{2299,2320},use{2320,2422},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,saveptr,def{2295},use{2355},dvars{nr_guest_archsguest_archsguest_archstoken},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,hvm_type,def{2298},use{2314,2317,2423},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,str,def{2293},use{2355},dvars{nr_guest_archsguest_archsguest_archstoken},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,i,def{2296},use{2389,2397,2400},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,cpuinfo,def{2290},use{2310,2311},dvars{},pointers{capabilities},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,capabilities,def{2291},use{2349},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,pae,def{2361,2368},use{2368,2410,2411},dvars{guest_archs},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,nr_guest_archs,def{2301},use{2389,2400,2401,2425},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,guest_archs,def{2300,2403,2404,2411,2413,2415},use{2304,2390,2391,2397,2424},dvars{caps},pointers{},cfuncs{memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,token,def{2293},use{2358,2360,2364,2367,2372,2375,2378,2381},dvars{},pointers{},cfuncs{STRPREFIX{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,hostarch,def{2289},use{2421},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,ia64_be,def{2361,2379},use{2379,2414,2415},dvars{guest_archs},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,subs,def{2294},use{2312,2313,2316,2358,2359,2366,2377},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,arch,def{2362,2365,2373,2376,2382},use{2390,2403},dvars{guest_archs},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,line,def{2293},use{2311,2312,2315,2319,2349},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesInternal,conn,def{2288},use{2420},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesSunOS,NULLguest_arches,def{2234},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesSunOS,hvm,def{2229},use{2231,2235,2243,2250,2252,2260,2270},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesSunOS,pae,def{2228},use{2231,2236,2237,2244,2253,2261,2270},dvars{caps,guest_arches},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesSunOS,caps,def{2227,2268},use{2274},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesSunOS,i,def{2226},use{2239,2247,2256,2264,2271},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesSunOS,guest_arches,def{2225,2235,2236,2237,2238,2242,2243,2244,2245,2246,2251,2252,2253,2254,2255,2259,2260,2261,2262,2263},use{2235,2238,2243,2244,2245,2246,2252,2254,2255,2260,2261,2262,2263,2271},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesSunOS,longmode,def{2228},use{2231,2241,2258},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilitiesSunOS,conn,def{2223},use{2231,2268},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,NULLlongmode,def{2185},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,fd,def{2182,2187},use{2197,2206,2218},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,ret,def{2181,2215},use{2215,2219},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,tmpbuf,def{2180},use{2185},dvars{NULLlongmode},pointers{},cfuncs{sysinfo{4},sysinfo{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,r_ecx,def{2177},use{2199,2208},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,r_ebx,def{2177},use{2196,2205},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,r_edx,def{2177},use{2202,2210},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,pae,def{2174,2193,2203,2211},use{2193,2203,2211},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,r_eax,def{2177},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,conn,def{2174},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,longmode,def{2174},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,get_cpu_flags,hvm,def{2174,2194,2200,2209},use{2194,2200,2209},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorClose,priv,def{2003},use{2005},dvars{ret},pointers{},cfuncs{VIR_CLOSE{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorClose,ret,def{2002,2005},use{2006},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorClose,conn,def{2000},use{2003},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorOnceInit,,def{1949},use{1730,1832,1841,1847,1857,1867,1877,1899,1904,1917,1939,1944,1950},dvars{},pointers{},cfuncs{VIR_FREE{1},xenHypervisorInit{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorPinVcpu,priv,def{2939},use{1540,1545,1546,2941},dvars{xen_cpumap,ret},pointers{},cfuncs{virReadBufInt64LE{1},memcpy{1},virXen_setvcpumap{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorPinVcpu,ret,def{2938,2941},use{2943},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorPinVcpu,conn,def{2932},use{2939},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorPinVcpu,cpumap,def{2935},use{2942},dvars{ret},pointers{cpumap},cfuncs{virXen_setvcpumap{4}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorPinVcpu,maplen,def{2936},use{2942},dvars{ret},pointers{},cfuncs{virXen_setvcpumap{5}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorPinVcpu,vcpu,def{2934},use{1490,1525,1529,1554,1563,2941},dvars{op,ret},pointers{},cfuncs{virXen_setvcpumap{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorPinVcpu,def,def{2933},use{902,908,910,912,922,982,988,990,992,1002,1500,1505,1506,1507,1525,1526,1527,1529,1530,1531,1533,1549,1551,1552,1553,1554,1555,1556,1558,1560,1561,1562,1563,1564,1565,2941},dvars{hc,ret},pointers{},cfuncs{xenHypervisorDoV0Op{2},xenHypervisorDoV2Dom{2},xenHypervisorDoV1Op{2},memset{4},memset{1},virXen_setvcpumap{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,hv_versions,def{1765,1772,1790,1806,1808,1817,1830,1837,1840,1846,1853,1856,1863,1866,1873,1876,1884,1886,1896,1898,1903,1914,1916,1923,1924,1933},use{1772,1808,1817,1830,1837,1840,1846,1853,1856,1863,1866,1873,1876,1884,1886,1896,1898,1903,1914,1916,1923,1924,1933},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,ipt,def{1730},use{1832,1841,1847,1857,1867,1877,1899,1904,1917,1939,1944},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,info,def{1729},use{1838,1854,1864,1874,1885,1897,1915,1925},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,v0_hc,def{1728,1799,1800,1801},use{72,82,84,1801,1803},dvars{ret},pointers{},cfuncs{primary_ioctl {3},primary_ioctl {2},primary_ioctl {1},execute_all_ioctl_hooks {4},execute_all_ioctl_hooks {3},execute_all_ioctl_hooks {2},execute_all_ioctl_hooks {1},ioctl{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,hc,def{1727,1781,1782,1783},use{72,82,84,1783,1786},dvars{ret},pointers{},cfuncs{primary_ioctl {3},primary_ioctl {2},primary_ioctl {1},execute_all_ioctl_hooks {4},execute_all_ioctl_hooks {3},execute_all_ioctl_hooks {2},execute_all_ioctl_hooks {1},ioctl{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,xen_ioctl_hypercall_cmd,def{1791,1807},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,fd,def{1726,1775},use{75,77,78,79,1786,1803,1821,1838,1841,1847,1854,1857,1864,1867,1874,1877,1885,1897,1899,1904,1915,1917,1925,1938,1943},dvars{ret},pointers{},cfuncs{va_arg {1},va_end {1},VIR_FORCE_CLOSE{1},va_start {1},ioctl{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,ret,def{1726,1770,1786,1803},use{1771,1775,1788,1789,1790,1804,1805,1806},dvars{hv_versions,fd},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,errcode,def{1726,1744,1753},use{544,569,571,1737,1739,1745,1747,1754,1756},dvars{},pointers{},cfuncs{memcpy {1},regerror{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,error,def{1738,1746,1755},use{543,550,551,565,568,571,1739,1741,1747,1750,1756,1760},dvars{},pointers{},cfuncs{memcpy {3},virReportError{3},regerror{5},regerror{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,cmd,def{1726,1785,1802},use{72,77,82,84,1786,1791,1803,1807},dvars{xen_ioctl_hypercall_cmd,ret},pointers{},cfuncs{va_start {2},ioctl{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,reterrcode,def{1736},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorInit,override_versions,def{1724},use{1764,1765},dvars{hv_versions},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,mapl,def{1654,1658},use{1679,1703},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,op,def{1595,1598,1599,1601,1603,1638,1639,1641,1642,1643,1645,1646,1647,1661,1664,1665,1666,1685,1688,1689,1690},use{902,908,910,912,922,982,988,990,992,1002,1597,1604,1610,1611,1613,1618,1619,1621,1622,1624,1629,1630,1637,1649,1663,1667,1671,1672,1673,1676,1677,1680,1687,1691,1695,1696,1697,1700,1701,1704},dvars{hc,ipt,ret},pointers{},cfuncs{xenHypervisorDoV0Op{2},xenHypervisorDoV2Dom{2},xenHypervisorDoV1Op{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,ret,def{1592,1604,1649,1651,1667,1691},use{1606,1651,1668,1692,1710},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,handle,def{1585},use{75,77,78,79,863,876,902,915,982,995,1604,1649,1667,1691},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},xenHypervisorDoV0Op{1},xenHypervisorDoV2Dom{1},xenHypervisorDoV1Op{1},va_start {1},ioctl{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,cpumap,def{1589},use{1632,1633,1636,1642,1646,1650,1678,1680,1681,1702,1704,1705},dvars{op},pointers{},cfuncs{VIR_USE_CPU{1},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,maplen,def{1590},use{1632,1633,1636,1643,1647,1650,1654,1657,1678,1702},dvars{mapl,op},pointers{},cfuncs{memset{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,vcpu,def{1587},use{1601,1603,1608,1641,1645,1666,1670,1690,1694},dvars{ipt,op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,cpu,def{1655},use{1677,1679,1680,1681,1701,1703,1704,1705},dvars{},pointers{},cfuncs{VIR_USE_CPU{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,ipt,def{1588,1608,1612,1614,1616,1618,1619,1623,1625,1627,1629,1630,1670,1672,1673,1675,1676,1677,1694,1696,1697,1699,1700,1701},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getvcpusinfo,id,def{1586},use{1599,1639,1665,1689},dvars{op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetMaxVcpus,ATTRIBUTE_UNUSED,def{2663,2664},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,NULLid,def{2632},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,id,def{2635},use{2052,2067,2641,2645,2650,2652},dvars{def,ret,NULLret},pointers{},cfuncs{virDomainDefNew{3},xenStoreDomainGetName{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,maxids,def{2601},use{1025,1031,1042,1044,1047,1049,1065,1067,1077,1079,1085,2604,2609,2611,2623,2625,2626},dvars{op,nids},pointers{},cfuncs{virXen_getdomaininfolist{3},XEN_GETDOMAININFOLIST_CLEAR{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,dominfos,def{2597},use{1026,1030,1043,1048,1066,1078,1084,2604,2609,2611,2614,2624,2634,2635,2639},dvars{op,id,nids},pointers{},cfuncs{XEN_GETDOMAININFOLIST_DOMAIN{1},virXen_getdomaininfolist{4},XEN_GETDOMAININFOLIST_FREE{1},XEN_GETDOMAININFOLIST_CLEAR{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,uuid,def{2595},use{2051,2066,2634,2650},dvars{NULLret},pointers{uuid},cfuncs{memcpy{2},memcpy{1},virDomainDefNew{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,NULLret,def{2650},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,ret,def{2599,2652},use{2651,2654},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,name,def{2600,2645},use{2054,2056,2061,2062,2066,2067,2069,2647,2650,2653},dvars{NULLret},pointers{id,conn},cfuncs{memcpy{1},VIR_FREE{1},virDomainDefNew{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,priv,def{2598},use{75,77,78,79,84,85,88,90,210,224,863,876,902,915,1023,1051,1068,1080,2611,2644,2646,2911,2913,2916,2918},dvars{ret,nids},pointers{},cfuncs{va_arg {1},xenHypervisorDoV2Sys{1},xenHypervisorDoV0Op{1},xenHypervisorDoV1Op{1},pthread_mutex_lock{1},ioctl{1},xenUnifiedLock{1},virMutexLock{1},xenUnifiedUnlock{1},virMutexUnlock{1},va_start {1},va_end {1},pthread_mutex_unlock{1},virXen_getdomaininfolist{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,nids,def{2611},use{2613,2623,2633},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorLookupDomainByUUID,conn,def{2595},use{42,44,45,47,569,576,577,578,2598,2645},dvars{priv},pointers{},cfuncs{va_end {1},va_start {1},snprintf{1},vasnprintf {4},xenStoreDomainGetName{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfolist,op,def{1035,1038,1041,1042,1043,1044,1046,1047,1048,1049,1060,1063,1064,1065,1066,1067,1072,1075,1076,1077,1078,1079},use{902,908,910,912,922,942,948,950,952,962,1037,1051,1055,1057,1062,1068,1070,1074,1080,1082},dvars{hc,ret},pointers{},cfuncs{xenHypervisorDoV0Op{2},xenHypervisorDoV2Sys{2},xenHypervisorDoV1Op{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfolist,first_domain,def{1024},use{1041,1046,1064,1076},dvars{op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfolist,ret,def{1028,1051,1055,1057,1068,1070,1080,1082,1086},use{1053,1069,1081,1086,1088},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfolist,dominfos,def{1026},use{1030,1043,1048,1066,1078,1084},dvars{op},pointers{dominfos},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfolist,maxids,def{1025},use{1031,1042,1044,1047,1049,1065,1067,1077,1079,1085},dvars{op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfolist,handle,def{1023},use{75,77,78,79,863,876,902,915,1051,1068,1080},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},xenHypervisorDoV2Sys{1},xenHypervisorDoV0Op{1},xenHypervisorDoV1Op{1},va_start {1},ioctl{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,buf,def{1540},use{1545,1546},dvars{xen_cpumap},pointers{},cfuncs{virReadBufInt64LE{1},memcpy{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,bitmap,def{1496,1517,1520},use{1526,1530},dvars{op},pointers{cpumap,new},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,new,def{1495},use{1512,1516,1517,1534},dvars{},pointers{},cfuncs{VIR_FREE{1},memcpy{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,op,def{1500,1506,1507,1525,1526,1527,1529,1530,1531,1549,1552,1553,1554,1555,1558,1561,1562,1563,1564},use{902,908,910,912,922,982,988,990,992,1002,1505,1533,1551,1556,1560,1565},dvars{hc,ret},pointers{op},cfuncs{xenHypervisorDoV0Op{2},xenHypervisorDoV2Dom{2},xenHypervisorDoV1Op{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,ret,def{1494,1533,1537,1556,1565},use{1537,1568},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,handle,def{1488},use{75,77,78,79,863,876,902,915,982,995,1533,1556,1565},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},xenHypervisorDoV0Op{1},xenHypervisorDoV2Dom{1},xenHypervisorDoV1Op{1},va_start {1},ioctl{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,xen_cpumap,def{1539,1546},use{1555,1564},dvars{op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,cpumap,def{1491},use{1502,1516,1520,1526,1530,1536,1545},dvars{op},pointers{},cfuncs{memcpy{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,vcpu,def{1490},use{1525,1529,1554,1563},dvars{op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,maplen,def{1492},use{1502,1511,1516,1521,1536,1542,1545},dvars{nr_cpus},pointers{},cfuncs{memcpy{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,nr_cpus,def{1497,1518,1521},use{1527,1531},dvars{op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setvcpumap,id,def{1489},use{1507,1553,1562},dvars{op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV1Op,hc,def{905,909,910},use{72,82,84,907,915},dvars{ret},pointers{},cfuncs{primary_ioctl {3},primary_ioctl {2},primary_ioctl {1},execute_all_ioctl_hooks {4},execute_all_ioctl_hooks {3},execute_all_ioctl_hooks {2},execute_all_ioctl_hooks {1},ioctl{3},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV1Op,ret,def{904,915,923},use{916,923,925},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV1Op,op,def{902,908},use{910,912,922},dvars{hc},pointers{def,op},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV1Op,handle,def{902},use{75,77,78,79,915},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},va_start {1},ioctl{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfo,dominfos,def{1094,1097,1099},use{1102},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfo,dominfo,def{1092},use{1097,1099},dvars{dominfos},pointers{dominfo},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfo,first_domain,def{1092},use{1102},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_getdomaininfo,handle,def{1092},use{1102},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setmaxmem,ret,def{1441,1453,1461,1469},use{1471},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setmaxmem,memory,def{1439},use{1450,1452,1460,1468},dvars{op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setmaxmem,op,def{1444,1447,1448,1450,1452,1455,1458,1459,1460,1463,1466,1467,1468},use{902,908,910,912,922,982,988,990,992,1002,1446,1453,1457,1461,1465,1469},dvars{hc,ret},pointers{op},cfuncs{xenHypervisorDoV0Op{2},xenHypervisorDoV2Dom{2},xenHypervisorDoV1Op{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setmaxmem,id,def{1439},use{1448,1459,1467},dvars{op},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,virXen_setmaxmem,handle,def{1439},use{75,77,78,79,863,876,902,915,982,995,1453,1461,1469},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},xenHypervisorDoV0Op{1},xenHypervisorDoV2Dom{1},xenHypervisorDoV1Op{1},va_start {1},ioctl{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainBlockStats,priv,def{1375},use{84,85,88,90,210,224,267,296,299,307,309,313,315,317,322,324,327,328,329,330,332,333,338,342,346,355,362,366,371,1378,1380,1381,2911,2913,2916,2918},dvars{minor,retval,ret},pointers{},cfuncs{pthread_mutex_lock{1},virMutexLock{1},pthread_mutex_unlock{1},virMutexUnlock{1},xenLinuxDomainDeviceID{1},xenLinuxDomainBlockStats{1},VIR_FREE{1},xenUnifiedUnlock{1},xenUnifiedLock{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainBlockStats,path,def{1371},use{1380},dvars{ret},pointers{path},cfuncs{xenLinuxDomainBlockStats{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainBlockStats,ret,def{1376,1380},use{1382},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainBlockStats,stats,def{1372},use{364,371,1380},dvars{ret},pointers{stats},cfuncs{xenLinuxDomainBlockStats{4}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainBlockStats,def,def{1370},use{262,295,296,299,363,366,1380},dvars{ret},pointers{},cfuncs{xenLinuxDomainDeviceID{2},xenLinuxDomainBlockStats{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainBlockStats,conn,def{1369},use{1375},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVersion,hvVer,def{2023,2025},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVersion,ATTRIBUTE_UNUSED,def{2023},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomainInfo,info,def{2792},use{2794},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomainInfo,def,def{2791},use{2794},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomainInfo,conn,def{2790},use{2794},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,GLOBAL,,def{325,338,351,364,377,390,416,429,442,456,469,482,495,508,521},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,lock_pages,len,def{536},use{539,542},dvars{},pointers{},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,lock_pages,addr,def{536},use{539},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpuMax,priv,def{3042},use{1092,1102,3049},dvars{ret},pointers{},cfuncs{virXen_getdomaininfo{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpuMax,conn,def{3036},use{3042},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpuMax,dominfo,def{3039},use{1092,1097,1099,3048,3050,3052,3054},dvars{dominfos,maxcpu,ret},pointers{},cfuncs{XEN_GETDOMAININFO_MAXCPUID{1},virXen_getdomaininfo{3},XEN_GETDOMAININFO_CLEAR{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpuMax,def,def{3037},use{1092,1102,3045,3049,3052},dvars{ret},pointers{},cfuncs{virXen_getdomaininfo{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpuMax,maxcpu,def{3041,3046,3054},use{3057},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpuMax,ret,def{3040,3049},use{3052},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV2Dom,hc,def{985,989,990},use{72,82,84,987,995},dvars{ret},pointers{},cfuncs{primary_ioctl {3},primary_ioctl {2},primary_ioctl {1},execute_all_ioctl_hooks {4},execute_all_ioctl_hooks {3},execute_all_ioctl_hooks {2},execute_all_ioctl_hooks {1},ioctl{3},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV2Dom,ret,def{984,995,1003},use{996,1003,1005},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV2Dom,op,def{982,988},use{990,992,1002},dvars{hc},pointers{op_dom,op},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV2Dom,handle,def{982},use{75,77,78,79,995},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},va_start {1},ioctl{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,i,def{2979},use{1590,1632,1633,1636,1643,1647,1650,1654,1657,1678,1702,3003,3004,3005,3007,3015},dvars{op,mapl,ret},pointers{},cfuncs{memset{3},VIR_GET_CPUMAP{7},virXen_getvcpusinfo{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,priv,def{2977},use{75,77,78,79,863,876,902,915,982,995,1585,1604,1649,1667,1691,2989,3005,3015},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},xenHypervisorDoV0Op{1},xenHypervisorDoV2Dom{1},xenHypervisorDoV1Op{1},virXen_getdomaininfo{1},va_start {1},ioctl{1},virXen_getvcpusinfo{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,nbinfo,def{2979,2997,2998},use{2998,3003,3024},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,ret,def{2976,2989,3005,3015},use{2992,3009,3017},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,cpumaps,def{2972},use{3000,3001,3004,3007},dvars{ret},pointers{cpumaps},cfuncs{VIR_GET_CPUMAP{5},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,info,def{2970},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,maplen,def{2973},use{902,908,910,912,922,982,988,990,992,1002,1595,1597,1598,1599,1601,1603,1604,1610,1611,1613,1618,1619,1621,1622,1624,1629,1630,1637,1638,1639,1641,1642,1643,1645,1646,1647,1649,1661,1663,1664,1665,1666,1667,1671,1672,1673,1676,1677,1680,1685,1687,1688,1689,1690,1691,1695,1696,1697,1700,1701,1704,3001,3007,3008},dvars{ipt,hc,ret},pointers{},cfuncs{xenHypervisorDoV0Op{2},xenHypervisorDoV2Dom{2},xenHypervisorDoV1Op{2},virXen_getvcpusinfo{2},VIR_GET_CPUMAP{6},memset{4},memset{1},memset{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,maxinfo,def{2971},use{2998,3001,3004},dvars{nbinfo},pointers{},cfuncs{memset{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,ipt,def{2978},use{1588,1608,1612,1614,1616,1618,1619,1623,1625,1627,1629,1630,1670,1672,1673,1675,1676,1677,1694,1696,1697,1699,1700,1701,3006,3016},dvars{ret},pointers{},cfuncs{virXen_getvcpusinfo{4}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,dominfo,def{2975},use{1092,1097,1099,2988,2990,2992,2997},dvars{dominfos,nbinfo,ret},pointers{},cfuncs{XEN_GETDOMAININFO_CPUCOUNT{1},virXen_getdomaininfo{3},XEN_GETDOMAININFO_CLEAR{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,conn,def{2968},use{2977},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetVcpus,def,def{2969},use{902,908,910,912,922,982,988,990,992,1002,1092,1102,1595,1597,1598,1599,1601,1603,1604,1610,1611,1613,1618,1619,1621,1622,1624,1629,1630,1637,1638,1639,1641,1642,1643,1645,1646,1647,1649,1661,1663,1664,1665,1666,1667,1671,1672,1673,1676,1677,1680,1685,1687,1688,1689,1690,1691,1695,1696,1697,1700,1701,1704,2989,2992,3005,3015},dvars{ipt,hc,ret},pointers{},cfuncs{xenHypervisorDoV0Op{2},xenHypervisorDoV2Dom{2},xenHypervisorDoV1Op{2},memset{4},memset{1},virXen_getvcpusinfo{2},virXen_getdomaininfo{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilities,NULLcaps,def{2471},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilities,NULLcapabilities,def{2460},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilities,conn,def{2442},use{254,256,258,259,260,262,263,266,271,272,273,274,338,343,2302,2420,2428,2432,2445,2471},dvars{is_zero,klass,NULLcaps},pointers{},cfuncs{VIR_FREE{1},PROBE{3},virObjectUnref{1},memset{3},memset{1},dispose{1},virAtomicIntDecAndTest{1},xenHypervisorMakeCapabilitiesInternal{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilities,NULLxenHypervisorMakeCapabilitiesSunOSconncpuinfo,def{2450},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilities,cpuinfo,def{2448},use{2289,2421,2451,2463,2473,2482},dvars{caps,NULLcaps},pointers{},cfuncs{xenHypervisorMakeCapabilitiesInternal{2},VIR_FORCE_FCLOSE{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilities,capabilities,def{2448},use{2290,2310,2311,2461,2474,2483},dvars{NULLcaps},pointers{},cfuncs{VIR_FORCE_FCLOSE{1},xenHypervisorMakeCapabilitiesInternal{3}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorMakeCapabilities,caps,def{2447},use{2475,2478,2485},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,xen_machines,def{2075},use{2078},dvars{},pointers{guest_archs},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,machines,def{2076,2078,2095},use{114,116,118,119,120,353,357,359,360,361,363,2091,2092},dvars{},pointers{xen_machines},cfuncs{VIR_FREE{1},virCapabilitiesFreeGuestMachine{1},virCapabilitiesFreeMachines{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,i,def{2046},use{2073},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,caps,def{2045,2050},use{254,256,258,259,260,262,263,266,271,272,273,274,338,343,2054,2057,2061,2067,2068,2081,2164,2167},dvars{klass,is_zero,guest},pointers{},cfuncs{VIR_FREE{1},dispose{1},virAtomicIntDecAndTest{1},memset{3},memset{1},PROBE{3},virObjectUnref{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,nr_guest_archs,def{2043},use{2073},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,guest_archs,def{2042},use{2075,2078,2082,2083,2087,2105,2112,2119,2126},dvars{guest,machines},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,hvm_type,def{2041},use{2053,2054},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,hv_minor,def{2048},use{2137,2144,2154},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,hv_major,def{2047},use{2136,2144,2154},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,host_pae,def{2040},use{2056},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,hostarch,def{2039},use{2050,2084},dvars{caps},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,guest,def{2074,2081},use{2097,2106,2113,2120,2127,2133,2145,2155},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorBuildCapabilities,conn,def{2039},use{2066,2067},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHavePrivilege,,def{3066},use{411,419,420,426,427,429,3069,3071},dvars{ret},pointers{},cfuncs{realaccess{1},realaccess{2},access{2},access{1},free{1},priv_ineffect{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorOpen,priv,def{1971,1978,1986},use{1978},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorOpen,ret,def{1970,1980},use{1981,1986},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorOpen,flags,def{1968},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorOpen,ATTRIBUTE_UNUSED,def{1967},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorOpen,conn,def{1966},use{1971},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainInterfaceStats,device,def{1403},use{1408},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainInterfaceStats,rqdomid,def{1403},use{1408,1413},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainInterfaceStats,path,def{1399},use{1408,1419},dvars{},pointers{path},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainInterfaceStats,stats,def{1400},use{1419},dvars{},pointers{stats},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDomainInterfaceStats,def,def{1398},use{1413},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerParameters,ret,def{1198,1202,1223},use{1203,1224},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerParameters,op_dom,def{1197,1219,1220,1221,1222},use{982,988,990,992,1002,1218,1223,1230,1237},dvars{hc,ret},pointers{},cfuncs{xenHypervisorDoV2Dom{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerParameters,op_sys,def{1196,1201},use{942,948,950,952,962,1200,1202,1206,1246},dvars{hc,ret},pointers{},cfuncs{virReportError{2},xenHypervisorDoV2Sys{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerParameters,nparams,def{1180,1241},use{1208,1233,1240},dvars{},pointers{nparams},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerParameters,def,def{1178},use{1220},dvars{op_dom},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerParameters,priv,def{1182},use{75,77,78,79,942,955,982,995,1202,1223},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},va_start {1},ioctl{1},xenHypervisorDoV2Dom{1},xenHypervisorDoV2Sys{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerParameters,params,def{1179},use{1227,1234},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerParameters,conn,def{1177},use{1182},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,unlock_pages,len,def{552},use{555,558},dvars{},pointers{},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,unlock_pages,addr,def{552},use{555},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomainState,info,def{2813},use{2815,2818},dvars{state},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomainState,reason,def{2811,2820},use{2819,2820},dvars{},pointers{reason},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomainState,state,def{2810,2818},use{},dvars{},pointers{state},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomainState,def,def{2809},use{2815},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetDomainState,conn,def{2808},use{2815},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,ret,def{1302,1306,1351},use{1307,1352},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,op_dom,def{1301,1316,1317,1318,1319,1325,1326,1338,1347},use{982,988,990,992,1002,1315,1325,1351},dvars{hc,ret},pointers{},cfuncs{xenHypervisorDoV2Dom{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,op_sys,def{1300,1305},use{942,948,950,952,962,1304,1306,1309,1359},dvars{hc,ret},pointers{},cfuncs{virReportError{2},xenHypervisorDoV2Sys{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,buf,def{1273},use{1329},dvars{},pointers{},cfuncs{memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,priv,def{1272},use{75,77,78,79,942,955,982,995,1306,1351},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},va_start {1},ioctl{1},xenHypervisorDoV2Dom{1},xenHypervisorDoV2Sys{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,val,def{1271,1331,1340},use{1332,1335,1338,1341,1344,1347},dvars{op_dom},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,params,def{1267},use{1280,1330,1331,1339,1340},dvars{val},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,i,def{1270},use{1328},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,nparams,def{1268},use{1275,1280,1328},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,def,def{1266},use{1317},dvars{op_dom},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorSetSchedulerParameters,conn,def{1265},use{1272},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorHasDomain,dominfo,def{2550},use{2552,2554,2557},dvars{},pointers{},cfuncs{XEN_GETDOMAININFO_CLEAR{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorHasDomain,id,def{2547},use{2554,2557},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorHasDomain,priv,def{2549},use{2554},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorHasDomain,conn,def{2547},use{2549},dvars{priv},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV2Sys,hc,def{945,949,950},use{72,82,84,947,955},dvars{ret},pointers{},cfuncs{primary_ioctl {3},primary_ioctl {2},primary_ioctl {1},execute_all_ioctl_hooks {4},execute_all_ioctl_hooks {3},execute_all_ioctl_hooks {2},execute_all_ioctl_hooks {1},ioctl{3},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV2Sys,ret,def{944,955,963},use{956,963,965},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV2Sys,op,def{942,948},use{950,952,962},dvars{hc},pointers{op,op_sys},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV2Sys,handle,def{942},use{75,77,78,79,955},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},va_start {1},ioctl{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV0Op,hc,def{866,870,871},use{72,82,84,868,876},dvars{ret},pointers{},cfuncs{primary_ioctl {3},primary_ioctl {2},primary_ioctl {1},execute_all_ioctl_hooks {4},execute_all_ioctl_hooks {3},execute_all_ioctl_hooks {2},execute_all_ioctl_hooks {1},ioctl{3},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV0Op,ret,def{865,876,884},use{877,884,886},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV0Op,op,def{863,869},use{871,873,883},dvars{hc},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorDoV0Op,handle,def{863},use{75,77,78,79,876},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},va_start {1},ioctl{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerType,schedulertype,def{1119},use{1145,1150,1159},dvars{},pointers{dom},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerType,ret,def{1135,1139},use{1140},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerType,op,def{1134,1138},use{942,948,950,952,962,1137,1139,1143},dvars{hc,ret},pointers{},cfuncs{xenHypervisorDoV2Sys{2},memset{4},memset{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerType,nparams,def{1117,1147,1152},use{1146,1151},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerType,priv,def{1120},use{75,77,78,79,942,955,1139},dvars{ret},pointers{},cfuncs{va_end {1},va_arg {1},va_start {1},ioctl{1},xenHypervisorDoV2Sys{1}}
libvirt-1.1.0/src/xen/xen_hypervisor.c,xenHypervisorGetSchedulerType,conn,def{1116},use{1120},dvars{priv},pointers{},cfuncs{}
