libvirt-1.1.0/gnulib/lib/regexec.c,sift_ctx_init,new_entrysctx,def{4409},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_ctx_init,last_node,def{4407},use{4411},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_ctx_init,limited_sts,def{4407},use{4410},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_ctx_init,last_str_idx,def{4407},use{4412},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_ctx_init,sifted_sts,def{4406},use{4409},dvars{new_entrysctx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_ctx_init,sctx,def{4406,4410,4411,4412},use{4413},dvars{},pointers{last_str_idx,last_node,limited_sts},cfuncs{re_node_set_init_empty {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_subtop,REG_ESPACEmctx,def{4363,4369},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_subtop,new_array,def{4358},use{4361,4363},dvars{REG_ESPACEmctx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_subtop,new_asub_tops,def{4357},use{4360,4364},dvars{},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_subtop,mctx,def{4349,4364,4366,4370},use{4352,4353,4355,4357,4358,4367},dvars{new_asub_tops},pointers{str_idx,new_asub_tops},cfuncs{re_realloc {1},assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_subtop,str_idx,def{4349},use{4370},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_subtop,node,def{4349},use{4369},dvars{REG_ESPACEmctx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_free,mctx,def{4262},use{4265,4266,4267},dvars{},pointers{},cfuncs{re_free {1},match_ctx_clean {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_clean,top,def{4238},use{4239,4241,4245,4246,4248,4249,4251},dvars{},pointers{mctx},cfuncs{free {1},re_free {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_clean,sl_idx,def{4237},use{4239},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_clean,st_idx,def{4234},use{4235},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_clean,last,def{4241},use{4242,4243},dvars{},pointers{top},cfuncs{re_free {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_clean,mctx,def{4232,4254,4255},use{4235,4238,4254,4255},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,extend_buffers,REG_ESPACEmctx,def{4158},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,extend_buffers,new_array,def{4154},use{4156,4158},dvars{REG_ESPACEmctx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,extend_buffers,REG_ESPACEret,def{4142},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,extend_buffers,ret,def{4133,4167},use{4145,4146,4168,4169},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,extend_buffers,min_len,def{4131},use{4143},dvars{REG_ESPACEret},pointers{},cfuncs{MAX {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,extend_buffers,pstr,def{4134},use{4138,4142,4144,4155,4162,4165,4167,4173,4178,4179,4183,4184},dvars{ret,REG_ESPACEret},pointers{mctx},cfuncs{re_string_translate_buffer {1},build_wcs_buffer {1},re_realloc {3},MIN {4},MIN {3},build_upper_buffer {1},build_wcs_upper_buffer {1},re_string_realloc_buffers {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,extend_buffers,mctx,def{4131},use{4134,4148,4154,4167},dvars{ret},pointers{},cfuncs{re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept,UINT_MAXch,def{4085},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept,ch,def{4084},use{4089,4094,4100,4105,4106},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept,idx,def{4082},use{4085,4118},dvars{UINT_MAXch},pointers{},cfuncs{re_string_context_at {2},re_string_byte_at {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept,context,def{4118},use{4120},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept,node,def{4081},use{4086,4089,4094,4114,4120},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept,mctx,def{4081},use{4085,4105,4106,4118,4119},dvars{UINT_MAXch},pointers{},cfuncs{re_string_context_at {3},re_string_context_at {1},re_string_byte_at {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,search_cur_bkref_entry,REG_NOERRORlast,def{4329},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,search_cur_bkref_entry,mid,def{4328,4332},use{4334,4336},dvars{right,left},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,search_cur_bkref_entry,last,def{4328},use{4338},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,search_cur_bkref_entry,left,def{4328,4334},use{4330,4332,4338,4339},dvars{mid},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,search_cur_bkref_entry,mctx,def{4326},use{4329,4333,4338},dvars{REG_NOERRORlast},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,search_cur_bkref_entry,str_idx,def{4326},use{4333,4338},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,search_cur_bkref_entry,right,def{4328,4336},use{4329,4330,4332},dvars{mid,REG_NOERRORlast},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,elem_mbs_len,def{4043,4046},use{4047,4049,4052,4057},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,mbs_cnt,def{4041},use{4049,4052},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,idx,def{4033,4045,4059,4063},use{4039,4057,4061,4066,4068},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,extra,def{4034},use{4037,4045,4046,4050,4063,4066},dvars{idx,elem_mbs_len,extrasize},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,nrules,def{4019},use{4020},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,found,def{4042,4054},use{4065},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,extrasize,def{4036},use{4039},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,mbs_len,def{4017},use{4022,4047},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,collseq,def{4025},use{4027},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_collation_sequence_value,mbs,def{4017},use{4050},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,cnt,def{3969},use{3974,3977,3978},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,weight_len,def{3965},use{3966,3974,3978},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,equiv_class_idx,def{3964},use{3967,3972},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,collseqwc,def{3901,3932},use{3933},dvars{in_collseq},pointers{},cfuncs{__collseq_table_lookup {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,extra,def{3900,3907,3956},use{3911},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,char_lenchar_len,def{3843},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,table,def{3899,3952},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,match_len,def{3872,3880,3889,3923,3944,3980,3995},use{4002,4005},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,in_collseq,def{3898,3933,3936},use{3941,3942},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,wc,def{3873},use{3878,3887,3933,3993},dvars{in_collseq},pointers{},cfuncs{__collseq_table_lookup {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,j,def{3869},use{3917,3920,3923},dvars{match_len},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,pin,def{3867},use{3918,3936,3951},dvars{in_collseq},pointers{str_idx},cfuncs{find_collation_sequence_value {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,wt,def{3886},use{3887},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,cset,def{3865},use{3873,3877,3878,3884,3886,3906,3909,3911,3928,3940,3941,3942,3949,3962,3964,3991,3993,4001},dvars{equiv_class_idx,wt,wc},pointers{node},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,cp,def{3951},use{3960},dvars{},pointers{pin},cfuncs{findidx {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,str_idx,def{3786},use{3794,3798,3801,3831,3836,3843,3852,3854,3859,3868,3874,3936},dvars{in_collseq,char_lenelem_len,char_lenchar_len,d},pointers{},cfuncs{re_string_wchar_at {2},re_string_elem_size_at {2},re_string_char_size_at {2},re_string_byte_at {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,char_lenelem_len,def{3859},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,indirect,def{3899,3958},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,idx,def{3960},use{3961,3967,3971},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,weights,def{3900,3954},use{3965,3966,3975,3976},dvars{weight_len},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,d,def{3801,3836},use{3803,3807,3813,3819,3825,3837},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,coll_sym,def{3911},use{3914,3917,3918,3920},dvars{},pointers{cset,extra},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,c,def{3794},use{3795,3802,3804,3807,3810,3813,3816,3819,3822,3825},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,char_len,def{3789,3806,3812,3818,3824},use{3806,3812,3818,3824,3831,3834,3840,3846,3856,3860,3880,3889,3930,3995,4008},dvars{match_len},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,i,def{3790},use{3834,3836,3877,3884,3909,3940,3962,3991},dvars{d},pointers{},cfuncs{re_string_byte_at {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,elem_len,def{3789},use{3860,3914,3930,3936,3944,3960,3980,4008},dvars{match_len,in_collseq},pointers{},cfuncs{findidx {2},find_collation_sequence_value {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,node_idx,def{3785},use{3788},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,input,def{3786},use{3794,3798,3801,3831,3836,3843,3852,3854,3859,3868,3874},dvars{char_lenelem_len,char_lenchar_len,d},pointers{},cfuncs{re_string_wchar_at {1},re_string_elem_size_at {1},re_string_get_buffer {1},re_string_char_size_at {1},re_string_byte_at {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,node,def{3788},use{3792,3844,3863,3865},dvars{},pointers{node_idx,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,nrules,def{3870,3895},use{3896},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_node_accept_bytes,dfa,def{3785},use{3788,3851,3853},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,not_consumed,def{3713,3732},use{3728,3753},dvars{not_subset},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,remains,def{3711},use{3739},dvars{},pointers{},cfuncs{bitset_copy {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,any_set,def{3668,3687},use{3677,3681,3682,3696,3700,3701},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,node,def{3607},use{3608,3609,3613,3616,3669,3688,3716},dvars{constraint,type},pointers{dfa},cfuncs{bitset_merge {2},bitset_set {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,cur_nodes,def{3600},use{3605,3748,3760},dvars{err,ok},pointers{state},cfuncs{re_node_set_init_1 {2},re_node_set_insert {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,constraint,def{3609},use{3649,3651,3660,3666,3685},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,accepts,def{3599},use{3601,3613,3616,3622,3625,3627,3629,3635,3637,3639,3641,3653,3654,3656,3662,3671,3677,3681,3690,3696,3700,3722,3731,3732,3759,3764},dvars{not_consumed,not_subset,has_intersec},pointers{},cfuncs{bitset_merge {1},bitset_clear {1},bitset_contain {1},bitset_set_all {1},bitset_copy {2},memset {1},bitset_set {1},bitset_empty {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,k,def{3597},use{3721,3729},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,j,def{3597},use{3676,3680,3695,3699,3708,3757,3769,3770},dvars{},pointers{},cfuncs{re_node_set_free {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,accepts_newline,def{3653},use{3655},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,ndests,def{3598,3602},use{3602,3708,3741,3744,3757,3760,3763,3767,3769},dvars{err},pointers{},cfuncs{re_node_set_init_1 {1},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,i,def{3597},use{3605},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,err,def{3595,3741,3760},use{3742,3761},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,type,def{3608},use{3612,3614,3618,3632,3669,3688,3716},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,dests_ch,def{3593},use{3716,3722,3731,3732,3739,3740,3759},dvars{not_consumed,not_subset,has_intersec},pointers{},cfuncs{bitset_copy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,dfa,def{3592},use{3607,3621,3622,3626,3628,3638,3640,3675,3677,3681,3694,3696,3700},dvars{},pointers{},cfuncs{bitset_merge {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,intersec,def{3710},use{3740},dvars{},pointers{},cfuncs{bitset_copy {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,dests_node,def{3593},use{3741,3748,3760,3770},dvars{ok,err},pointers{},cfuncs{re_node_set_free {1},re_node_set_init_1 {1},re_node_set_insert {1},re_node_set_init_copy {2},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,not_subset,def{3713,3728,3731},use{3737},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,has_intersec,def{3713,3720,3722},use{3720,3724},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,ok,def{3596,3748},use{3749},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,group_nodes_into_DFAstates,state,def{3592},use{3600,3748,3760},dvars{err,ok},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,ok,def{3318,3324},use{3325},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,errnext_node,def{3315},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,err2,def{3294,3299},use{3302,3306},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,errmctx,def{3338},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,union_set,def{3314},use{3322,3324,3327,3334,3338,3339},dvars{errmctx,errerr,ok,err},pointers{},cfuncs{re_acquire_state {3},re_node_set_init_1 {1},re_node_set_free {1},re_node_set_insert {1},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,cache_idx_start,def{3270},use{3273,3277},dvars{REG_NOERRORent},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,err,def{3269,3298,3305,3322,3328},use{3302,3305,3307,3325,3328,3329,3335,3336,3338,3341,3342},dvars{errmctx},pointers{},cfuncs{re_acquire_state {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,new_dests,def{3293},use{3298,3299,3300,3301},dvars{err3,err2,err},pointers{},cfuncs{re_node_set_free {1},re_node_set_merge {2},check_arrival_expand_ecl {2},re_node_set_init_1 {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,to_idx,def{3280,3286},use{3289},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,dfa,def{3268},use{3295,3299,3315,3338},dvars{errmctx,errnext_node,err2,next_node},pointers{mctx},cfuncs{re_acquire_state {2},check_arrival_expand_ecl {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,err3,def{3294,3300},use{3303,3306},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,mctx,def{3265},use{3268,3270,3277,3295,3299,3315,3316,3319,3323,3338,3340},dvars{err,errnext_node,errmctx,err2,next_node,REG_NOERRORent},pointers{},cfuncs{re_node_set_init_copy {2},search_cur_bkref_entry {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,type,def{3266},use{3299},dvars{err2},pointers{},cfuncs{check_arrival_expand_ecl {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,errerr,def{3334},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,next_node,def{3280,3295},use{3296,3298,3320,3324,3334},dvars{errerr,ok,err},pointers{},cfuncs{re_node_set_insert {2},re_node_set_init_1 {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,cur_str,def{3266},use{3270,3286,3289},dvars{to_idx},pointers{},cfuncs{search_cur_bkref_entry {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,subexp_num,def{3266},use{3299},dvars{err2},pointers{},cfuncs{check_arrival_expand_ecl {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,REG_NOERRORent,def{3277},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,ent,def{3271},use{3283,3286,3345},dvars{to_idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,expand_bkref_cache,cur_nodes,def{3265},use{3283,3296,3300},dvars{err3},pointers{},cfuncs{re_node_set_merge {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,REG_ESPACEerr,def{2843,2853},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,nodes,def{2804,2829},use{2830},dvars{cls_node},pointers{mctx},cfuncs{find_subexp_node {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,sl_str_off,def{2803,2805},use{2808},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,cls_node,def{2802,2830},use{2832,2844,2850},dvars{errsub_last,REG_ESPACEerr},pointers{},cfuncs{match_ctx_add_sublast {2},check_arrival {5}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,errsub_last,def{2850},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,sl_str_diff,def{2756,2758},use{2761,2763,2766,2771,2776,2780,2781},dvars{err},pointers{},cfuncs{clean_state_log_if_needed {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,bkref_str_off,def{2745,2751},use{2763,2766,2770,2776,2780,2810,2813,2816},dvars{err},pointers{},cfuncs{extend_buffers {2},clean_state_log_if_needed {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,sub_last_idx,def{2745},use{2754,2795,2797},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,sl_str,def{2745,2750},use{2758,2776,2781,2798,2800,2805,2837,2843,2844,2850,2853},dvars{errsub_last,REG_ESPACEerr,sl_str_off,sl_str_diff},pointers{},cfuncs{match_ctx_add_sublast {3},check_arrival {6},calloc {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,entry,def{2729},use{2732,2734},dvars{},pointers{cache_idx,mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,err,def{2742,2769,2782,2816},use{2772,2773,2789,2791,2792,2817,2818,2846,2848,2849,2855},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,sub_top_idx,def{2723},use{2740},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,bkref_str_idx,def{2720},use{2726,2751,2783,2800,2854},dvars{REG_ESPACEerr,err,bkref_str_off},pointers{},cfuncs{get_subexp_sub {5},search_cur_bkref_entry {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,cache_idx,def{2726},use{2727,2730},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,mctx,def{2720},use{2722,2724,2726,2730,2737,2740,2743,2750,2757,2763,2766,2769,2774,2782,2787,2805,2810,2813,2816,2820,2826,2829,2830,2843,2853},dvars{REG_ESPACEerr,cls_node,sl_str_off,buf,errbuf,err,sl_str,sub_last,subexp_num},pointers{},cfuncs{extend_buffers {1},get_subexp_sub {1},clean_state_log_if_needed {1},check_arrival {1},search_cur_bkref_entry {1},re_string_get_buffer {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,sub_top,def{2743,2836},use{2750,2754,2757,2758,2782,2795,2805,2834,2837,2838,2843,2844,2850,2853},dvars{REG_ESPACEerr,sl_str_diff,errsub_last,sl_str_off,err,sl_str},pointers{sl_str,mctx},cfuncs{match_ctx_add_sublast {1},check_arrival {4},check_arrival {3},check_arrival {2},calloc {1},get_subexp_sub {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,subexp_num,def{2723,2737},use{2747,2830},dvars{cls_node},pointers{},cfuncs{find_subexp_node {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,bkref_node,def{2720},use{2732,2782,2853},dvars{REG_ESPACEerr,err},pointers{},cfuncs{get_subexp_sub {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,errbuf,def{2774,2820},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,buf,def{2724,2787},use{2776,2822},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,sub_last,def{2744,2757},use{2758,2782,2851,2853},dvars{REG_ESPACEerr,err,sl_str_diff},pointers{sub_top},cfuncs{get_subexp_sub {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp,dfa,def{2722},use{2737,2747,2830},dvars{cls_node,subexp_num},pointers{mctx},cfuncs{find_subexp_node {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,REG_ESPACEmctx,def{3133},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,errok,def{3127},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,next_idx,def{3115},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,next_node,def{3114},use{3127},dvars{errok},pointers{},cfuncs{re_node_set_insert {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,dest_state,def{3113,3116},use{3118,3120},dvars{err},pointers{mctx},cfuncs{re_node_set_merge {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,type,def{3102},use{3103},dvars{},pointers{},cfuncs{IS_EPSILON_NODE {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,str_idx,def{3086},use{3110,3115,3145},dvars{next_idx,naccepted},pointers{},cfuncs{check_node_accept_bytes {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,cur_nodes,def{3087},use{3097,3100},dvars{cur_node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,cur_node,def{3100},use{3109,3145},dvars{naccepted},pointers{},cfuncs{check_node_accept_bytes {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,naccepted,def{3099,3109},use{3111,3115,3144},dvars{next_idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,err,def{3093,3120},use{3121,3124,3133,3136,3139},dvars{REG_ESPACEmctx},pointers{},cfuncs{re_acquire_state {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,ok,def{3090,3147},use{3128,3148},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,next_nodes,def{3087},use{3147},dvars{ok},pointers{},cfuncs{re_node_set_insert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,mctx,def{3086},use{3089,3109,3116,3120,3133,3135,3145,3147},dvars{REG_ESPACEmctx,ok,err,naccepted},pointers{},cfuncs{check_node_accept_bytes {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,union_set,def{3095},use{3096,3117,3120,3123,3127,3130,3134,3138,3150,3155},dvars{REG_ESPACEmctx,errok,err},pointers{},cfuncs{re_acquire_state {3},re_node_set_free {1},re_node_set_merge {1},re_node_set_insert {1},re_node_set_empty {1},re_node_set_init_empty {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,cur_idx,def{3091},use{3097},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_add_next_nodes,dfa,def{3089},use{3102,3107,3109,3114,3133,3145,3147},dvars{next_node,ok,naccepted,REG_ESPACEmctx,type},pointers{mctx},cfuncs{re_acquire_state {2},re_node_set_insert {2},check_node_accept_bytes {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,dest_nodes,def{2676},use{2677,2682,2686,2687},dvars{err},pointers{},cfuncs{re_acquire_state_context {3},re_node_set_free {1},re_node_set_init_union {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,dest_state,def{2648,2661},use{2665,2678},dvars{err},pointers{mctx},cfuncs{re_node_set_init_union {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,new_dest_nodes,def{2619,2654},use{2668,2679,2697,2701},dvars{err},pointers{subexp_len},cfuncs{transit_state_bkref {2},check_subexp_matching_top {2},re_node_set_init_union {3},re_acquire_state_context {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,bkref_ent,def{2649,2650},use{2651,2653,2657,2658},dvars{dest_str_idx,subexp_len},pointers{bkc_idx,mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,node,def{2618},use{2622,2625,2629,2651},dvars{},pointers{node_idx,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,dest_str_idx,def{2615,2657},use{2659},dvars{context},pointers{},cfuncs{re_string_context_at {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,node_idx,def{2616},use{2618,2636,2651},dvars{err},pointers{},cfuncs{get_subexp {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,bkc_idx,def{2615,2635},use{2645,2650,2653,2657,2658},dvars{dest_str_idx,subexp_len},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,err,def{2609,2636,2677,2697,2701,2707},use{2637,2668,2671,2680,2686,2689,2699,2702,2709},dvars{},pointers{},cfuncs{re_acquire_state_context {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,prev_nelem,def{2615,2662},use{2695},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,cur_str_idx,def{2611},use{2627,2636,2651,2657,2698},dvars{dest_str_idx,err,context},pointers{},cfuncs{check_subexp_matching_top {3},get_subexp {3},re_string_context_at {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,mctx,def{2606,2667,2685},use{2608,2611,2627,2628,2635,2636,2645,2650,2659,2660,2661,2662,2663,2668,2670,2678,2686,2688,2695,2697,2701},dvars{mctx,prev_nelem,err,bkc_idx,context},pointers{dest_nodes,context,dfa,new_dest_nodes,err,re_acquire_state_context},cfuncs{transit_state_bkref {1},check_subexp_matching_top {1},get_subexp {1},re_string_context_at {3},re_string_context_at {1},re_string_cur_idx {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,i,def{2610},use{2613},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,subexp_len,def{2647,2653},use{2654,2668,2679,2694,2697,2701},dvars{err,mctx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,context,def{2617,2627,2659},use{2629,2669,2686,2697,2701},dvars{err},pointers{},cfuncs{re_acquire_state_context {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,dfa,def{2608},use{2618,2643,2655,2656,2668,2686},dvars{},pointers{mctx},cfuncs{re_acquire_state_context {2},assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_bkref,nodes,def{2606},use{2613,2616,2663,2695},dvars{node_idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,errerr,def{3200},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,cur_node,def{3184},use{3185,3186,3190,3200},dvars{errerr,err,outside_node},pointers{},cfuncs{check_arrival_expand_ecl_sub {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,new_nodes,def{3172},use{3176,3190,3193,3200,3204,3210},dvars{cur_nodes,errerr,err},pointers{},cfuncs{check_arrival_expand_ecl_sub {2},re_node_set_free {1},re_node_set_merge {1},re_node_set_alloc {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,outside_node,def{3171,3186},use{3187},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,type,def{3168},use{3186,3201},dvars{errerr,outside_node},pointers{},cfuncs{check_arrival_expand_ecl_sub {5},find_subexp_node {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,err,def{3170,3176,3190},use{3177,3178,3191,3194,3202,3205},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,idx,def{3171},use{3182},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,ex_subexp,def{3168},use{3186,3201},dvars{errerr,outside_node},pointers{},cfuncs{check_arrival_expand_ecl_sub {4},find_subexp_node {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,cur_nodes,def{3167,3210},use{3174,3176,3182,3184,3209},dvars{cur_node,err},pointers{},cfuncs{re_node_set_free {1},re_node_set_alloc {2},assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,eclosure,def{3185},use{3186,3190},dvars{err,outside_node},pointers{cur_node,dfa},cfuncs{re_node_set_merge {2},find_subexp_node {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl,dfa,def{3167},use{3185,3186,3200},dvars{errerr,outside_node},pointers{},cfuncs{check_arrival_expand_ecl_sub {1},find_subexp_node {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,REGS_UNALLOCATEDnew_end,def{539},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,new_end,def{536},use{540,546},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,REGS_UNALLOCATEDregs,def{521,527,545},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,need_regs,def{511},use{518,521,527,533,535,539,547},dvars{REGS_UNALLOCATEDnew_end,REGS_UNALLOCATEDregs},pointers{},cfuncs{re_realloc {3},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,new_start,def{535},use{537,542,545},dvars{REGS_UNALLOCATEDregs},pointers{},cfuncs{re_free {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,i,def{510},use{559,564},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,regs_allocated,def{507},use{516,529,552},dvars{},pointers{},cfuncs{assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,rval,def{509,555},use{567},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,nregs,def{506},use{511,554,559},dvars{need_regs},pointers{},cfuncs{assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,pmatch,def{506},use{561,562},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_copy_regs,regs,def{506,518,546,547,561,562,565},use{519,522,524,533,535,539,554,564},dvars{REGS_UNALLOCATEDnew_end},pointers{pmatch,new_end,need_regs},cfuncs{assert {1},re_realloc {1},re_free {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,clean_state_log_if_needed,err,def{1758,1759},use{1760,1761},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,clean_state_log_if_needed,top,def{1751},use{1764,1766,1767},dvars{},pointers{},cfuncs{memset {0},memset {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,clean_state_log_if_needed,next_state_log_idx,def{1749},use{1753,1755,1759,1764,1767,1768},dvars{err},pointers{},cfuncs{memset {0},extend_buffers {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,clean_state_log_if_needed,mctx,def{1749,1768},use{1751,1753,1754,1755,1756,1759,1766},dvars{err,top},pointers{next_state_log_idx},cfuncs{memset {1},extend_buffers {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,type,def{2181,2184},use{2188},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,sctx,def{2164},use{2186,2208,2209,2210,2211,2217,2218,2234,2236},dvars{err,local_sctx},pointers{},cfuncs{merge_state_array {2},re_node_set_init_copy {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,local_sctx,def{2170,2217,2222,2223,2242},use{2215,2218,2224,2230,2231,2237,2242,2243,2252,2254},dvars{local_sctx,ok,err},pointers{},cfuncs{re_node_set_free {1},re_node_set_remove {1},merge_state_array {3},sift_states_backward {2},re_node_set_insert {1},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,cur_state,def{2199,2230},use{2242},dvars{local_sctx},pointers{local_sctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,dst_node,def{2197,2205},use{2210,2212},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,str_idx,def{2165},use{2171,2186,2204,2212,2223,2238},dvars{err,local_sctx,to_idx},pointers{},cfuncs{merge_state_array {4},search_cur_bkref_entry {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,node_idx,def{2169},use{2178},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,entry,def{2182,2191,2246},use{2201,2203,2248},dvars{subexp_len},pointers{enabled_idx,first_idx,mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,err,def{2168,2218,2227,2231,2236,2250},use{2219,2232,2239,2257},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,ok,def{2198,2224},use{2225},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,REG_NOERRORlocal_sctx,def{2176},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,candidates,def{2165},use{2178,2183},dvars{node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,mctx,def{2164},use{2167,2171,2184,2191,2211,2231,2236,2246},dvars{err,type},pointers{},cfuncs{sift_states_backward {1},search_cur_bkref_entry {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,subexp_len,def{2195,2203},use{2204,2205},dvars{dst_node,to_idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,first_idx,def{2171},use{2173,2191,2192,2203},dvars{subexp_len,enabled_idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,enabled_idx,def{2180,2192},use{2224,2243,2246,2248},dvars{ok},pointers{},cfuncs{re_node_set_remove {2},re_node_set_insert {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,node,def{2169,2183},use{2186,2201,2211,2222},dvars{local_sctx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,to_idx,def{2196,2204},use{2208,2212},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_bkref,dfa,def{2167},use{2184,2205,2206,2236},dvars{err,type},pointers{mctx},cfuncs{merge_state_array {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,errcontext,def{3050},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,errmctx,def{3006,3057},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,errerr,def{2969,3042},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,REG_ESPACEpath,def{2948},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,REG_ESPACEnew_array,def{2945},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,REG_ESPACEnew_alloc,def{2942},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,cls_nodeREG_MISSINGsubexp_num,def{2932},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,last_node,def{2922},use{3070},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,incr_alloc,def{2938},use{2940,2942},dvars{REG_ESPACEnew_alloc},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,next_nodes,def{2928},use{2966,2969,2972,2981,2986,2990,2992,2996,3000,3003,3011,3014,3018,3026,3029,3034,3036,3039,3042,3046,3051,3054,3060},dvars{errcur_state,errerr,err},pointers{},cfuncs{re_node_set_merge {1},re_node_set_empty {1},re_acquire_state_context {3},expand_bkref_cache {2},re_node_set_init_copy {1},check_arrival_add_next_nodes {4},re_node_set_free {1},check_arrival_expand_ecl {2},re_node_set_init_empty {1},re_node_set_init_1 {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,new_alloc,def{2939},use{2943,2945,2949,2954,2959},dvars{mctx,str_idx,REG_ESPACEnew_array},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,backup_state_log,def{2929,2957},use{3066},dvars{},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,null_cnt,def{2926,3058},use{3009,3058},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,err,def{2925,2966,2981,2992,3014,3024,3036},use{2967,2968,2970,2973,2982,2983,2994,2997,3000,3001,3004,3016,3019,3027,3030,3037,3040,3044,3047,3051,3052,3055},dvars{errcur_state},pointers{},cfuncs{re_acquire_state_context {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,old_alloc,def{2937},use{2940,2942,2950,2951},dvars{REG_ESPACEnew_alloc},pointers{},cfuncs{memset {0},memset {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,dfa,def{2924},use{2932,2969,3000,3036,3051},dvars{err,errerr,errcur_state,cls_nodeREG_MISSINGsubexp_num},pointers{mctx},cfuncs{re_acquire_state_context {2},check_arrival_expand_ecl {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,last_str,def{2922},use{2934,2938,3009},dvars{incr_alloc},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,new_array,def{2936},use{2946,2948,2950},dvars{REG_ESPACEpath},pointers{},cfuncs{memset {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,path,def{2921,2949,3063},use{2934,2937,2945,2951,2954,2959},dvars{REG_ESPACEnew_array,str_idx,old_alloc},pointers{str_idx,new_alloc},cfuncs{memset {0},re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,cur_nodes,def{2928,3061},use{3070},dvars{},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,errcur_state,def{2978,3000},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,cur_state,def{2927,3051},use{2979,2981,2988,3001,3006,3022,3025,3052,3057,3058},dvars{null_cnt,errmctx,err},pointers{context,dfa,next_nodes,err,re_acquire_state_context},cfuncs{check_arrival_add_next_nodes {3},re_node_set_init_copy {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,str_idx,def{2926,2954},use{2960,2963,2964,2978,2988,2992,3009,3015,3024,3033,3042,3050,3061,3063},dvars{cur_nodes,errcontext,errerr,err,errcur_state,context},pointers{},cfuncs{check_arrival_add_next_nodes {2},expand_bkref_cache {3},re_string_context_at {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,top_node,def{2921},use{2966},dvars{err},pointers{},cfuncs{re_node_set_init_1 {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,backup_cur_idx,def{2926,2958},use{3067},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,context,def{2930,2963},use{3000,3051,3057,3058},dvars{null_cnt,errmctx,errcur_state},pointers{},cfuncs{re_acquire_state_context {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,top_str,def{2922},use{2954,2964,2988},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,subexp_num,def{2926},use{2969,2993,3036,3043},dvars{err,errerr},pointers{},cfuncs{expand_bkref_cache {4},check_arrival_expand_ecl {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,type,def{2922},use{2969,2993,3036,3043},dvars{err,errerr},pointers{},cfuncs{expand_bkref_cache {5},check_arrival_expand_ecl {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival,mctx,def{2921,2959,2960,3066,3067},use{2924,2932,2934,2938,2957,2958,2963,2969,2978,2992,3000,3009,3012,3015,3024,3036,3042,3050,3051,3061,3062,3066},dvars{mctx,err,cur_state,errcur_state,incr_alloc,context,errcontext,backup_cur_idx,errerr,cls_nodeREG_MISSINGsubexp_num},pointers{backup_state_log,backup_cur_idx,str_idx,path},cfuncs{check_arrival_add_next_nodes {1},re_node_set_merge {2},expand_bkref_cache {1},re_string_context_at {3},re_string_context_at {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,type,def{2100,2144},use{2101,2104,2145},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,node,def{2099,2123,2143},use{2103,2106,2124,2126,2131,2151},dvars{err,cls_node,ops_node},pointers{},cfuncs{sub_epsilon_src_nodes {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,cls_node,def{2096,2106},use{2120,2125,2127},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,subexp_idx,def{2085,2092},use{2102,2105,2147},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,ops_node,def{2095,2103},use{2111,2113},dvars{err},pointers{},cfuncs{sub_epsilon_src_nodes {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,err,def{2080,2113,2131,2151},use{2115,2116,2133,2134,2153,2154},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,node_idx,def{2081},use{2097,2121,2135,2141},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,str_idx,def{2078},use{2089,2093},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,limits,def{2077},use{2083,2087},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,ent,def{2086,2087},use{2089,2093},dvars{},pointers{limits,bkref_ents},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,lim_idx,def{2081},use{2083},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,candidates,def{2077},use{2114,2132,2152},dvars{err},pointers{},cfuncs{sub_epsilon_src_nodes {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,dest_nodes,def{2076},use{2097,2099,2113,2121,2123,2131,2141,2143,2151},dvars{err,node},pointers{},cfuncs{sub_epsilon_src_nodes {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,bkref_ents,def{2078},use{2087},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_limits,dfa,def{2076},use{2092,2100,2102,2105,2113,2124,2126,2131,2144,2147,2151},dvars{err,type,subexp_idx},pointers{},cfuncs{sub_epsilon_src_nodes {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_iter_mb,dfa,def{2267},use{2270,2273},dvars{errnaccepted},pointers{mctx},cfuncs{check_node_accept_bytes {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_iter_mb,max_str_idx,def{2265},use{2271},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_iter_mb,mctx,def{2264},use{2267,2270},dvars{errnaccepted},pointers{},cfuncs{check_node_accept_bytes {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_iter_mb,str_idx,def{2265},use{2270,2271},dvars{errnaccepted},pointers{},cfuncs{check_node_accept_bytes {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_iter_mb,naccepted,def{2268,2277},use{2271,2277,2280},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_iter_mb,node_idx,def{2265},use{2270},dvars{errnaccepted},pointers{},cfuncs{check_node_accept_bytes {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_iter_mb,errnaccepted,def{2270},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_iter_mb,sctx,def{2264},use{2272},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state,trtabletrtable,def{2325},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state,ch,def{2298},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state,context,def{2328,2329},use{2333},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state,trtable,def{2297,2321},use{2322,2323,2326,2334,2336},dvars{},pointers{state},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state,state,def{2295},use{2302,2304,2321,2325,2339},dvars{trtabletrtable,err},pointers{},cfuncs{transit_state_mb {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state,NULLch,def{2318},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state,mctx,def{2294},use{2304,2318,2330,2331,2332,2339},dvars{context,NULLch,err},pointers{},cfuncs{re_string_context_at {2},re_string_context_at {1},re_string_cur_idx {2},re_string_fetch_byte {1},transit_state_mb {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state,err,def{2294,2304,2341},use{2305},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search,regs,def{328},use{330},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search,range,def{327},use{330},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search,start,def{326},use{330},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search,length,def{326},use{330},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search,string,def{325},use{330},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search,bufp,def{324},use{330},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search,,def{323},use{330,331},dvars{},pointers{},cfuncs{re_search_stub {8},re_search_stub {7},re_search_stub {6},re_search_stub {5},re_search_stub {4},re_search_stub {3},re_search_stub {2},re_search_stub {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,idx,def{1918},use{1919},dvars{},pointers{},cfuncs{re_node_set_remove_at {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,dest_nodes,def{1879},use{1898,1901,1918,1919},dvars{},pointers{},cfuncs{re_node_set_remove_at {1},re_node_set_contains {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,edst1,def{1894},use{1897,1898},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,dfa,def{1879},use{1884,1892,1894,1895,1896,1904},dvars{err,edst2,edst1},pointers{},cfuncs{re_node_set_add_intersect {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,except_nodes,def{1885},use{1886,1903,1907,1916,1922},dvars{err},pointers{},cfuncs{re_node_set_free {1},re_node_set_add_intersect {1},re_node_set_init_empty {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,inv_eclosure,def{1884},use{1887,1889,1897,1900,1913,1915},dvars{cur_node},pointers{node,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,err,def{1883,1903},use{1905,1908},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,cur_node,def{1889,1915},use{1890,1904,1916,1918},dvars{err},pointers{},cfuncs{re_node_set_contains {2},re_node_set_add_intersect {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,ecl_idx,def{1882},use{1887,1913},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,edst2,def{1895},use{1899,1900,1901},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,candidates,def{1880},use{1903},dvars{err},pointers{},cfuncs{re_node_set_add_intersect {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,sub_epsilon_src_nodes,node,def{1879},use{1884,1890},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,add_epsilon_src_nodes,state,def{1856},use{1860,1862,1867,1874},dvars{err},pointers{},cfuncs{re_node_set_merge {1},re_node_set_alloc {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,add_epsilon_src_nodes,err,def{1853,1862,1867},use{1856,1857,1858,1863,1869},dvars{},pointers{},cfuncs{re_acquire_state {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,add_epsilon_src_nodes,candidates,def{1851},use{1873},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,add_epsilon_src_nodes,dest_nodes,def{1850},use{1856,1862,1865,1868,1873},dvars{err},pointers{},cfuncs{re_node_set_merge {2},re_node_set_alloc {2},re_acquire_state {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,add_epsilon_src_nodes,i,def{1854},use{1865},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,add_epsilon_src_nodes,dfa,def{1850},use{1856,1868},dvars{err},pointers{},cfuncs{re_node_set_merge {2},re_acquire_state {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_init,mctx,def{4197,4200,4211,4221,4222},use{4212,4221},dvars{},pointers{n},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_init,REG_NOERRORmctx,def{4199},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_init,n,def{4197},use{4201,4207,4210,4211,4220,4222},dvars{mctx,REG_ESPACEmctx},pointers{},cfuncs{re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_init,max_object_size,def{4204},use{4207},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_init,REG_ESPACEmctx,def{4210,4220},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_init,eflags,def{4197},use{4199},dvars{REG_NOERRORmctx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_array,merged_set,def{1786},use{1787,1791,1792},dvars{errdst,err},pointers{},cfuncs{re_acquire_state {3},re_node_set_free {1},re_node_set_init_union {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_array,err,def{1779,1787},use{1789,1790,1791,1793,1794},dvars{errdst},pointers{},cfuncs{re_acquire_state {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_array,dst,def{1775,1783},use{1782,1787},dvars{err},pointers{src},cfuncs{re_node_set_init_union {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_array,src,def{1776},use{1783,1784,1787,1788},dvars{err},pointers{},cfuncs{re_node_set_init_union {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_array,st_idx,def{1778},use{1780},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_array,num,def{1776},use{1780},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_array,errdst,def{1791},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_array,dfa,def{1775},use{1791},dvars{errdst},pointers{},cfuncs{re_acquire_state {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,next_char_idx,def{1172},use{1174,1176,1179,1208},dvars{next_start_idx,err},pointers{},cfuncs{extend_buffers {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,cur_str_idxmatch_last,def{1163},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,REG_ERRORcur_state,def{1187},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,init_stateerr,def{1122},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,next_start_idx,def{1120,1208},use{1234},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,at_init_state,def{1119,1139,1210},use{1205},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,match_last,def{1116,1222},use{1236},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,err,def{1114,1140,1146,1179},use{1123,1127,1141,1142,1147,1148,1180,1182,1187,1189,1196,1201},dvars{REG_ERRORmctxstate_logNULLmatchfl_longest_matchcur_state,REG_ERRORcur_state},pointers{},cfuncs{merge_state_with_log {1},transit_state {1},assert {1},acquire_init_state_context {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,p_match_first,def{1111,1226},use{1119,1233,1234},dvars{at_init_state},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,cur_state,def{1118,1123,1189},use{1125,1133,1140,1144,1146,1154,1156,1157,1171,1179,1187,1189,1191,1201,1207,1213,1217,1218,1222},dvars{REG_ERRORmctxstate_logNULLmatchfl_longest_matchcur_state,cur_state,REG_ERRORcur_state,match_last,err},pointers{merge_state_with_log,mctx,cur_str_idx,err},cfuncs{merge_state_with_log {3},transit_state {3},transit_state_bkref {2},check_subexp_matching_top {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,REG_ERRORmctxstate_logNULLmatchfl_longest_matchcur_state,def{1201},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,fl_longest_match,def{1110},use{1159,1227},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,old_state,def{1171},use{1207},dvars{},pointers{cur_state},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,match,def{1115,1164,1223},use{1164,1223},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,dfa,def{1113},use{1137},dvars{},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,cur_str_idx,def{1117},use{1120,1123,1133,1140,1146,1157,1160,1163,1187},dvars{REG_ERRORcur_state,cur_str_idxmatch_last,err,mctx,next_start_idx},pointers{},cfuncs{acquire_init_state_context {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_matching,mctx,def{1110,1133},use{1113,1117,1123,1131,1140,1146,1157,1169,1172,1174,1175,1176,1177,1179,1187,1188,1189,1201,1218,1219,1222},dvars{REG_ERRORmctxstate_logNULLmatchfl_longest_matchcur_state,REG_ERRORcur_state,match_last,err},pointers{cur_state},cfuncs{merge_state_with_log {2},transit_state {2},extend_buffers {1},transit_state_bkref {1},check_subexp_matching_top {1},acquire_init_state_context {2},re_string_cur_idx {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_backward,errerr,def{1645},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_backward,cur_dest,def{1634},use{1642,1645,1658,1661,1666,1675,1681},dvars{errerr,err},pointers{},cfuncs{re_node_set_empty {1},build_sifted_states {4},re_node_set_free {1},update_cur_sifted_state {4},re_node_set_init_1 {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_backward,mctx,def{1629},use{1637,1645,1654,1664,1666,1675},dvars{err,errerr},pointers{},cfuncs{build_sifted_states {1},update_cur_sifted_state {1},assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_backward,str_idx,def{1633},use{1645,1650,1657,1662,1666,1675},dvars{err,errerr},pointers{},cfuncs{build_sifted_states {3},memset {0},update_cur_sifted_state {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_backward,err,def{1631,1642,1666,1675,1679},use{1643,1644,1646,1667,1676,1682},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_backward,null_cnt,def{1632,1653},use{1653,1654},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,sift_states_backward,sctx,def{1629},use{1633,1642,1645,1653,1656,1666,1675},dvars{null_cnt,errerr,err,str_idx},pointers{},cfuncs{build_sifted_states {2},memset {1},update_cur_sifted_state {2},re_node_set_init_1 {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,cur_dest,def{1688},use{1737},dvars{ok},pointers{},cfuncs{re_node_set_insert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,ok,def{1705,1737},use{1738},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,cur_src,def{1691},use{1701,1703},dvars{prev_node},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,type,def{1708},use{1709},dvars{},pointers{},cfuncs{IS_EPSILON_NODE {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,i,def{1692},use{1701},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,mctx,def{1687},use{1690,1691,1714,1721,1732},dvars{naccepted},pointers{},cfuncs{sift_states_iter_mb {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,str_idx,def{1688},use{1715,1721,1731,1734},dvars{to_idx,naccepted},pointers{},cfuncs{sift_states_iter_mb {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,prev_node,def{1703},use{1714,1721,1734,1737},dvars{ok,naccepted},pointers{},cfuncs{re_node_set_insert {2},sift_states_iter_mb {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,sctx,def{1687},use{1714,1715,1722,1729,1732},dvars{naccepted},pointers{},cfuncs{sift_states_iter_mb {5},sift_states_iter_mb {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,to_idx,def{1731},use{1733},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,dfa,def{1690},use{1708,1713,1721,1723,1733},dvars{type},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_sifted_states,naccepted,def{1704,1714,1724},use{1720,1724,1726,1731},dvars{to_idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,errerr,def{2881},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,REG_NOERRORerr,def{2876},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,errto_idx,def{2885},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,err,def{2873},use{2879,2880,2883,2884},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,bkref_node,def{2871},use{2877,2881},dvars{errerr,REG_NOERRORerr},pointers{},cfuncs{match_ctx_add_entry {2},check_arrival {5}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,sub_last,def{2871},use{2876,2877,2882,2885},dvars{errto_idx,errerr,REG_NOERRORerr},pointers{},cfuncs{match_ctx_add_entry {5},check_arrival {4},check_arrival {3},check_arrival {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,mctx,def{2870},use{2876,2881,2886},dvars{errerr,REG_NOERRORerr},pointers{},cfuncs{match_ctx_add_entry {1},check_arrival {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,bkref_str,def{2871},use{2877,2881,2885},dvars{errto_idx,errerr,REG_NOERRORerr},pointers{},cfuncs{match_ctx_add_entry {3},check_arrival {6}}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,to_idx,def{2874},use{2886},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,get_subexp_sub,sub_top,def{2870},use{2881,2885},dvars{errto_idx,errerr},pointers{},cfuncs{match_ctx_add_entry {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_regs,type,def{1560},use{1561,1572},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,update_regs,nmatch,def{1558},use{1566,1575,1583,1594},dvars{},pointers{},cfuncs{memcpy {0}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_regs,reg_num,def{1563,1574},use{1566,1575},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,update_regs,cur_node,def{1558},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,update_regs,,def{1624},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,update_regs,dfa,def{1557},use{1560,1563,1574,1587},dvars{reg_num,type},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,update_regs,cur_idx,def{1558},use{1568,1578,1580,1598},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,update_regs,pmatch,def{1557,1568,1569,1580,1598},use{1569,1578,1583,1594},dvars{},pointers{cur_idx},cfuncs{memcpy {1},memcpy {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_regs,prev_idx_match,def{1558},use{1583,1588,1594},dvars{},pointers{},cfuncs{memcpy {2},memcpy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos,boundaries,def{2051,2061},use{2062,2063,2067},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos,bkref_idx,def{2048},use{2068},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos,mctx,def{2046},use{2050,2067},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos,str_idx,def{2047},use{2054,2057,2061,2062},dvars{boundaries},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos,limit,def{2046},use{2050,2061},dvars{boundaries},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos,from_node,def{2047},use{2068},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos,lim,def{2050},use{2054,2057,2061,2062},dvars{boundaries},pointers{limit,mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos,subexp_idx,def{2047},use{2067},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match,regs,def{314},use{316},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match,start,def{313},use{316},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match,length,def{313},use{316},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match,string,def{312},use{316},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match,bufp,def{311},use{316},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match,,def{310},use{316},dvars{},pointers{},cfuncs{re_search_stub {8},re_search_stub {7},re_search_stub {6},re_search_stub {4},re_search_stub {3},re_search_stub {2},re_search_stub {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,free_fail_stack_return,fs_idx,def{1544},use{1545},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,free_fail_stack_return,fs,def{1540},use{1542,1545,1547,1548,1550},dvars{},pointers{},cfuncs{re_free {1},re_node_set_free {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,REG_ESPACEfs,def{1456},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,prev_idx_match_malloced,def{1442},use{1490,1500,1515,1526,1533},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,free_fail_stack_returnfscur_node,def{1494},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,reg_idx,def{1481},use{1484,1487},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,prev_idx_match,def{1441,1462,1465},use{1466,1473,1477,1491,1501,1516,1527,1534},dvars{},pointers{nmatch},cfuncs{re_free {1},update_regs {3},memcpy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,preg,def{1433},use{1436,1458},dvars{cur_node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,cur_node,def{1437,1458,1521},use{1477,1479,1507,1510,1512},dvars{REG_NOERRORcur_node},pointers{},cfuncs{proceed_next_node {5},update_regs {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,fs_body,def{1440},use{1450,1494,1508,1521},dvars{cur_node,REG_NOERRORcur_node,free_fail_stack_returnfscur_node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,pmatch,def{1434},use{1473,1475,1477,1479,1485,1494,1507,1521},dvars{cur_node,REG_NOERRORcur_node,free_fail_stack_returnfscur_node},pointers{},cfuncs{pop_fail_stack {4},update_regs {2},proceed_next_node {3},memcpy {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,idx,def{1437},use{1475,1477,1479,1494,1507,1521},dvars{cur_node,REG_NOERRORcur_node,free_fail_stack_returnfscur_node},pointers{},cfuncs{proceed_next_node {4},pop_fail_stack {2},update_regs {5}}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,REG_ESPACEprev_idx_match_malloced,def{1471},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,fs,def{1439,1450,1451},use{1451,1452,1468,1482,1492,1494,1508,1517,1520,1521,1535},dvars{cur_node,REG_NOERRORcur_node,free_fail_stack_returnfscur_node},pointers{fs_body},cfuncs{proceed_next_node {7},free_fail_stack_return {1},pop_fail_stack {1},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,REG_NOERRORcur_node,def{1507},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,dfa,def{1436},use{1458,1477},dvars{cur_node},pointers{preg},cfuncs{update_regs {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,eps_via_nodes,def{1438},use{1459,1489,1495,1499,1508,1514,1522,1525,1532},dvars{cur_node,REG_NOERRORcur_node,free_fail_stack_returnfscur_node},pointers{},cfuncs{proceed_next_node {6},pop_fail_stack {5},re_node_set_free {1},re_node_set_init_empty {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,fl_backtrack,def{1434},use{1448},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,nmatch,def{1433},use{1445,1461,1462,1465,1473,1477,1484,1487,1494,1507,1521},dvars{cur_node,REG_NOERRORcur_node,free_fail_stack_returnfscur_node,prev_idx_match},pointers{},cfuncs{pop_fail_stack {3},update_regs {6},proceed_next_node {2},memcpy {0},alloca {1},re_malloc {2},assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,set_regs,mctx,def{1433},use{1446,1479,1507},dvars{REG_NOERRORcur_node},pointers{},cfuncs{proceed_next_node {1},assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2,string2,def{354},use{359},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2,string1,def{354},use{359},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2,bufp,def{353},use{359},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2,,def{352},use{359,360},dvars{},pointers{},cfuncs{re_search_2_stub {10},re_search_2_stub {9},re_search_2_stub {8},re_search_2_stub {7},re_search_2_stub {6},re_search_2_stub {5},re_search_2_stub {4},re_search_2_stub {3},re_search_2_stub {2},re_search_2_stub {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_state_context,context,def{1266,1270},use{1272},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_state_context,idx,def{1263},use{1270},dvars{context},pointers{},cfuncs{re_string_context_at {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_state_context,i,def{1265},use{1271},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_state_context,state,def{1263},use{1268,1271,1272,1273},dvars{},pointers{},cfuncs{assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_state_context,mctx,def{1262},use{1270,1272},dvars{context},pointers{},cfuncs{re_string_context_at {3},re_string_context_at {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_sublast,new_array,def{4385},use{4388,4390},dvars{NULLsubtop},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_sublast,NULLsubtop,def{4390},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_sublast,str_idx,def{4379},use{4398},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_sublast,new_entry,def{4381,4393,4397,4398},use{4394,4396,4401},dvars{},pointers{str_idx,node},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_sublast,node,def{4379},use{4397},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_sublast,new_alasts,def{4384},use{4387,4391},dvars{},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_sublast,subtop,def{4379,4391,4396},use{4382,4384,4385,4399},dvars{new_alasts},pointers{new_entry,new_alasts},cfuncs{re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,find_subexp_node,cls_node,def{2905},use{2906,2909},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_subexp_node,cls_idx,def{2902},use{2903},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_subexp_node,type,def{2900},use{2907},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_subexp_node,subexp_idx,def{2900},use{2908},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_subexp_node,nodes,def{2899},use{2903,2905},dvars{cls_node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_subexp_node,node,def{2906},use{2907,2908},dvars{},pointers{cls_node,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_subexp_node,dfa,def{2899},use{2906},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_matching_top,err,def{2467,2482},use{2483,2484},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_matching_top,node_idx,def{2466},use{2474},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_matching_top,mctx,def{2462},use{2465,2482},dvars{err},pointers{},cfuncs{match_ctx_add_subtop {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_matching_top,str_idx,def{2463},use{2482},dvars{err},pointers{},cfuncs{match_ctx_add_subtop {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_matching_top,cur_nodes,def{2462},use{2474,2476},dvars{node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_matching_top,node,def{2476},use{2482},dvars{err},pointers{},cfuncs{match_ctx_add_subtop {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_subexp_matching_top,dfa,def{2465},use{2477,2478,2479,2480},dvars{},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_recover_state,max,def{2436},use{2441},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_recover_state,cur_state,def{2433,2447},use{2449,2450},dvars{},pointers{err,mctx,merge_state_with_log},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_recover_state,mctx,def{2431},use{2436,2437,2443,2445,2447},dvars{max},pointers{},cfuncs{merge_state_with_log {2},re_string_skip_bytes {1},re_string_cur_idx {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,find_recover_state,cur_str_idx,def{2437},use{2441},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,find_recover_state,err,def{2431},use{2447,2449},dvars{},pointers{},cfuncs{merge_state_with_log {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,__compat_regexec,pmatch[],def{271},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,__compat_regexec,nmatch,def{270},use{273},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,__compat_regexec,string,def{270},use{273},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,__compat_regexec,eflags,def{271},use{274},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,__compat_regexec,preg,def{269},use{273},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,pmatch,def{904,907,908,930,934,947,948,955,957},use{907,915,925,942,943,947,948},dvars{err},pointers{},cfuncs{set_regs {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,reg_idx,def{900},use{903,924,945,952,953},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,pstate,def{870},use{871},dvars{mctx},pointers{mctx},cfuncs{check_halt_state_context {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,offset,def{814,822},use{815,827},dvars{},pointers{},cfuncs{re_string_byte_at {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,REG_NOMATCHstart,def{692},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,t,def{661},use{746,748},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,string,def{637},use{698,785,797},dvars{err},pointers{},cfuncs{re_string_allocate {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,ch,def{652,784,796,826},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,fastmap,def{658},use{658,745,771,778,786,798,828},dvars{match_kind},pointers{start,last_start,preg},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,extra_nmatch,def{650,668},use{669,945},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,match_last,def{649,856,882},use{858,860,867,872,893,908},dvars{pmatch,mctx},pointers{},cfuncs{assert {1},check_halt_state_context {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,match_first,def{648,735},use{754,770,772,777,779,782,784,794,796,800,802,814,817,822,826,830,831,842,857,942,943},dvars{err,offset,ch},pointers{},cfuncs{check_matching {3},re_string_reconstruct {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,start,def{638},use{659,690,735,740,741,742,747,857},dvars{match_last,right_lim,left_lim,incr,match_first},pointers{},cfuncs{check_matching {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,left_lim,def{644,741},use{754,794,802,831},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,mctx,def{654,656,665,703,704,705,725,733,736,855,867,871},use{664,698,707,719,725,726,814,815,817,822,827,842,849,856,870,871,877,889,908,915,928,931,932,933,935,936,937,940,963,965,966},dvars{mctx,pmatch,offset,match_last,err},pointers{},cfuncs{match_ctx_free {1},re_string_reconstruct {1},set_regs {2},re_string_destruct {1},match_ctx_clean {1},assert {1},check_matching {1},match_ctx_init {1},check_halt_state_context {1},re_malloc {2},prune_impossible_nodes {1},re_free {1},re_string_byte_at {1},re_string_allocate {1},memset {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,match_kind,def{647,744},use{762},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,sb,def{651,743},use{746,849},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,fl_longest_match,def{646,696},use{856},dvars{match_last},pointers{},cfuncs{check_matching {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,right_lim,def{644,742},use{754,770,777,782,831},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,dfa,def{643},use{654,665,672,673,674,685,686,687,696,698,700,707,715,743,868,874,875,916,951,953,964},dvars{err,sb,fl_longest_match,mctx},pointers{preg},cfuncs{match_ctx_init {3},set_regs {5},re_string_allocate {7},re_string_allocate {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,length,def{637},use{679,698,784,796,826},dvars{ch,err},pointers{},cfuncs{re_string_allocate {3},assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,err,def{642,698,707,721,728,753,817,833,842,862,877,915},use{701,708,819,843,878,880,894,917,967},dvars{},pointers{},cfuncs{assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,last_start,def{638},use{659,679,690,692,740,741,742,747,857},dvars{match_last,left_lim,incr,right_lim,REG_NOMATCHstart},pointers{},cfuncs{check_matching {3},assert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,eflags,def{640},use{707,736,818,842},dvars{mctx,err},pointers{},cfuncs{re_string_reconstruct {3},match_ctx_init {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,pmatch[],def{639},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,nmatch,def{639},use{668,669,696,715,868,874,898,903,913,915,924,952},dvars{err,fl_longest_match,extra_nmatch},pointers{},cfuncs{set_regs {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,incr,def{645,740},use{830},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,stop,def{638},use{703,704},dvars{mctx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_internal,preg,def{636},use{643,658,659,660,661,665,668,672,688,696,698,699,700,705,707,743,745,746,868,874,913,915,916},dvars{err,fl_longest_match,match_kind,sb,extra_nmatch,mctx,t},pointers{},cfuncs{set_regs {1},re_string_allocate {6},re_string_allocate {5}}
libvirt-1.1.0/gnulib/lib/regexec.c,pop_fail_stack,num,def{1416},use{1417},dvars{},pointers{},cfuncs{REG_VALID_INDEX {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,pop_fail_stack,regs,def{1414},use{1419,1421},dvars{},pointers{},cfuncs{re_free {1},memcpy {2},memcpy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,pop_fail_stack,nregs,def{1413},use{1419},dvars{},pointers{},cfuncs{memcpy {0}}
libvirt-1.1.0/gnulib/lib/regexec.c,pop_fail_stack,eps_via_nodes,def{1414,1422},use{1420},dvars{},pointers{},cfuncs{re_node_set_free {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,pop_fail_stack,pidx,def{1413,1418},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,pop_fail_stack,fs,def{1413},use{1416,1418,1419,1421,1422,1423},dvars{eps_via_nodes,pidx,num},pointers{},cfuncs{re_free {1},memcpy {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,REG_ESPACEsifted_states,def{990},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,sctx,def{979},use{1008,1010,1011,1039,1040,1041},dvars{ret},pointers{},cfuncs{re_node_set_free {1},sift_states_backward {2},sift_ctx_init {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,sifted_states,def{977,1052},use{991,1008,1014,1030,1039,1044,1051,1057},dvars{ret},pointers{},cfuncs{re_free {1},merge_state_array {2},sift_ctx_init {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,ret,def{976,993,1001,1010,1021,1030,1040,1046,1055},use{1012,1034,1042,1059},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,match_last,def{975,983},use{987,990,998,1007,1009,1018,1019,1028,1031,1039,1054,1075},dvars{ret,context,halt_node,lim_states,REG_ESPACEsifted_states},pointers{},cfuncs{merge_state_array {4},check_halt_state_context {3},sift_ctx_init {5},memset {0},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,halt_node,def{975,984,1026},use{1008,1039,1053},dvars{},pointers{},cfuncs{sift_ctx_init {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,context,def{1075},use{1076,1078,1080,1082,1084,1089},dvars{},pointers{},cfuncs{re_acquire_state_context {4},IS_NEWLINE_CONTEXT {1},IS_BEGBUF_CONTEXT {1},IS_ORDINARY_CONTEXT {1},IS_WORD_CONTEXT {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,dfa,def{974},use{996,1030,1072,1077,1079,1081,1083,1087,1088,1093,1096},dvars{ret},pointers{mctx},cfuncs{re_acquire_state_context {3},re_acquire_state_context {2},merge_state_array {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,lim_states,def{978,998,1033},use{999,1006,1008,1014,1030,1032,1039,1058},dvars{ret},pointers{},cfuncs{re_free {1},merge_state_array {3},sift_ctx_init {3},memset {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,prune_impossible_nodes,mctx,def{972,1051,1053,1054},use{974,981,983,984,1010,1024,1025,1026,1027,1030,1040,1050,1071,1075},dvars{REG_ESPACEsifted_states,ret,context,halt_node,match_last},pointers{match_last,halt_node,sifted_states},cfuncs{re_string_context_at {3},re_string_context_at {1},re_free {1},assert {1},check_halt_state_context {2},check_halt_state_context {1},sift_states_backward {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,err,def{3246,3247},use{3250,3251},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,errcur_node,def{3253},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,ok,def{3226,3233},use{3234,3240},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,cur_node,def{3223},use{3224,3233,3239},dvars{REG_ESPACEok,ok},pointers{},cfuncs{re_node_set_insert {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,REG_ESPACEok,def{3239},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,ex_subexp,def{3221},use{3229,3249},dvars{err},pointers{},cfuncs{check_arrival_expand_ecl_sub {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,type,def{3221},use{3228,3231,3249},dvars{err},pointers{},cfuncs{check_arrival_expand_ecl_sub {5}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,dst_nodes,def{3220},use{3224,3233,3239,3247},dvars{REG_ESPACEok,err,ok},pointers{},cfuncs{check_arrival_expand_ecl_sub {2},re_node_set_insert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,target,def{3221},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_arrival_expand_ecl_sub,dfa,def{3220},use{3228,3229,3242,3244,3247,3248,3253},dvars{errcur_node,err},pointers{},cfuncs{check_arrival_expand_ecl_sub {3},check_arrival_expand_ecl_sub {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,dest_state,def{2548,2581},use{2582,2587,2595},dvars{err},pointers{mctx},cfuncs{re_node_set_init_union {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,errcontext,def{2591},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,pstate,def{2535},use{2541,2544},dvars{cur_node_idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,dest_idx,def{2546,2570},use{2573,2591},dvars{errcontext,err},pointers{},cfuncs{re_string_context_at {2},clean_state_log_if_needed {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,cur_node_idx,def{2544},use{2564},dvars{naccepted},pointers{},cfuncs{check_node_accept_bytes {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,new_nodes,def{2543,2579},use{2583,2587},dvars{err,dest_nodes},pointers{},cfuncs{re_node_set_init_union {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,naccepted,def{2545,2564},use{2566,2570,2571,2573,2581,2591,2592},dvars{errcontext,dest_state,err,dest_idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,dest_nodes,def{2543,2583},use{2586,2594,2596},dvars{err},pointers{},cfuncs{re_acquire_state_context {3},re_node_set_free {1},re_node_set_init_union {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,err,def{2538,2573,2586},use{2574,2575,2588,2589,2594,2597,2598},dvars{},pointers{},cfuncs{re_acquire_state_context {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,mctx,def{2535,2571,2593},use{2537,2555,2556,2557,2564,2565,2570,2572,2573,2579,2581,2587,2591,2592,2594,2597},dvars{mctx,errcontext,new_nodes,err,dest_idx,naccepted,context},pointers{naccepted,dest_nodes,context,dfa,err,re_acquire_state_context},cfuncs{clean_state_log_if_needed {1},re_string_cur_idx {1},re_string_cur_idx {2},re_string_cur_idx {4},check_node_accept_bytes {3},re_string_context_at {3},re_string_context_at {2},re_string_context_at {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,i,def{2539},use{2541},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,context,def{2547,2555},use{2559,2594},dvars{},pointers{},cfuncs{re_acquire_state_context {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,transit_state_mb,dfa,def{2537},use{2550,2553,2558,2564,2577,2579,2594},dvars{new_nodes,naccepted},pointers{mctx},cfuncs{re_acquire_state_context {2},assert {1},check_node_accept_bytes {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,NULLnext_nodes,def{2387},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,log_nodes,def{2371,2377},use{2382,2387},dvars{NULLnext_nodes,err},pointers{},cfuncs{re_node_set_init_union {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,next_nodes,def{2371},use{2381,2395,2400},dvars{err},pointers{},cfuncs{re_acquire_state_context {3},re_node_set_free {1},re_node_set_init_union {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,context,def{2370,2391},use{2395},dvars{},pointers{},cfuncs{re_acquire_state_context {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,dfa,def{2355},use{2395,2403},dvars{},pointers{mctx},cfuncs{re_acquire_state_context {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,cur_idx,def{2356},use{2358,2361,2409},dvars{err},pointers{},cfuncs{check_subexp_matching_top {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,table_nodes,def{2371,2380},use{2381,2399},dvars{err},pointers{},cfuncs{re_node_set_init_union {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,pstate,def{2369,2376},use{2377},dvars{log_nodes},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,err,def{2352,2381,2408,2416},use{2383,2395,2410,2417},dvars{},pointers{},cfuncs{re_acquire_state_context {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,NULLnext_state,def{2419},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,next_state,def{2353,2394},use{2360,2365,2376,2378,2380,2391,2392,2393,2394,2403,2408,2414,2416,2423},dvars{err,next_state,context,table_nodes,pstate},pointers{next_nodes,err,re_acquire_state_context,context,dfa,mctx},cfuncs{transit_state_bkref {2},check_subexp_matching_top {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,merge_state_with_log,mctx,def{2352,2360,2361,2365},use{2355,2356,2358,2363,2376,2377,2391,2392,2393,2394,2395,2408,2416,2419},dvars{next_state,NULLnext_state,context,err,log_nodes},pointers{cur_idx,next_state},cfuncs{transit_state_bkref {1},check_subexp_matching_top {1},re_string_context_at {2},re_string_context_at {1},re_string_cur_idx {2},re_string_cur_idx {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_set_registers,ends,def{588},use{595},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_set_registers,,def{584},use{601},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_set_registers,num_regs,def{587},use{590,593,600},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_set_registers,starts,def{588},use{594},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_set_registers,regs,def{586,593,594,595,600,601},use{600},dvars{},pointers{,ends,starts,num_regs},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_set_registers,bufp,def{585,592,599},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,REG_ERRORdest_node,def{1361},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,subexp_idx,def{1340},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,naccepted,def{1330,1335,1341},use{1346,1350,1355,1368,1372},dvars{pidx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,candidate,def{1303},use{1304,1307,1314,1318},dvars{dest_node},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,edests,def{1294},use{1301,1303,1361},dvars{REG_ERRORdest_node,candidate},pointers{dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,cur_nodes,def{1293},use{1304},dvars{},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,type,def{1331},use{1338},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,eps_via_nodes,def{1285},use{1296,1313,1319,1358,1377},dvars{ok},pointers{},cfuncs{re_node_set_empty {1},re_node_set_insert {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,nregs,def{1284},use{1318},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,pidx,def{1285,1372},use{1318,1335,1349,1369,1372,1373},dvars{naccepted},pointers{},cfuncs{check_node_accept_bytes {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,ok,def{1290,1296,1358},use{1297,1359},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,buf,def{1348},use{1349},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,node,def{1285},use{1296,1335,1358,1369},dvars{naccepted,ok},pointers{},cfuncs{check_node_accept_bytes {2},re_node_set_insert {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,regs,def{1284},use{1318,1341,1344,1349},dvars{naccepted},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,dfa,def{1288},use{1291,1294,1331,1334,1335,1340,1361,1369,1371},dvars{REG_ERRORdest_node,dest_node,subexp_idx,naccepted,type},pointers{mctx},cfuncs{check_node_accept_bytes {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,dest_node,def{1295,1307,1357,1371},use{1306,1313,1326,1363,1364,1375,1378},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,fs,def{1286},use{1317,1318,1342,1373},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,i,def{1289},use{1301},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,proceed_next_node,mctx,def{1284},use{1288,1293,1335,1348,1361,1362,1369,1373,1374},dvars{REG_ERRORdest_node,naccepted},pointers{},cfuncs{re_string_get_buffer {1},check_node_accept_bytes {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,subexp_idx,def{1938,1941},use{1944,1947},dvars{src_pos,dst_pos},pointers{},cfuncs{check_dst_limits_calc_pos {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,src_bkref_idx,def{1935},use{1948},dvars{src_pos},pointers{},cfuncs{check_dst_limits_calc_pos {6}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,src_node,def{1929},use{1947},dvars{src_pos},pointers{},cfuncs{check_dst_limits_calc_pos {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,src_pos,def{1932,1946},use{1954},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,lim_idx,def{1932},use{1936},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,dfa,def{1931},use{1941},dvars{subexp_idx},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,src_idx,def{1929},use{1935,1947},dvars{src_pos},pointers{},cfuncs{check_dst_limits_calc_pos {5},search_cur_bkref_entry {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,dst_pos,def{1932,1943},use{1954},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,dst_node,def{1929},use{1944},dvars{dst_pos},pointers{},cfuncs{check_dst_limits_calc_pos {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,dst_idx,def{1929},use{1934,1944},dvars{dst_pos},pointers{},cfuncs{check_dst_limits_calc_pos {5},search_cur_bkref_entry {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,mctx,def{1928},use{1931,1934,1935,1940,1941,1943,1946},dvars{src_pos,dst_pos,subexp_idx},pointers{},cfuncs{check_dst_limits_calc_pos {1},search_cur_bkref_entry {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,ent,def{1939,1940},use{},dvars{},pointers{limits,mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,limits,def{1928},use{1936,1940,1943,1946},dvars{src_pos,dst_pos},pointers{},cfuncs{check_dst_limits_calc_pos {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits,dst_bkref_idx,def{1934},use{1945},dvars{dst_pos},pointers{},cfuncs{check_dst_limits_calc_pos {6}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_cur_sifted_state,candidates,def{1808},use{1816,1820,1827,1839,1841},dvars{err},pointers{},cfuncs{sift_states_bkref {4},check_subexp_limits {3},add_epsilon_src_nodes {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_cur_sifted_state,err,def{1807,1820,1827,1841},use{1821,1822,1829,1830,1834,1835,1836,1842,1843},dvars{errsctx},pointers{},cfuncs{re_acquire_state {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_cur_sifted_state,errsctx,def{1834},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,update_cur_sifted_state,dest_nodes,def{1804},use{1812,1820,1827,1834},dvars{errsctx,err},pointers{},cfuncs{re_acquire_state {3},check_subexp_limits {2},add_epsilon_src_nodes {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_cur_sifted_state,errREG_NOERRORcandidates,def{1809},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,update_cur_sifted_state,mctx,def{1802},use{1806,1809,1810,1820,1827,1828,1834,1839,1841},dvars{errsctx,err,errREG_NOERRORcandidates},pointers{},cfuncs{sift_states_bkref {1},check_subexp_limits {5}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_cur_sifted_state,str_idx,def{1803},use{1828,1841},dvars{err},pointers{},cfuncs{sift_states_bkref {3},check_subexp_limits {6}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_cur_sifted_state,sctx,def{1803,1813},use{1825,1827,1841},dvars{err},pointers{},cfuncs{sift_states_bkref {2},check_subexp_limits {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,update_cur_sifted_state,dfa,def{1806},use{1820,1827,1834},dvars{errsctx,err},pointers{mctx},cfuncs{re_acquire_state {2},check_subexp_limits {1},add_epsilon_src_nodes {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_entry,REG_ESPACEmctx,def{4290},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_entry,new_entry,def{4282,4283},use{4285,4290},dvars{REG_ESPACEmctx},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_entry,mctx,def{4277,4297,4299,4300,4301,4302,4312,4315,4317},use{4280,4283,4284,4287,4290,4291,4292,4293,4295,4296,4297,4315,4316},dvars{REG_ESPACEmctx},pointers{str_idx,to,from,node},cfuncs{memset {0},memset {1},re_free {1},re_realloc {3},re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_entry,str_idx,def{4277},use{4296,4300},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_entry,to,def{4278},use{4302,4313,4316,4317},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_entry,from,def{4277},use{4301,4313,4316,4317},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,match_ctx_add_entry,node,def{4277},use{4299},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,push_fail_stack,num,def{1390},use{1391},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,push_fail_stack,err,def{1389,1407},use{1408},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,push_fail_stack,eps_via_nodes,def{1387},use{1407},dvars{err},pointers{},cfuncs{re_node_set_init_copy {2},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,push_fail_stack,new_array,def{1393,1394},use{1396,1399},dvars{},pointers{fs},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,push_fail_stack,nregs,def{1387},use{1403,1406,1407},dvars{err},pointers{},cfuncs{memcpy {0},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,push_fail_stack,fs,def{1386,1399,1401,1402,1403},use{1390,1391,1394,1395,1398,1399,1404,1406,1407},dvars{err,fs,new_array,num},pointers{str_idx,nregs,dest_node,new_array},cfuncs{re_node_set_init_copy {1},memcpy {1},realloc {0},realloc {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,push_fail_stack,dest_node,def{1386},use{1402},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,push_fail_stack,regs,def{1387},use{1404,1406},dvars{},pointers{},cfuncs{memcpy {2},memcpy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,push_fail_stack,str_idx,def{1386},use{1401},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,dfa,def{425},use{437,501},dvars{},pointers{bufp},cfuncs{__libc_lock_unlock {1},__libc_lock_lock {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,last_start,def{427,433,435},use{432,434,435,443,472},dvars{result},pointers{},cfuncs{re_search_internal {5}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,eflags,def{423},use{439,440,473},dvars{result},pointers{},cfuncs{re_search_internal {9}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,rval,def{422,468,475,479,486,494,497},use{468,475,486,489,502},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,result,def{419,472},use{478,479},dvars{rval},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,nregs,def{421,451,455,460,464},use{451,456,460,465,473,483,494,497},dvars{rval,bufp,result},pointers{},cfuncs{re_copy_regs {3},re_search_internal {7},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,pmatch,def{420,465},use{466,473,483,493,494,497,499},dvars{rval,result},pointers{nregs},cfuncs{re_free {1},assert {1},re_copy_regs {2},re_search_internal {8}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,ret_len,def{417},use{491},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,regs,def{416,447,459},use{450,453,455,480,483},dvars{nregs},pointers{},cfuncs{re_copy_regs {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,start,def{416},use{427,430,432,434,443,472,493,494},dvars{rval,result,last_start},pointers{},cfuncs{assert {1},re_search_internal {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,range,def{416},use{427,432,434},dvars{last_start},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,stop,def{416},use{472},dvars{result},pointers{},cfuncs{re_search_internal {6}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,length,def{415},use{430,432,433,472},dvars{result,last_start},pointers{},cfuncs{re_search_internal {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,string,def{415},use{472},dvars{result},pointers{},cfuncs{re_search_internal {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_stub,bufp,def{414,483},use{425,439,440,443,444,446,452,453,464,472,484,485},dvars{result,nregs},pointers{nregs,pmatch,regs,re_copy_regs},cfuncs{re_copy_regs {4},re_search_internal {1},re_compile_fastmap {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,len,def{375},use{378,385,395,402},dvars{rval,str},pointers{},cfuncs{re_search_stub {3},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,rval,def{374,402},use{405},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,length2,def{369},use{375,378,382,390,393},dvars{len},pointers{},cfuncs{memcpy {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,str,def{373,395,398,400},use{402},dvars{rval},pointers{string1,string2,s},cfuncs{re_search_stub {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,ret_len,def{371},use{403},dvars{rval},pointers{},cfuncs{re_search_stub {8}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,regs,def{370},use{402},dvars{rval},pointers{},cfuncs{re_search_stub {7}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,start,def{370},use{402},dvars{rval},pointers{},cfuncs{re_search_stub {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,range,def{370},use{402},dvars{rval},pointers{},cfuncs{re_search_stub {5}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,s,def{376,385},use{387,390,392,393,395,404},dvars{},pointers{len},cfuncs{re_free {1},memcpy {1},__mempcpy {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,stop,def{371},use{378,402},dvars{rval},pointers{},cfuncs{re_search_stub {6}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,length1,def{368},use{375,378,383,390,392,393},dvars{len},pointers{},cfuncs{memcpy {1},memcpy {3},__mempcpy {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,string2,def{369},use{390,393,398},dvars{},pointers{},cfuncs{memcpy {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,string1,def{368},use{390,392,400,402},dvars{rval},pointers{},cfuncs{memcpy {2},__mempcpy {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_search_2_stub,bufp,def{367},use{402},dvars{rval},pointers{},cfuncs{re_search_stub {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,length,def{230,241,246},use{251,252,254,255},dvars{err},pointers{},cfuncs{re_search_internal {6},re_search_internal {5},re_search_internal {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,eflags,def{227},use{235,238,252,255},dvars{err},pointers{},cfuncs{re_search_internal {9}}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,start,def{230,240,245},use{245,251,254},dvars{err},pointers{},cfuncs{re_search_internal {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,preg,def{223},use{232,250,251,254},dvars{err},pointers{myreg,regex,reg},cfuncs{re_search_internal {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,nmatch,def{225},use{255},dvars{err},pointers{},cfuncs{re_search_internal {7}}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,string,def{224},use{246,251,254},dvars{err,length},pointers{groups,info,path,lineStart},cfuncs{re_search_internal {2},strlen {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,err,def{229,251,254},use{257},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,pmatch,def{226},use{240,241,255},dvars{err,length,start},pointers{},cfuncs{re_search_internal {8}}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,dfa,def{232},use{249,256},dvars{},pointers{preg},cfuncs{__libc_lock_unlock {1},__libc_lock_lock {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,regexec,,def{222},use{240,241,257,264},dvars{length,start},pointers{},cfuncs{SHLIB_COMPAT {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match_2,string2,def{340},use{344},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match_2,string1,def{340},use{344},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match_2,bufp,def{339},use{344},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_match_2,,def{338},use{344,345},dvars{},pointers{},cfuncs{re_search_2_stub {10},re_search_2_stub {9},re_search_2_stub {8},re_search_2_stub {6},re_search_2_stub {5},re_search_2_stub {4},re_search_2_stub {3},re_search_2_stub {2},re_search_2_stub {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,falsedest_states_malloced,def{3445},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,need_word_trtable,def{3359,3480},use{3495,3564},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,dest_states_word,def{3447,3474,3489},use{3448,3476,3479,3520,3551},dvars{dest_states_nl},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,falsetruefalseerr,def{3414},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,dests_ch,def{3367,3373,3390},use{3397,3492,3515,3546,3560},dvars{ndests},pointers{dests_alloc},cfuncs{bitset_merge {2},group_nodes_into_DFAstates {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,follows,def{3366},use{3414,3438,3455,3462,3467,3474,3482,3489,3490,3522,3550,3575},dvars{trtable,dest_states_word,err,dest_states_nl,falsetruefalseerr},pointers{},cfuncs{re_acquire_state_context {3},re_node_set_empty {1},re_node_set_merge {1},re_node_set_free {1},re_node_set_alloc {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,next_node,def{3454,3459},use{3460,3462},dvars{err},pointers{},cfuncs{re_node_set_merge {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,dests_node,def{3366,3372,3389},use{3397,3440,3457,3577},dvars{ndests},pointers{},cfuncs{re_node_set_free {1},group_nodes_into_DFAstates {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,dest_states,def{3365,3427,3431,3467},use{3433,3437,3447,3468,3472,3479,3489,3490,3522,3550,3573},dvars{dest_states_nl,dest_states_word},pointers{follows,dfa,err,re_acquire_state_context},cfuncs{free {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,i,def{3357},use{3439,3440,3452,3507,3538,3576,3577},dvars{},pointers{},cfuncs{re_node_set_free {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,trtable,def{3364,3501,3520,3522,3532,3550,3551,3563,3565},use{3393,3397,3407,3501,3503,3532,3534},dvars{trtable,ndests},pointers{dest_states,dest_states_word,dest_states_nl,state},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,ndests,def{3363,3397},use{3398,3403,3414,3421,3426,3428,3432,3439,3447,3448,3452,3559,3576},dvars{dest_states_word,dest_states,dest_states_nl,falsetruefalseerr},pointers{},cfuncs{malloc {1},alloca {1},re_node_set_alloc {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,err,def{3356,3462},use{3415,3463,3467,3468,3474,3476,3482,3484},dvars{dest_states_nl,dest_states_word},pointers{},cfuncs{re_acquire_state_context {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,dest_states_malloced,def{3362},use{3436,3572},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,dests_node_malloced,def{3361},use{3400,3441,3579},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,mask,def{3360},use{3515,3519,3546},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,dests_alloc,def{3381,3384},use{3381,3384,3385,3389,3390,3397,3401,3442,3580},dvars{ndests,dests_node},pointers{},cfuncs{free {1},re_malloc {1},alloca {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,acceptable,def{3368},use{3449,3492,3556},dvars{},pointers{},cfuncs{bitset_merge {1},bitset_empty {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,elem,def{3360},use{3509,3511,3540,3542},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,falsedests_node_malloced,def{3387},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,ch,def{3358},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,j,def{3357},use{3457,3559},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,state,def{3354,3393,3405},use{3397,3407,3501,3532},dvars{ndests},pointers{trtable},cfuncs{group_nodes_into_DFAstates {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,dest_states_nl,def{3448,3482,3490},use{3484,3563,3565},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,build_trtable,dfa,def{3354},use{3397,3459,3462,3467,3474,3479,3482,3519},dvars{dest_states_word,err,next_node,dest_states_nl,ndests},pointers{},cfuncs{re_acquire_state_context {2},re_node_set_merge {2},group_nodes_into_DFAstates {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_node_context,type,def{1245},use{1247},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_node_context,context,def{1243},use{1251},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_node_context,constraint,def{1246},use{1249,1251},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_node_context,node,def{1243},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_halt_node_context,dfa,def{1243},use{1245,1246},dvars{constraint,type},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_exec,s,def{617},use{619},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,re_exec,,def{616},use{617,619},dvars{},pointers{},cfuncs{regexec {4},regexec {2},regexec {1}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,cpos,def{1985,2010},use{2013,2015},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,dst,def{1984,2001},use{2002,2012},dvars{cpos},pointers{},cfuncs{check_dst_limits_calc_pos_1 {4}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,node_idx,def{1969},use{1973},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,node,def{1975},use{1987},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,dfa,def{1967},use{1968,1976,2001,2027,2032},dvars{dst},pointers{mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,from_node,def{1965},use{1968,2002},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,eclosures,def{1968},use{1973,1975},dvars{node},pointers{from_node,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,subexp_idx,def{1965},use{1990,1992,2011,2018,2020,2027,2032},dvars{cpos},pointers{},cfuncs{check_dst_limits_calc_pos_1 {3}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,ent,def{1981},use{1987,1991,2019,2022},dvars{},pointers{bkref_idx,mctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,bkref_idx,def{1965},use{1979,1981,2012},dvars{cpos},pointers{},cfuncs{check_dst_limits_calc_pos_1 {5}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,boundaries,def{1964},use{2004,2011,2015,2027,2032,2041},dvars{cpos},pointers{},cfuncs{check_dst_limits_calc_pos_1 {2}}
libvirt-1.1.0/gnulib/lib/regexec.c,check_dst_limits_calc_pos_1,mctx,def{1964},use{1967,1981,2001,2011},dvars{cpos,dst},pointers{},cfuncs{check_dst_limits_calc_pos_1 {1}}
