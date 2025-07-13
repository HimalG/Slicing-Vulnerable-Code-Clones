libvirt-1.1.0/gnulib/lib/regcomp.c,free_tree,node,def{3867},use{3869},dvars{},pointers{},cfuncs{free_token {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_tree,extra,def{3867},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_token,node,def{3852},use{3855,3856,3859,3860},dvars{},pointers{},cfuncs{re_free {1},free_charset {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_tree,t,def{3797,3798},use{3799},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_tree,type,def{3795},use{3798},dvars{t},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_tree,left,def{3794},use{3799},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_tree,right,def{3794},use{3799},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_tree,dfa,def{3794},use{3799},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_charset,cset,def{3775},use{3777,3779,3780,3781,3782,3784,3785},dvars{},pointers{},cfuncs{re_free {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,fetch_number,num,def{3753,3763},use{3766,3768,3770},dvars{},pointers{},cfuncs{MIN {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,fetch_number,syntax,def{3751},use{3757},dvars{},pointers{},cfuncs{fetch_token {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,fetch_number,c,def{3754,3758},use{3761,3763,3767,3768},dvars{num},pointers{},cfuncs{MIN {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,fetch_number,token,def{3751},use{3757,3758,3759,3761,3763},dvars{num,c},pointers{},cfuncs{fetch_token {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,fetch_number,input,def{3751},use{3757},dvars{},pointers{},cfuncs{fetch_token {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass,syntax,def{3557},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass,class_name,def{3557},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass,char_class_alloc,def{3556},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass,mbcset,def{3556},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass,sbcset,def{3555},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass,trans,def{3555},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,NULLNULLerr,def{2444},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,treetree,def{2413},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,tree_last,def{2376,2389},use{2390,2391},dvars{},pointers{token,dfa},cfuncs{create_tree {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,NULLtoken,def{2358},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,NULLtree,def{2300,2305,2399,2433},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,mbc_remain,def{2286,2288},use{2289,2290},dvars{},pointers{token,dfa},cfuncs{create_tree {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,tree_first,def{2376,2380,2386},use{2390,2391},dvars{},pointers{token,dfa},cfuncs{create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,err,def{2267,2277,2292,2312,2319,2328,2337,2350,2364,2393,2402,2416,2466},use{2300,2301,2305,2306,2343,2427,2428,2436,2437,2458,2459},dvars{NULLtree},pointers{},cfuncs{parse_dup_op {6},build_charclass_op {6},parse_bracket_exp {5},parse_sub_exp {6}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,tree,def{2270,2274,2289,2316,2361,2390,2424,2458},use{2275,2289,2290,2301,2306,2317,2362,2391,2400,2411,2414,2428,2437,2458,2459,2471},dvars{},pointers{regexp,syntax,tree_last,mbc_remain,err,token,tree_first,dfa},cfuncs{parse_dup_op {1},create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,dfa,def{2269,2323,2420},use{2274,2281,2288,2289,2305,2310,2315,2316,2322,2323,2361,2371,2372,2380,2386,2389,2390,2399,2413,2419,2420,2424,2433,2458},dvars{treetree,NULLtree},pointers{preg},cfuncs{build_charclass_op {1},parse_dup_op {3},create_tree {1},init_word_char {1},parse_bracket_exp {2},create_token_tree {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,syntax,def{2267},use{2287,2300,2305,2326,2335,2340,2342,2343,2348,2410,2453,2458,2462},dvars{NULLtree},pointers{},cfuncs{parse_dup_op {5},parse_bracket_exp {4},parse_sub_exp {4},fetch_token {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,token,def{2266,2379,2381,2385,2387},use{2271,2274,2287,2288,2289,2300,2305,2310,2315,2316,2342,2343,2347,2361,2369,2373,2374,2377,2380,2386,2389,2390,2399,2410,2413,2427,2436,2453,2455,2456,2458,2463,2464},dvars{treetree,NULLtree,tree},pointers{},cfuncs{build_charclass_op {5},parse_bracket_exp {3},parse_dup_op {4},fetch_token {1},parse_sub_exp {3},create_token_tree {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,nest,def{2267},use{2300,2343},dvars{NULLtree},pointers{},cfuncs{parse_sub_exp {5}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,preg,def{2266},use{2269,2274,2288,2289,2300,2316,2343,2361,2380,2386,2389,2390,2399,2413,2424,2458},dvars{tree_first,tree_last,NULLtree,mbc_remain,treetree,tree},pointers{},cfuncs{parse_sub_exp {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_expression,regexp,def{2266},use{2283,2284,2287,2300,2305,2342,2343,2410,2424,2433,2453,2458},dvars{NULLtree},pointers{},cfuncs{parse_dup_op {2},build_charclass_op {2},parse_bracket_exp {1},parse_sub_exp {1},fetch_token {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_collating_symbol,name,def{2805},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_collating_symbol,coll_sym_alloc,def{2805},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_collating_symbol,mbcset,def{2804},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_collating_symbol,sbcset,def{2804},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,subidx,def{2628},use{2629},dvars{},pointers{},cfuncs{postorder {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,start_token,def{2529},use{2567},dvars{token},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,start_idx,def{2528},use{2566},dvars{},pointers{},cfuncs{re_string_set_index {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,NULLstart,def{2590},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,token,def{2525,2567,2568},use{2529,2531,2534,2537,2548,2549,2550,2557,2575,2590,2591,2594,2626},dvars{NULLstart,start,end,start_token},pointers{},cfuncs{fetch_token {1},fetch_number {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,start,def{2528,2534,2538},use{2535,2538,2545,2548,2552,2574,2582,2598,2605,2608,2616},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,i,def{2528},use{2608,2645},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,old_tree,def{2527,2621,2624},use{2657,2658},dvars{},pointers{tree},cfuncs{create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,elem,def{2524,2610,2647},use{2571,2596,2600,2607,2610,2611,2612,2620,2621,2626,2628,2629,2632,2647,2648,2649},dvars{subidx,old_tree,treeelem},pointers{dfa},cfuncs{create_tree {2},create_tree {3},duplicate_tree {1},postorder {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,end,def{2528,2533,2548,2591},use{2533,2552,2574,2582,2598,2616,2633,2644,2645},dvars{},pointers{},cfuncs{create_tree {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,syntax,def{2525},use{2534,2550,2555,2594},dvars{start},pointers{},cfuncs{fetch_token {3},fetch_number {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,treeelem,def{2620},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,err,def{2525,2541,2558,2560,2578,2584},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,tree,def{2527,2607,2611,2632,2648,2652,2658},use{2611,2612,2617,2621,2634,2648,2649,2652,2653,2658,2660},dvars{tree},pointers{end,dfa,old_tree,elem},cfuncs{create_tree {3},create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,dfa,def{2524},use{2610,2611,2620,2632,2647,2648,2652,2658},dvars{treeelem,tree},pointers{},cfuncs{create_tree {1},duplicate_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,treeerr,def{2663},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_dup_op,regexp,def{2524},use{2528,2534,2550,2566,2594},dvars{start},pointers{},cfuncs{fetch_token {2},re_string_set_index {1},fetch_number {1},re_string_cur_idx {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,char_class_alloc,def{3585},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,trans,def{3559},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,equiv_class_alloc,def{3533},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,new_equiv_class_alloc,def{3525},use{3529,3533},dvars{equiv_class_alloc},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,cnt,def{3509},use{3511,3514,3516},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,len,def{3475},use{3507,3511,3516},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,char_buf,def{3472,3496},use{3497,3498},dvars{idx2},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,new_equiv_classes,def{3527},use{3530,3532},dvars{REG_ESPACEmbcset},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,idx1,def{3473,3487},use{3488,3507,3535},dvars{mbcset},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,cp,def{3471,3479,3497},use{3487,3488,3498},dvars{idx2,idx1},pointers{char_buf,name},cfuncs{findidx {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,indirect,def{3470,3485},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,nrules,def{3467},use{3468},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,name_len,def{2810},use{2811},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,extra,def{3471,3483},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,new_array_start,def{2742,2749},use{2754,2757},dvars{REG_ESPACEmbcset},pointers{new_nranges},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,ch,def{2775,3474},use{2776,2779,2785,2786,2787,3494,3496,3517},dvars{char_buf},pointers{},cfuncs{bitset_set {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,new_char_classes,def{3580},use{3582,3584},dvars{REG_ESPACEmbcset},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,range_alloc,def{2759},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,new_nranges,def{2743,2746},use{2750,2752,2757,2758,2759},dvars{range_alloc,mbcset,REG_ESPACEmbcset},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,end_wc,def{2714,2724},use{2726,2728,2763,2769},dvars{mbcset},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,mbcset,def{2758,2762,2763,3535,3587},use{3521,3525,3527,3574,3578,3580},dvars{new_char_class_alloc,new_equiv_class_alloc},pointers{},cfuncs{re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,start_wc,def{2713,2722},use{2726,2728,2762,2769},dvars{mbcset},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,REG_ECOLLATEstart_ch,def{2716},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,wc,def{2712},use{2767,2769,2770},dvars{},pointers{},cfuncs{bitset_set {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,sbcset,def{2690,2807,3463,3559},use{2770,2787,2815,3517,3542},dvars{},pointers{},cfuncs{bitset_set {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,name,def{2807,3463,3564,3570},use{2810,2815,3479,3487,3540,3542,3569,3570,3587,3606,3608,3610,3612,3614,3616,3618,3620,3622,3624,3626,3628},dvars{mbcset,idx1},pointers{class_name},cfuncs{__wctype {1},bitset_set {2},strlen {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,syntax,def{2689,3560},use{2728,3568},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,class_name,def{3560},use{3564,3587},dvars{mbcset},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,REG_ECOLLATElen,def{3493},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,new_array_end,def{2742,2751},use{2754,2758},dvars{mbcset},pointers{new_nranges},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,idx2,def{3473,3498},use{3502,3507},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,end_elem,def{2692},use{2698,2706,2707,2719,2720,2724,2725,2779,2780},dvars{end_wc,end_ch},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,new_char_class_alloc,def{3578},use{3581,3585},dvars{char_class_alloc},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,weights,def{3471,3481},use{3493,3507,3512,3513},dvars{REG_ECOLLATElen},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,start_elem,def{2691},use{2697,2704,2705,2716,2717,2722,2723,2776,2777},dvars{start_wc,start_ch,REG_ECOLLATEstart_ch},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,REG_ESPACEmbcset,def{2757,3532,3584},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,start_ch,def{2695,2776},use{2723,2782,2786},dvars{},pointers{},cfuncs{__btowc {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,,table,def{3470,3480},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,i,def{3563},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,,end_ch,def{2695,2719,2779},use{2725,2782,2786},dvars{},pointers{},cfuncs{__btowc {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,branch,def{2184,2195},use{2196,2201},dvars{},pointers{syntax,err,token,nest,preg,regexp},cfuncs{create_tree {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,NULLroottree,def{2185},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,tree,def{2184,2201},use{2186,2201,2202,2208},dvars{},pointers{branch,dfa},cfuncs{create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,dfa,def{2183},use{2201},dvars{},pointers{preg},cfuncs{create_tree {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,NULLbranch,def{2200},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,syntax,def{2181},use{2185,2191,2195},dvars{NULLroottree},pointers{},cfuncs{fetch_token {3},parse_branch {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,err,def{2181,2204},use{2185,2186,2195,2196,2201},dvars{tree,NULLroottree},pointers{},cfuncs{parse_branch {6}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,token,def{2180},use{2185,2189,2191,2192,2193,2195},dvars{NULLroottree},pointers{},cfuncs{fetch_token {1},parse_branch {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,nest,def{2181},use{2185,2193,2195},dvars{NULLroottree},pointers{},cfuncs{parse_branch {5}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,preg,def{2180},use{2183,2185,2195,2201},dvars{tree,NULLroottree},pointers{},cfuncs{parse_branch {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_reg_exp,regexp,def{2180},use{2185,2191,2195},dvars{NULLroottree},pointers{},cfuncs{fetch_token {2},parse_branch {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_dfa_content,entry,def{636},use{637,639,642},dvars{},pointers{i,dfa},cfuncs{re_free {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_dfa_content,j,def{613},use{637},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_dfa_content,state,def{639},use{640},dvars{},pointers{entry},cfuncs{free_state {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_dfa_content,i,def{613},use{616,617,619,622,624,626,634,636},dvars{},pointers{},cfuncs{re_node_set_free {1},free_token {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_dfa_content,dfa,def{611},use{615,616,617,618,619,621,622,623,624,625,626,628,629,630,631,633,634,636,644,646,647,649,651,654},dvars{},pointers{},cfuncs{re_node_set_free {1},re_free {1},free_token {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,eor,def{2150},use{2159,2161,2162},dvars{},pointers{},cfuncs{create_tree {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,current_token,def{2151},use{2153,2154},dvars{},pointers{},cfuncs{parse_reg_exp {3},fetch_token {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,tree,def{2150,2154},use{2155,2158,2159},dvars{},pointers{syntax,current_token,preg,err,regexp},cfuncs{create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,dfa,def{2149,2152},use{2157,2159},dvars{NULLeor},pointers{syntax,preg},cfuncs{create_tree {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,syntax,def{2146},use{2152,2153,2154,2159},dvars{root},pointers{},cfuncs{parse_reg_exp {4},fetch_token {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,preg,def{2146},use{2149,2154},dvars{},pointers{},cfuncs{parse_reg_exp {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,err,def{2147,2164},use{2154,2155,2159},dvars{root},pointers{},cfuncs{parse_reg_exp {6}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,NULLeor,def{2157},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,root,def{2150,2159,2161},use{2162,2167},dvars{},pointers{eor,tree,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse,regexp,def{2146},use{2153,2154},dvars{},pointers{},cfuncs{parse_reg_exp {1},fetch_token {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token_bracket,c,def{2052,2058},use{2059,2070,2081,2108,2114},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token_bracket,c2,def{2074,2076,2083,2086,2088},use{2077,2088,2089,2091},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token_bracket,syntax,def{2050},use{2070,2100},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token_bracket,token_len,def{2084,2090,2109},use{2090,2109,2112},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token_bracket,input,def{2050},use{2053,2058,2062,2063,2071,2075,2076,2085,2086},dvars{c2,c},pointers{},cfuncs{re_string_skip_bytes {1},re_string_peek_byte {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token_bracket,token,def{2050,2055,2059,2065,2077,2078,2089,2094,2097,2102,2107,2108,2117,2120,2123,2126},use{},dvars{},pointers{c2,c},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,erreclosure_elem,def{1768},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,edest,def{1751},use{1763},dvars{err},pointers{},cfuncs{calc_eclosure_iter {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,eclosure_elem,def{1750},use{1763,1770,1778},dvars{err},pointers{},cfuncs{re_node_set_free {1},re_node_set_merge {2},calc_eclosure_iter {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,new_set,def{1719,1790},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,REG_NOERRORerr,def{1726},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,ok,def{1724,1783},use{1784},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,i,def{1722},use{1748},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,errdfa,def{1732},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,err,def{1721,1740,1763,1770},use{1727,1728,1742,1743,1764,1765,1771,1772},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,root,def{1719},use{1786},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,incomplete,def{1725,1756,1777},use{1786},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,eclosure,def{1723},use{1726,1770,1783,1789,1790},dvars{new_set,ok,err,REG_NOERRORerr},pointers{},cfuncs{re_node_set_insert {1},re_node_set_merge {1},re_node_set_alloc {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,node,def{1719},use{1740,1783},dvars{ok,err},pointers{},cfuncs{re_node_set_insert {2},duplicate_node_closure {4},duplicate_node_closure {3},duplicate_node_closure {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure_iter,dfa,def{1719,1787,1789},use{1726,1736,1737,1738,1740,1741,1747,1748,1751,1754,1761,1763,1768,1775,1787},dvars{erreclosure_elem,edest,err,REG_NOERRORerr},pointers{eclosure},cfuncs{duplicate_node_closure {5},duplicate_node_closure {1},calc_eclosure_iter {2},re_node_set_alloc {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_token_tree,dfa,def{3803,3814,3815},use{3807,3813,3815,3817},dvars{NULLstorage},pointers{storage},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_token_tree,tree,def{3806,3817,3819,3820,3821,3822,3823,3824,3825,3826,3827},use{3823,3824,3830,3832,3833},dvars{},pointers{left,right,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_token_tree,token,def{3804},use{3822,3823,3824},dvars{tree},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_token_tree,NULLstorage,def{3813},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_token_tree,left,def{3803,3830},use{3820,3829},dvars{},pointers{tree},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_token_tree,storage,def{3809},use{3811,3814,3817},dvars{tree},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_token_tree,right,def{3803,3832},use{3821,3830,3831,3832},dvars{right,left},pointers{tree},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure,err,def{1685,1703},use{1704,1705},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure,node_idx,def{1676,1692},use{1687,1692,1703},dvars{err},pointers{},cfuncs{calc_eclosure_iter {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure,eclosure_elem,def{1686},use{1703,1710},dvars{err},pointers{},cfuncs{re_node_set_free {1},calc_eclosure_iter {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure,incomplete,def{1677,1681,1691,1709},use{1689},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_eclosure,dfa,def{1674},use{1679,1687,1696,1700,1703,1707},dvars{err},pointers{},cfuncs{calc_eclosure_iter {2},assert {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,mbc_tree,def{3713,3718},use{3719,3722,3723},dvars{},pointers{br_token,dfa},cfuncs{create_tree {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,br_token,def{3648,3704,3705,3715,3716},use{3706,3718,3722},dvars{tree},pointers{},cfuncs{create_token_tree {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,alloc,def{3645},use{3676},dvars{ret},pointers{},cfuncs{build_charclass {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,ret,def{3647,3674},use{3680,3686},dvars{err},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,mbcset,def{3644,3653,3669},use{3657,3669,3676,3684,3716,3728,3738},dvars{br_token,ret},pointers{},cfuncs{free_charset {1},build_charclass {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,sbcset,def{3642},use{3657,3659,3674,3682,3691,3695,3700,3705,3736},dvars{br_token,ret},pointers{},cfuncs{bitset_mask {1},bitset_not {1},re_free {1},bitset_set {1},build_charclass {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,tree,def{3649,3706,3722},use{3707,3722,3724,3729,3732},dvars{},pointers{mbc_tree,br_token,dfa},cfuncs{create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,err,def{3640,3662,3686,3740},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,extra,def{3639},use{3690,3691},dvars{},pointers{},cfuncs{bitset_set {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,class_name,def{3638},use{3678},dvars{ret},pointers{},cfuncs{build_charclass {5}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,non_match,def{3639},use{3666,3669,3694},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,REG_ECTYPEREG_NOERRORsbcset,def{3651},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,trans,def{3637},use{3674},dvars{ret},pointers{},cfuncs{build_charclass {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_charclass_op,dfa,def{3637,3717},use{3699,3700,3706,3711,3717,3718,3722},dvars{},pointers{},cfuncs{create_tree {1},create_token_tree {1},bitset_mask {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_comp,re_comp_buf,def{711,714,719,729},use{712,713,717,720,729,731,743},dvars{ret},pointers{},cfuncs{re_compile_internal {1},memset {4},memset {1},__regfree {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_comp,ret,def{698,731},use{733},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_comp,fastmap,def{699,710},use{714,717,720},dvars{re_comp_buf},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_comp,s,def{696},use{701,731},dvars{ret},pointers{},cfuncs{strlen {3},re_compile_internal {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_comp,,def{695},use{710,714,720,721,722,734,737},dvars{re_comp_buf},pointers{},cfuncs{gettext {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,merge_erri,def{1067},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,errdfa,def{1092},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,merge_err,def{1063},use{1065,1066},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,dest_idx,def{1060},use{1061,1064},dvars{},pointers{},cfuncs{re_node_set_merge {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,clexp_idx,def{1044},use{1047,1055},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,first,def{1022,1028},use{1029,1030,1050},dvars{clexp_node,err},pointers{},cfuncs{re_node_set_init_copy {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,node_idx,def{1041},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,err,def{1023,1030},use{1031,1032,1073,1076,1079,1081,1083,1089},dvars{},pointers{},cfuncs{re_acquire_state_context {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,clexp_node,def{1049,1050},use{1051,1052},dvars{},pointers{init_nodes,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,dfa,def{1020,1029,1073,1079,1081,1083},use{1028,1030,1038,1042,1050,1052,1060,1064,1073,1075,1077,1079,1081,1083,1087,1088,1092,1093},dvars{errdfa,dest_idx,err,type,first},pointers{init_nodes,err,re_acquire_state_context,first},cfuncs{re_acquire_state_context {2},re_node_set_merge {2},re_node_set_init_copy {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,init_nodes,def{1024},use{1030,1039,1041,1047,1050,1055,1061,1064,1073,1079,1081,1084,1092,1093,1095},dvars{node_idx,errdfa,err},pointers{},cfuncs{re_acquire_state_context {3},re_node_set_free {1},re_node_set_merge {1},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,type,def{1042},use{1045,1051,1058},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,create_initial_state,i,def{1022},use{1039,1067},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_equiv_class,name,def{3461},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_equiv_class,equiv_class_alloc,def{3461},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_equiv_class,mbcset,def{3460},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_equiv_class,sbcset,def{3460},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node,dup_idx,def{1636},use{1637,1646},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node,constraint,def{1634},use{1639,1640},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node,org_idx,def{1634},use{1644},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node,dfa,def{1634,1639,1641,1644},use{1636,1640,1641},dvars{},pointers{org_idx,constraint},cfuncs{re_dfa_add_node {2},re_dfa_add_node {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,NULLtree,def{2250},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,newtree,def{2242},use{2243,2250},dvars{NULLtree},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,NULLtreetree,def{2226},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,expr,def{2224,2233},use{2234,2240,2242,2245,2253},dvars{},pointers{},cfuncs{postorder {1},create_tree {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,dfa,def{2225},use{2242},dvars{},pointers{preg},cfuncs{create_tree {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,err,def{2222,2247},use{2226,2227,2233,2234},dvars{expr,NULLtreetree},pointers{},cfuncs{parse_expression {6}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,tree,def{2224,2253},use{2227,2236,2237,2240,2242,2246,2252,2256},dvars{},pointers{expr},cfuncs{create_tree {2},postorder {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,syntax,def{2222},use{2226,2233},dvars{expr,NULLtreetree},pointers{},cfuncs{parse_expression {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,token,def{2221},use{2226,2230,2231,2233},dvars{expr,NULLtreetree},pointers{},cfuncs{parse_expression {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,nest,def{2222},use{2226,2231,2233},dvars{expr,NULLtreetree},pointers{},cfuncs{parse_expression {5}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,preg,def{2221},use{2225,2226,2233},dvars{expr,NULLtreetree},pointers{},cfuncs{parse_expression {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_branch,regexp,def{2221},use{2226,2233},dvars{expr,NULLtreetree},pointers{},cfuncs{parse_expression {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,search_duplicated_node,idx,def{1619},use{1620,1624},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,search_duplicated_node,org_node,def{1616},use{1622},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,search_duplicated_node,constraint,def{1617},use{1623},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,search_duplicated_node,dfa,def{1616},use{1620,1622,1623},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,link_nfa_nodes,err,def{1452,1478,1485,1491},use{1500},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,link_nfa_nodes,right,def{1466,1473,1475},use{1472,1477,1478},dvars{err},pointers{},cfuncs{re_node_set_init_2 {3},REG_VALID_INDEX {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,link_nfa_nodes,idx,def{1451},use{1478,1485,1491},dvars{err},pointers{},cfuncs{re_node_set_init_1 {1},re_node_set_init_2 {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,link_nfa_nodes,dfa,def{1450,1467,1489,1496},use{1467,1478,1485,1491},dvars{err},pointers{node,extra},cfuncs{re_node_set_init_1 {2},re_node_set_init_1 {1},re_node_set_init_2 {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,link_nfa_nodes,node,def{1448},use{1451,1454,1460,1468,1469,1471,1472,1473,1475,1485,1489,1490,1491,1495,1496},dvars{right,err,left,idx},pointers{},cfuncs{IS_EPSILON_NODE {1},re_node_set_init_1 {2},assert {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,link_nfa_nodes,left,def{1466,1469,1471},use{1468,1476,1478},dvars{err},pointers{},cfuncs{re_node_set_init_2 {2},REG_VALID_INDEX {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,link_nfa_nodes,extra,def{1448},use{1450,1478,1485},dvars{err},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_first,dfa,def{1405,1418},use{1414,1418},dvars{dfa},pointers{node,extra},cfuncs{re_dfa_add_node {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_first,node,def{1403,1408,1409,1413,1414},use{1406,1414,1415,1417,1418},dvars{},pointers{dfa},cfuncs{re_dfa_add_node {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_first,extra,def{1403},use{1405,1414},dvars{node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_symbol,i,def{3416},use{3421},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_symbol,delim,def{3415},use{3429},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_symbol,regexp,def{3412},use{3417,3424,3426,3427,3429,3433},dvars{ch},pointers{},cfuncs{re_string_fetch_byte {1},re_string_skip_bytes {1},re_string_fetch_byte_case {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_symbol,elem,def{3412,3431,3434,3438,3441,3444},use{3434},dvars{},pointers{ch},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_symbol,ch,def{3415,3424,3426},use{3429,3431},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_symbol,token,def{3413},use{3415,3423,3435},dvars{delim},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,NULLtree,def{2517},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,tree,def{2486,2494,2497,2511},use{2500,2501,2511,2512,2518},dvars{},pointers{dfa,syntax,err,token,nest,preg,regexp},cfuncs{create_tree {2},postorder {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,dfa,def{2485},use{2509,2511},dvars{},pointers{preg},cfuncs{create_tree {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,syntax,def{2483},use{2490,2497},dvars{},pointers{},cfuncs{parse_reg_exp {4},fetch_token {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,err,def{2483,2502,2514},use{2497,2498,2504},dvars{},pointers{},cfuncs{parse_reg_exp {6}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,token,def{2482},use{2490,2493,2497,2498},dvars{},pointers{},cfuncs{parse_reg_exp {3},fetch_token {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,nest,def{2483},use{2497},dvars{},pointers{},cfuncs{parse_reg_exp {5}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,NULLtreecur_nsub,def{2488},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,preg,def{2482},use{2485,2488,2497,2511},dvars{tree,NULLtreecur_nsub},pointers{},cfuncs{parse_reg_exp {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,cur_nsub,def{2487},use{2508,2509,2517},dvars{NULLtree},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_sub_exp,regexp,def{2482},use{2490,2497},dvars{},pointers{},cfuncs{parse_reg_exp {1},fetch_token {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_next,node,def{1425,1430,1433,1434,1438,1440},use{1427,1437,1439},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_next,extra,def{1425},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,NULLop,def{1395},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,tree1,def{1370,1387},use{1388,1389},dvars{},pointers{body},cfuncs{create_tree {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,cls,def{1370,1386},use{1387,1389,1395,1396},dvars{NULLop},pointers{dfa},cfuncs{create_tree {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,op,def{1370,1396},use{1388,1389},dvars{},pointers{node,cls},cfuncs{create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,leftop,def{1385},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,preg,def{1366},use{1368,1372,1385,1386,1388},dvars{tree,cls,leftop},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,body,def{1369},use{1387,1388},dvars{tree},pointers{node},cfuncs{create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,tree,def{1370,1388},use{1389,1397},dvars{},pointers{tree1,op,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,dfa,def{1368},use{1379,1385,1386,1387,1388,1395,1396},dvars{op,NULLop,leftop},pointers{preg},cfuncs{create_tree {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,node,def{1366},use{1369,1377,1378,1380,1381,1387,1395,1396},dvars{NULLop,tree1},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexp,err,def{1366,1391},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_subexps,idx,def{1319},use{1321},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_subexps,dfa,def{1315,1333},use{1317,1320,1321,1335},dvars{},pointers{extra},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_subexps,node,def{1313,1320,1329,1331},use{1317,1319,1321,1324,1325,1327,1330},dvars{other_idx,idx},pointers{dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_subexps,other_idx,def{1327},use{1334,1335},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_subexps,extra,def{1313},use{1315,1320},dvars{node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_tree,dup_rootnode,def{3913},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_tree,prev,def{3904,3907},use{3905},dvars{},pointers{node},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_tree,NULLp_new,def{3892},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_tree,p_new,def{3884,3889,3893,3900,3914},use{3890,3893,3894},dvars{dup_node},pointers{dup_node,dup_root},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_tree,dup_node,def{3884,3894,3909},use{3892,3900,3914},dvars{NULLp_new},pointers{root},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_tree,node,def{3882,3899,3908},use{3889,3897,3905,3907,3910,3913},dvars{dup_rootnode,p_new},pointers{},cfuncs{create_token_tree {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_tree,dfa,def{3880},use{3889},dvars{p_new},pointers{},cfuncs{create_token_tree {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_tree,dup_root,def{3883},use{3884,3911},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_tree,root,def{3880},use{3884,3900,3914},dvars{p_new},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,wch,def{931},use{932,935},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,j,def{921},use{929,933},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,ch,def{921},use{931,935},dvars{},pointers{},cfuncs{__btowc {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,REG_ESPACEdfa,def{883},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,max_object_size,def{864},use{880},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,codeset_name,def{857,902},use{903,904,905,906},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,max_i18n_object_size,def{860,862},use{869},dvars{},pointers{},cfuncs{MAX {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,i,def{921},use{928},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,pat_len,def{853},use{880,883,888},dvars{REG_ESPACEdfa},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,table_size,def{855},use{888,891,892},dvars{},pointers{},cfuncs{calloc {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_dfa,dfa,def{853,874,884,891,892,894,898,899,907,911,918,923,936},use{871,884,896,898,907,911,915,917,924,933,936,943},dvars{},pointers{table_size},cfuncs{re_malloc {2},memset {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_inveclosure,elems,def{1659},use{1662},dvars{ok},pointers{dfa},cfuncs{re_node_set_insert_last {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_inveclosure,ok,def{1653,1662},use{1663},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_inveclosure,idx,def{1652},use{1654,1655,1660},dvars{},pointers{},cfuncs{re_node_set_init_empty {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_inveclosure,src,def{1652},use{1657,1662},dvars{ok},pointers{},cfuncs{re_node_set_insert_last {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,calc_inveclosure,dfa,def{1650},use{1654,1655,1657,1659,1660,1662},dvars{ok},pointers{},cfuncs{re_node_set_insert_last {1},re_node_set_init_empty {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexps,err,def{1347},use{1351,1357,1362},dvars{},pointers{},cfuncs{lower_subexp {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexps,preg,def{1346},use{1351,1357},dvars{},pointers{extra},cfuncs{lower_subexp {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexps,node,def{1344,1351,1353,1357,1359},use{1349,1351,1352,1355,1357,1358},dvars{},pointers{preg,err},cfuncs{lower_subexp {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,lower_subexps,extra,def{1344},use{1346,1351,1357},dvars{node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,REG_ERANGEelem,def{3402},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,token2,def{3395},use{3396,3397},dvars{},pointers{},cfuncs{peek_token_bracket {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,cur_char_size,def{3377},use{3379,3383},dvars{},pointers{},cfuncs{re_string_skip_bytes {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,syntax,def{3374},use{3396},dvars{},pointers{},cfuncs{peek_token_bracket {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,NULLcur_char_size,def{3378},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,accept_hyphen,def{3374},use{3391},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,dfa,def{3373},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,regexp,def{3372},use{3378,3382,3383,3387,3390,3396},dvars{NULLcur_char_size},pointers{},cfuncs{re_string_skip_bytes {1},peek_token_bracket {2},re_string_wchar_at {1},re_string_cur_idx {2},re_string_char_size_at {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,token_len,def{3373},use{3387},dvars{},pointers{},cfuncs{re_string_skip_bytes {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,token,def{3373},use{3388,3389,3390,3391,3403},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_element,elem,def{3372,3381,3382,3403},use{3390},dvars{},pointers{token,regexp,re_string_wchar_at},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_set_syntax,ret,def{263},use{266},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_set_syntax,syntax,def{261},use{265},dvars{re_syntax_options},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_set_syntax,re_syntax_options,def{265},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_set_syntax,,def{260},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token,next,def{2029},use{2031,2033},dvars{},pointers{},cfuncs{peek_token {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token,wc,def{1850,1964},use{1852,1965},dvars{},pointers{},cfuncs{IS_WIDE_WORD_CHAR {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token,prev,def{2018},use{2019},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token,c,def{1813,1821},use{1822,1835,1969,1971},dvars{},pointers{},cfuncs{IS_WORD_CHAR {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token,c2,def{1837,1844},use{1845,1856,1858,1869},dvars{},pointers{},cfuncs{IS_WORD_CHAR {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token,syntax,def{1811},use{1861,1866,1873,1880,1887,1894,1901,1905,1909,1913,1917,1924,1931,1935,1939,1943,1947,1951,1974,1978,1985,1989,1993,1997,2001,2005,2015,2019,2026,2031},dvars{},pointers{},cfuncs{peek_token {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token,input,def{1811},use{1815,1821,1827,1828,1838,1844,1848,1850,1851,1962,1964,2016,2018,2027,2030,2031,2032},dvars{c2,c},pointers{},cfuncs{peek_token {2},re_string_cur_idx {2},re_string_wchar_at {1},re_string_peek_byte_case {1},re_string_skip_bytes {1},re_string_peek_byte {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,peek_token,token,def{1811,1817,1822,1824,1826,1830,1831,1840,1845,1846,1852,1856,1862,1868,1869,1875,1876,1882,1883,1889,1890,1896,1897,1902,1906,1910,1914,1919,1920,1926,1927,1932,1936,1940,1944,1948,1952,1960,1965,1969,1975,1979,1982,1986,1990,1994,1998,2002,2006,2009,2012,2022,2023,2036,2037},use{1824,1826,1831,1969},dvars{},pointers{wc,c2,c},cfuncs{IS_WORD_CHAR {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,REG_NOERRORnode,def{1304},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,dfa,def{1187,1191,1192,1193,1194,1204,1212,1235},use{1191,1192,1193,1194,1195,1196,1200,1205,1207,1211,1216,1219,1222,1223,1226,1232,1233,1235,1236,1238},dvars{REG_ESPACEret,retret,ret},pointers{i,preg},cfuncs{calc_inveclosure {1},calc_eclosure {1},postorder {3},postorder {1},preorder {3},preorder {1},free {1},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,REG_NOERRORprev,def{1270},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,root,def{1253},use{1280,1285},dvars{REG_NOERRORprev,preorder},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,preg,def{1185},use{1187,1199,1203,1206,1209,1216,1232},dvars{ret,REG_ESPACEdfa},pointers{},cfuncs{postorder {3},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,prev,def{1299},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,REG_ESPACEret,def{1238},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,REG_ESPACEdfa,def{1199},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,retret,def{1219,1226},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,ret,def{1188,1216,1223},use{1217,1218,1220,1221,1224,1225,1227,1228,1241},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,i,def{1202},use{1203,1204,1206,1207,1209,1216,1219,1223,1226,1238},dvars{REG_ESPACEret,retret,ret},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,analyze,node,def{1253,1259,1261,1271,1275,1293,1300},use{1257,1258,1265,1268,1270,1274,1285,1287,1292,1297,1299,1301,1304},dvars{REG_NOERRORnode,prev,REG_NOERRORprev},pointers{},cfuncs{fn {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_workarea_compile,next,def{1004,1007},use{},dvars{},pointers{storage},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_workarea_compile,storage,def{1004},use{1005,1007,1008},dvars{},pointers{},cfuncs{re_free {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_workarea_compile,dfa,def{1003,1010,1011,1012,1014},use{1013},dvars{},pointers{preg},cfuncs{re_free {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,free_workarea_compile,preg,def{1001},use{1003},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,regerror,cpy_size,def{565,568},use{571},dvars{},pointers{},cfuncs{memcpy {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,regerror,msg_size,def{548,561},use{565,566,574},dvars{cpy_size},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,regerror,errbuf,def{544,569},use{569,571},dvars{},pointers{err,errcode},cfuncs{memcpy {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,regerror,msg,def{547,559},use{561,571},dvars{msg_size},pointers{reg},cfuncs{memcpy {2},strlen {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,regerror,errbuf_size,def{544},use{563,566,568},dvars{cpy_size},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,regerror,preg,def{543},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,regerror,errcode,def{543},use{550,551},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_word_char,bits3,def{965},use{969,977},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_word_char,bits2,def{964},use{969,976},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_word_char,REG_ESPACEREG_NOERRORdfa,def{959},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_word_char,ch,def{958,982},use{982,986,994},dvars{},pointers{},cfuncs{memset {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_word_char,bits1,def{963},use{968,975},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_word_char,j,def{957},use{993,995},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_word_char,bits0,def{962},use{968,974},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_word_char,i,def{956,970,978},use{970,978,992},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,init_word_char,dfa,def{954,968,969,974,975,976,977},use{959,960,984,986,995},dvars{},pointers{bits0,bits2,bits3,bits1},cfuncs{memset {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap,dfa,def{276},use{280,281,282,283,284,285,286},dvars{},pointers{bufp},cfuncs{re_compile_fastmap_iter {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap,bufp,def{274,287},use{276,277,280,282,284,286,287},dvars{},pointers{},cfuncs{re_compile_fastmap_iter {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap,fastmap,def{277,298,300},use{279,280,282,284,286,298,300},dvars{},pointers{bufp},cfuncs{re_compile_fastmap_iter {3},memset {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap,,def{273},use{300},dvars{},pointers{},cfuncs{tolower {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,regcomp,syntax,def{479},use{491,496,497,506},dvars{ret},pointers{},cfuncs{re_compile_internal {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,regcomp,ret,def{478,506,511},use{510,514,525},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,regcomp,,def{473},use{488,514,522,525},dvars{},pointers{},cfuncs{BE {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,regcomp,pattern,def{475},use{506},dvars{ret},pointers{},cfuncs{strlen {3},re_compile_internal {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,regcomp,cflags,def{476},use{479,491,494,503,506},dvars{ret,syntax},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,regcomp,preg,def{474,482,483,484,487,499,502,503,504,522},use{483,484,488,499,502,506,517,521},dvars{ret},pointers{cflags},cfuncs{re_free {1},re_compile_fastmap {1},re_compile_internal {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,mark_opt_subexp,idx,def{3842},use{3843},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,mark_opt_subexp,node,def{3840,3844},use{3843,3844},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,mark_opt_subexp,extra,def{3840},use{3842},dvars{idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,REG_ESPACEpreg,def{781},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,regexp,def{759},use{802,808,817,837},dvars{err},pointers{},cfuncs{re_string_destruct {1},parse {1},re_string_construct {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,errdfa,def{796},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,err,def{757,786,802,822,833},use{787,792,804,812,817,823,833,839,846},dvars{err},pointers{},cfuncs{parse {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,syntax,def{755},use{763,771,778,803,817,828},dvars{err,dfa},pointers{},cfuncs{parse {3},re_string_construct {5}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,errpreg,def{816},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,length,def{754},use{786,796,797,802},dvars{errdfa,err},pointers{},cfuncs{strncpy {3},re_malloc {2},re_string_construct {3},init_dfa {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,dfa,def{758,771,778,817},use{779,782,786,789,797,800,802,803,809,817,818,822,828,829,833,841},dvars{dfa,err},pointers{syntax,err,regexp,preg},cfuncs{__libc_lock_init {1},create_initial_state {1},strncpy {1},re_string_construct {6},optimize_utf8 {1},free_dfa_content {1},init_dfa {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,pattern,def{754},use{797,802},dvars{err},pointers{},cfuncs{re_string_construct {2},strncpy {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_internal,preg,def{754,762,763,764,765,766,767,768,782,784,790,791,810,811,842,843},use{762,765,766,767,771,772,778,782,786,791,802,803,807,811,816,817,822,828,836,843},dvars{err,preg},pointers{dfa,syntax},cfuncs{analyze {1},free_workarea_compile {1},parse {2},re_string_construct {4},re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,mbc_tree,def{3310,3316},use{3317,3334,3341},dvars{},pointers{br_token,dfa},cfuncs{create_tree {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,is_range_exp,def{3155,3195},use{3199},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,token_len2,def{3154,3182},use{3202},dvars{ret},pointers{},cfuncs{parse_bracket_element {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,end_elem,def{3150,3201},use{3202,3214,3219,3221},dvars{err,ret},pointers{},cfuncs{build_range_exp {4},build_range_exp {6},build_range_exp {5},parse_bracket_element {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,start_elem,def{3150,3158},use{3159,3172,3214,3219,3221,3229,3232,3250,3258,3267,3276},dvars{mbcset,err,ret},pointers{},cfuncs{build_collating_symbol {4},build_equiv_class {4},build_range_exp {3},build_range_exp {5},build_range_exp {4},build_charclass {5},bitset_set {2},parse_bracket_element {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,NULLtoken_len,def{3121},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,first_round,def{3085,3166},use{3160},dvars{ret},pointers{},cfuncs{parse_bracket_element {7}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,work_tree,def{3083,3329,3334,3341,3353},use{3330,3334,3335,3354,3357},dvars{},pointers{mbc_tree,br_token,dfa},cfuncs{create_tree {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,sbc_idx,def{3311},use{3319,3324},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,char_class_alloc,def{3080},use{3274},dvars{err},pointers{},cfuncs{build_charclass {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,sbcset,def{3076,3103},use{3108,3110,3113,3134,3213,3217,3221,3232,3254,3263,3272,3299,3304,3320,3328,3340,3352,3362},dvars{br_token,err},pointers{},cfuncs{bitset_mask {1},bitset_not {1},build_collating_symbol {1},build_equiv_class {1},build_range_exp {2},build_range_exp {1},build_charclass {2},bitset_set {1},re_free {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_ESPACEmbcsetcoll_symsnew_coll_symscoll_sym_allocnew_coll_sym_allocmbcsetcoll_symsidxREG_NOERRORBE,def{3064},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,coll_sym_alloc,def{3057,3079},use{3265},dvars{err},pointers{},cfuncs{build_collating_symbol {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,new_coll_syms,def{3052},use{3054,3056},dvars{REG_ESPACEmbcset,BE},pointers{},cfuncs{BE {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,equiv_class_alloc,def{3080},use{3256},dvars{err},pointers{},cfuncs{build_equiv_class {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,new_coll_sym_alloc,def{3049},use{3053,3057},dvars{coll_sym_alloc},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_NOERRORREG_ECOLLATEBE,def{3045},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,elemidxsymb_tableidxextraname_lenbitset_set,def{3037},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,nruleselemseek_collating_symbol_entry,def{3025},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,name_len,def{3022},use{3025,3033,3064},dvars{},pointers{},cfuncs{BE {1},seek_collating_symbol_entry {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,range_alloc,def{2986,3079},use{3213,3219},dvars{err},pointers{},cfuncs{build_range_exp {4},build_range_exp {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,nrulesch_collseqcollseqmbch_collseq__collseq_table_lookup,def{3003},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,ch_collseq,def{3001,3003},use{3004},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,non_match,def{3082,3132},use{3130,3298,3308},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,nrules,def{2831,3089},use{2876,2886,2892,2964,3000,3023,3090},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_ESPACEmbcsetrange_startsnew_array_startmbcsetrange_endsnew_array_endrange_allocnew_nrangesmbcsetrange_startsstart_collseqmbcsetrange_endsend_collseq,def{2990},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,new_mbchars,def{3239,3244},use{3246,3248},dvars{mbcset},pointers{mbchar_alloc,mbcset},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,err,def{2826,3117,3124,3139,3163,3176,3185,3206,3213,3217,3221,3254,3263,3272,3288},use{3224,3259,3268,3278},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,new_array_end,def{2971,2978},use{2981,2985},dvars{mbcset,BE},pointers{new_nranges},cfuncs{BE {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,start_collseqch_collseqch_collseqend_collseqbitset_set,def{3005},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,mbcset,def{2985,2989,2990,3059,3078,3105,3130,3248,3250},use{3045,3049,3052,3108,3115,3130,3213,3218,3237,3242,3244,3256,3265,3274,3306,3307,3308,3315,3348,3364},dvars{mbchar_alloc,err,br_token,new_coll_sym_alloc},pointers{},cfuncs{build_equiv_class {2},build_range_exp {3},build_range_exp {2},free_charset {1},re_free {1},build_collating_symbol {2},re_realloc {1},build_charclass {3},BE {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_ESPACEmbcset,def{2984,3056},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,start_name_buf,def{3151},use{3158},dvars{start_elem},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,new_nrangesmbcsetnrangesnew_array_startre_realloc,def{2977},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_ERANGEnrulesdfamb_cur_maxBE,def{2967},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,syntax,def{2826},use{2957,3121,3133,3136,3160,3169,3182,3203,3210,3217,3221,3277},dvars{ret,token_len,err,token_len2,NULLtoken_len},pointers{},cfuncs{build_range_exp {1},build_charclass {6},parse_bracket_element {6},peek_token_bracket {3},BE {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_ECOLLATEBE,def{2957},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,br_token,def{3075,3314,3315,3327,3328,3351,3352},use{3316,3329,3334,3341,3353},dvars{work_tree},pointers{},cfuncs{create_token_tree {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,end_collseqlookup_collation_sequence_value,def{2953},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_NOERRORcollseqmb,def{3087},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_ERANGEstart_collseq,def{2952},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,br_elemtypeSB_CHARnrulescollseqmbwc,def{2880},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,build_range_exp,def{2938},use{3213,3217,3221},dvars{err},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,BE,def{2947,2955,2981,3054},use{2946,2955,2957,2967,2981,3045,3054,3064,3108,3110,3122,3137,3161,3174,3183,3204,3224,3237,3246,3259,3268,3278,3286,3317,3330,3335,3354},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,new_nranges,def{2972,2975},use{2977,2979,2985,2986},dvars{range_alloc,mbcset,new_array_start},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,token_len,def{3084,3136,3169,3210},use{3135,3159,3181,3191,3295},dvars{ret},pointers{},cfuncs{parse_bracket_element {4},re_string_skip_bytes {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,mbchar_alloc,def{3079,3242},use{3237,3245,3248},dvars{mbcset},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_ERANGEstart_collseqlookup_collation_sequence_value,def{2952},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,end_collseq,def{2942,2953},use{2955,2957,2990,3004},dvars{mbcset,BE},pointers{},cfuncs{BE {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,new_array_start,def{2976},use{2981,2984},dvars{REG_ESPACEmbcset,BE},pointers{},cfuncs{BE {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,start_collseq,def{2941},use{2955,2957,2989,3004},dvars{mbcset,BE},pointers{},cfuncs{BE {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,elemseek_collating_symbol_entry,def{2896},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,nruleselem,def{2894},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,work_treeerr,def{3360},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,br_elemtypeCOLL_SYMsym_name_len,def{2891},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,__collseq_table_lookup,def{2881},use{2881,2887,3003},dvars{ch_collseq},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,lookup_collation_sequence_value,def{2869},use{2952,2953},dvars{end_collseq,REG_ERANGEstart_collseq},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,idxextraname_lenextramemcmp,def{2856},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,elem,def{2847,2895,3025},use{2847,2858,2897,3026},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,ret,def{3153,3159,3202},use{3161,3163,3204,3206},dvars{err},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,__attribute__,def{2842,2868,2936,3017},use{2868,2936,3017},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,REG_ECOLLATEbitset_set,def{3068},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,seek_collating_symbol_entry,def{2843},use{2895,3025},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,ch,def{2994},use{2994,3003,3005,3232},dvars{ch_collseq},pointers{},cfuncs{bitset_set {2},__btowc {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,symb_table,def{2833,3097},use{2848,2850,2900,3029},dvars{idx,elemtable_sizeelemsymb_tableidx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,extra,def{2834,3099},use{2852,2854,2856,2902,2904,2911,2913,3031},dvars{},pointers{},cfuncs{memcmp {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,table_size,def{2832,3096},use{2847},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,build_collating_symbol,def{3019},use{3263},dvars{err},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,idx,def{2894,2900,2906,3029},use{2902,2904,2908,2910,2911,2913,3031,3059},dvars{mbcset},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,end_name_buf,def{3152},use{3201},dvars{end_elem},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,dfa,def{2825,3313},use{2964,3159,3203,3218,3303,3304,3307,3313,3316,3329,3334,3353},dvars{err,ret},pointers{},cfuncs{create_tree {1},create_token_tree {1},bitset_mask {2},build_range_exp {3},parse_bracket_element {5}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,token,def{2825,3146,3192},use{3121,3122,3127,3136,3137,3145,3159,3169,3174,3179,3210,3286,3291},dvars{ret,token_len,NULLtoken_len},pointers{},cfuncs{parse_bracket_element {3},peek_token_bracket {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,token2,def{3156},use{3182,3183,3188,3202},dvars{ret,token_len2},pointers{},cfuncs{parse_bracket_element {3},peek_token_bracket {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,elemtable_sizeelemsymb_tableidx,def{2850},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,collseqwc,def{2830,3095},use{2881,2887,3003},dvars{ch_collseq},pointers{},cfuncs{__collseq_table_lookup {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,collseqmb,def{2829},use{2877,2919,2923,3001},dvars{ch_collseq},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,br_elemtypeMB_CHARnrules__collseq_table_lookup,def{2887},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,new_array_endre_realloc,def{2979},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,parse_bracket_exp,regexp,def{2825},use{3121,3135,3136,3159,3169,3181,3182,3191,3202,3210,3272,3295},dvars{ret,token_len,err,token_len2,NULLtoken_len},pointers{},cfuncs{build_charclass {1},parse_bracket_element {2},re_string_skip_bytes {1},peek_token_bracket {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,REG_ESPACEorg_node,def{1606},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,err,def{1577},use{1586,1587},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,REG_ESPACEok,def{1562,1581,1602},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,clone_dest,def{1517,1526,1559,1573,1578,1599},use{1527,1530,1560,1562,1574,1579,1581,1584,1593,1600,1602,1607},dvars{REG_ESPACEerr,errok,REG_ESPACEok,clone_node,ok},pointers{},cfuncs{duplicate_node_closure {3},re_node_set_insert {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,org_dest,def{1517,1524,1546},use{1526,1552,1559,1573,1578,1584,1599,1606},dvars{REG_ESPACEorg_node,ok,REG_ESPACEerr,clone_dest},pointers{},cfuncs{duplicate_node_closure {2},search_duplicated_node {2},re_node_set_insert {2},duplicate_node {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,REG_ESPACEerr,def{1584},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,ok,def{1513,1530,1552},use{1531,1553,1563,1582,1594,1603},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,REG_ESPACEorg_dest,def{1570,1598},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,constraint,def{1514},use{1526,1558,1559,1573,1578,1585,1599},dvars{REG_ESPACEerr,clone_dest},pointers{},cfuncs{duplicate_node_closure {5},search_duplicated_node {3},duplicate_node {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,init_constraint,def{1510},use{1514},dvars{constraint},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,REG_ESPACEdfa,def{1529},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,clone_node,def{1512,1607},use{1525,1530,1547,1550,1552,1562,1571,1581,1593,1602},dvars{errok,REG_ESPACEok,ok},pointers{},cfuncs{re_node_set_insert {1},re_node_set_empty {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,org_node,def{1512},use{1550},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,root_node,def{1510},use{1550,1585},dvars{REG_ESPACEerr},pointers{},cfuncs{duplicate_node_closure {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,top_clone_node,def{1509},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,errok,def{1593},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,top_org_node,def{1509},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,duplicate_node_closure,dfa,def{1509,1539},use{1518,1524,1525,1526,1529,1530,1534,1542,1546,1547,1552,1558,1559,1562,1570,1571,1573,1578,1581,1584,1593,1598,1599,1602},dvars{errok,REG_ESPACEorg_dest,org_dest,REG_ESPACEok,REG_ESPACEdfa,clone_dest,REG_ESPACEerr,ok},pointers{},cfuncs{duplicate_node_closure {1},search_duplicated_node {1},re_node_set_insert {1},duplicate_node {1},re_node_set_empty {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_pattern,bufp,def{221,232},use{232,234},dvars{ret},pointers{},cfuncs{re_compile_internal {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_pattern,test_readlinkreadlinktruebufp,def{229},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_pattern,length,def{220},use{234},dvars{ret},pointers{},cfuncs{re_compile_internal {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_pattern,ret,def{224,234},use{236},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_pattern,pattern,def{220},use{234},dvars{ret},pointers{},cfuncs{re_compile_internal {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_range_exp,start_elem,def{2686},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_range_exp,range_alloc,def{2685},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_range_exp,sbcset,def{2683},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_range_exp,mbcset,def{2684},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_range_exp,end_elem,def{2687},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,build_range_exp,syntax,def{2682},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,table,def{372},use{375},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,cset,def{359},use{370,385,387,405,410,414},dvars{},pointers{dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,w,def{350},use{352},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,j,def{349},use{351,352},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,i,def{346,360},use{347,374,376,405},dvars{},pointers{},cfuncs{re_set_fastmap {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,bufp,def{307,430},use{310,312,322,412,430},dvars{icase},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,wc,def{326},use{336,338},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,mbs,def{394},use{395,396},dvars{},pointers{},cfuncs{memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,p,def{325,329,330,334},use{336,337},dvars{},pointers{buf},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,c,def{391},use{396,397,399},dvars{},pointers{},cfuncs{re_set_fastmap {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,ch,def{346},use{353},dvars{},pointers{},cfuncs{re_set_fastmap {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,init_state,def{307},use{313,315},dvars{node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,icase,def{312},use{320,353,376,411},dvars{},pointers{},cfuncs{re_set_fastmap {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,buf,def{324,407},use{329,336,337,338,340,410,411,414,416},dvars{},pointers{},cfuncs{re_set_fastmap {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,node,def{315},use{331},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,dfa,def{310},use{312,316,320,322,330,331,332,333,334,350,359,384,412},dvars{w,p,type,icase},pointers{bufp},cfuncs{re_set_fastmap {3}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,type,def{316},use{318,332,344,357,422,424,426,429},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,fastmap,def{308},use{320,340,353,376,397,411,416,428},dvars{},pointers{},cfuncs{memset {1},re_set_fastmap {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,state,def{327,408},use{335,337,338,409,410,414},dvars{},pointers{},cfuncs{memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,re_compile_fastmap_iter,node_cnt,def{311},use{313},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,type,def{114},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,class_name,def{97,104,109},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,trans,def{93,102,108},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,name,def{92,101},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,sbcset,def{89,94,100,103},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,accept_hyphen,def{84},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,token_len,def{81},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,elem,def{79,85},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,dup_elem,def{73},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,regexp,def{59,61,64,67,70,73,76,80,86},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,init_state,def{23},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,token,def{55,62,65,68,71,74,77,81,87,117},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,non_match,def{111},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,input,def{55},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,constraint,def{48,50},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,src,def{118},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,nest,def{63,66,69,72},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,cset,def{27},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,org_idx,def{48},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,char_class_alloc,def{96},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,node,def{41,42,44,45,46,47,53,119,120,121},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,root,def{53},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,org_node,def{49},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,fastmap,def{24},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,extra,def{41,42,45,46,47,110,120,121},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,err,def{43,60,63,66,69,72,75,78,111},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,mbcset,def{90,95},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,length,def{21},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,pattern,def{20},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,bufp,def{22},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,left,def{113,116},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,syntax,def{21,56,60,62,65,68,71,75,77,83,98,105},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,right,def{113,116},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,dfa,def{25,30,32,48,49,51,52,54,74,76,82,107,112,115,118},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,pat_len,def{25},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,equiv_class_alloc,def{91},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,new_set,def{52},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,GLOBAL,preg,def{20,29,34,43,59,61,64,67,70},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,fetch_token,syntax,def{1801},use{1803},dvars{},pointers{},cfuncs{peek_token {4}}
libvirt-1.1.0/gnulib/lib/regcomp.c,fetch_token,input,def{1801},use{1803},dvars{},pointers{},cfuncs{peek_token {3},re_string_skip_bytes {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,fetch_token,result,def{1801},use{1803},dvars{},pointers{},cfuncs{peek_token {2}}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_utf8,rshift,def{1149,1156},use{1154,1156},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_utf8,mb_chars,def{1109,1117},use{1164},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_utf8,has_period,def{1110,1135},use{1164,1177},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_utf8,i,def{1108},use{1152},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_utf8,node,def{1107},use{1112,1165},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,optimize_utf8,dfa,def{1105,1169,1171,1175,1176,1177},use{1112,1113,1116,1120,1154,1165,1167,1168,1169,1170,1175,1176},dvars{},pointers{has_period},cfuncs{}
libvirt-1.1.0/gnulib/lib/regcomp.c,regfree,dfa,def{664},use{665,666},dvars{},pointers{myreg,regex,reg,preg},cfuncs{free_dfa_content {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,regfree,preg,def{662,667,668,671,674},use{664,668,670,673},dvars{},pointers{},cfuncs{re_free {1}}
libvirt-1.1.0/gnulib/lib/regcomp.c,regfree,,def{661},use{665},dvars{},pointers{},cfuncs{BE {1}}
