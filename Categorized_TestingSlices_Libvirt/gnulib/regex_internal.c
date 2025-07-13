libvirt-1.1.0/gnulib/lib/regex_internal.c,free_state,state,def{1602},use{1604,1605,1606,1608,1609,1611,1612,1613,1614},dvars{},pointers{},cfuncs{re_free {1},re_node_set_free {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,statenew_state,def{1507},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,state,def{1499},use{1500,1502,1503},dvars{},pointers{spot},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,NULLhash,def{1494},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,hasherr,def{1487},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,i,def{1484},use{1497},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,new_state,def{1482},use{1508,1511},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,hash,def{1481},use{1495,1500,1507},dvars{statenew_state},pointers{},cfuncs{create_ci_newstate {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,spot,def{1483,1495},use{1497,1499},dvars{},pointers{hash,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,nodes,def{1479},use{1489,1494,1502,1507},dvars{statenew_state,NULLhash},pointers{},cfuncs{create_ci_newstate {2},calc_state_hash {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,dfa,def{1478},use{1495,1507},dvars{statenew_state},pointers{},cfuncs{create_ci_newstate {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state,err,def{1478,1491,1509},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,statenew_state,def{1554},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,state,def{1547},use{1548,1549,1550,1551},dvars{},pointers{spot},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,NULLhash,def{1542},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,i,def{1532},use{1545},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,dfa,def{1526},use{1543,1554},dvars{statenew_state},pointers{},cfuncs{create_cd_newstate {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,new_stateerr,def{1535},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,new_state,def{1530},use{1555,1558},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,hash,def{1529},use{1543,1548,1554},dvars{statenew_state},pointers{},cfuncs{create_cd_newstate {4}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,context,def{1527},use{1542,1549,1554},dvars{statenew_state,NULLhash},pointers{},cfuncs{create_cd_newstate {3},calc_state_hash {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,spot,def{1531,1543},use{1545,1547},dvars{},pointers{hash,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,nodes,def{1527},use{1537,1542,1550,1554},dvars{statenew_state,NULLhash},pointers{},cfuncs{create_cd_newstate {2},calc_state_hash {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_acquire_state_context,err,def{1526,1539,1556},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,REG_MISSINGnew_nodes,def{1426},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,max_object_size,def{1420},use{1423},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,new_eclosures,def{1416,1433},use{1435,1440},dvars{},pointers{new_nodes_alloc,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,new_indices,def{1415,1431},use{1434,1438},dvars{},pointers{new_nodes_alloc,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,new_nodes_alloc,def{1414},use{1423,1426,1430,1431,1432,1433,1437,1438,1439,1440,1441},dvars{REG_MISSINGdfa,dfa,REG_MISSINGnew_nodes},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,token,def{1410},use{1443,1447,1448},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,REG_MISSINGdfa,def{1429,1437},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,new_nodes,def{1417},use{1427,1429},dvars{REG_MISSINGdfa},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,new_edests,def{1416,1432},use{1435,1439},dvars{},pointers{new_nodes_alloc,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,new_nexts,def{1415,1430},use{1434,1437},dvars{REG_MISSINGdfa},pointers{new_nodes_alloc,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_dfa_add_node,dfa,def{1410,1438,1439,1440,1441,1443,1444,1446,1450},use{1412,1414,1426,1430,1431,1432,1433,1444,1451,1452,1453},dvars{REG_MISSINGnew_nodes,new_nodes_alloc},pointers{token,new_nodes_alloc,new_eclosures,new_edests,new_indices},cfuncs{re_node_set_init_empty {1},re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_remove_at,idx,def{1395},use{1397,1400},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_remove_at,set,def{1395,1401},use{1397,1399,1400},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_merge,REG_ESPACEdest,def{1210},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_merge,new_buffer,def{1207},use{1208,1210},dvars{REG_ESPACEdest},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_merge,delta,def{1201,1244},use{1245,1250,1257,1268},dvars{},pointers{},cfuncs{memcpy {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_merge,sbase,def{1201},use{1238,1239,1244,1267},dvars{delta},pointers{},cfuncs{memcpy {2},memcpy {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_merge,dest,def{1199,1211,1216,1230,1256,1263},use{1204,1206,1207,1214,1217,1227,1229,1239,1242,1243,1250,1253,1267},dvars{is,id,new_alloc},pointers{src,new_alloc},cfuncs{memcpy {2},memcpy {1},re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_merge,is,def{1201,1243},use{1225,1228,1235,1238,1239,1244},dvars{delta},pointers{},cfuncs{memcpy {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_merge,new_alloc,def{1206},use{1207,1211},dvars{},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_merge,id,def{1201,1242},use{1225,1228,1232,1264},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_merge,src,def{1199},use{1202,1204,1206,1216,1217,1227,1229,1230,1239,1242,1243},dvars{is,id,new_alloc},pointers{},cfuncs{memcpy {3},memcpy {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_union,id,def{1149},use{1180,1182,1186,1188,1190},dvars{},pointers{},cfuncs{memcpy {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_union,i2,def{1149},use{1167,1175,1184,1186,1187,1188},dvars{},pointers{},cfuncs{memcpy {3},memcpy {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_union,i1,def{1149},use{1167,1178,1180,1181,1182},dvars{},pointers{},cfuncs{memcpy {3},memcpy {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_union,src2,def{1147},use{1150,1152,1161,1162,1167,1169,1171,1174,1184,1186,1187,1188},dvars{},pointers{},cfuncs{memcpy {3},memcpy {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_union,src1,def{1146},use{1150,1152,1159,1160,1167,1169,1174,1176,1178,1180,1181,1182},dvars{},pointers{},cfuncs{memcpy {3},memcpy {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_union,dest,def{1146,1152,1153,1171,1176,1190},use{1153,1154,1160,1162,1164,1180,1186},dvars{},pointers{id,src2,src1},cfuncs{memcpy {1},re_node_set_init_empty {1},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,retpstr,def{55},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,init_buf_len,def{43,48},use{51},dvars{ret},pointers{},cfuncs{re_string_realloc_buffers {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,ret,def{42,51},use{52,53},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,dfa,def{40},use{46,47,49,55,56,58},dvars{retpstr,init_len},pointers{},cfuncs{re_string_construct_common {6}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,icase,def{40},use{49},dvars{},pointers{},cfuncs{re_string_construct_common {5}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,trans,def{40},use{49},dvars{},pointers{},cfuncs{re_string_construct_common {4}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,init_len,def{39,47},use{46,48},dvars{init_buf_len},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,len,def{39},use{48,49,58},dvars{init_buf_len},pointers{},cfuncs{re_string_construct_common {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,str,def{39},use{49,57},dvars{},pointers{},cfuncs{re_string_construct_common {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_allocate,pstr,def{39,56,57,58,59},use{49,51,57},dvars{ret},pointers{dfa},cfuncs{re_string_realloc_buffers {1},re_string_construct_common {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,sbase,def{1058,1076},use{1110,1136},dvars{delta},pointers{},cfuncs{memcpy {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,new_elems,def{1067},use{1068,1070},dvars{REG_ESPACEdest},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,new_alloc,def{1066},use{1067,1071,1076,1079},dvars{id,sbase},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,id,def{1058,1079,1108},use{1085,1086,1088,1116,1130},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,REG_ESPACEdest,def{1070},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,i2,def{1058,1078},use{1091,1098},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,i1,def{1058,1077},use{1091,1103},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,src1,def{1055},use{1059,1064,1066,1076,1077,1082,1085,1088,1089,1096,1108,1109},dvars{is,sbase,id,i1,new_alloc},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,delta,def{1058,1110},use{1115,1116,1123,1136},dvars{},pointers{},cfuncs{memcpy {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,src2,def{1056},use{1059,1064,1066,1076,1078,1082,1096,1109},dvars{is,sbase,i2,new_alloc},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,is,def{1058,1109},use{1110},dvars{delta},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_add_intersect,dest,def{1055,1071,1089,1122,1129},use{1064,1066,1067,1076,1079,1085,1088,1108,1109,1115,1119,1136},dvars{is,sbase,id,new_alloc},pointers{src1,new_alloc},cfuncs{memcpy {2},memcpy {1},re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_copy,REG_NOERRORdest,def{1032},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_copy,src,def{1030},use{1032,1033,1042},dvars{REG_NOERRORdest},pointers{},cfuncs{memcpy {3},memcpy {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_copy,dest,def{1030,1035,1036,1039},use{1036,1037,1042,1045},dvars{},pointers{},cfuncs{re_node_set_init_empty {1},memcpy {1},re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_2,REG_NOERRORset,def{1002},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_2,elem1,def{1000},use{1006,1009,1014,1016,1022},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_2,elem2,def{1000},use{1006,1014,1017,1021},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_2,set,def{1000,1003,1008,1009,1013,1016,1017,1021,1022},use{1002,1004,1008,1013},dvars{},pointers{elem2,elem1},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_1,REG_ESPACEREG_NOERRORset,def{986},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_1,elem,def{984},use{994},dvars{REG_ESPACEset},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_1,REG_ESPACEset,def{994},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_init_1,set,def{984,987,988,991},use{986,987,989},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert,new_elems,def{1301,1303},use{1304,1306},dvars{falseset},pointers{set},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert,idx,def{1285,1313},use{1313,1314},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert,falseset,def{1306},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert,elem,def{1283},use{1288,1293,1303,1311,1319,1324},dvars{new_elems},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert,set,def{1283,1293,1302,1315,1320,1324},use{1287,1288,1290,1294,1299,1303,1306,1311,1319,1325},dvars{falseset},pointers{elem},cfuncs{re_realloc {3},re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_fetch_byte_case,re_string_fetch_bytepstroff,def{896},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_fetch_byte_case,ch,def{884,897},use{899,904},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_fetch_byte_case,off,def{883},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_fetch_byte_case,pstr,def{875},use{877,878,881,893,894,896,897,900,902,903,908},dvars{ch,re_string_fetch_bytepstroff},pointers{},cfuncs{re_string_char_size_at {3},re_string_char_size_at {2},re_string_skip_bytes {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_destruct,pstr,def{913},use{916,917,919,920},dvars{},pointers{},cfuncs{re_free {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_upper_buffer,ch,def{538,540},use{541,542,544},dvars{},pointers{},cfuncs{toupper {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_upper_buffer,rawbuf_idxend_idx,def{534},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_upper_buffer,end_idx,def{533},use{536},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_upper_buffer,char_idx,def{533},use{536,546,547},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_upper_buffer,pstr,def{531,542,544,546,547},use{534,538,539,540},dvars{ch,rawbuf_idxend_idx},pointers{char_idx,ch},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,NULLerr,def{1632},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,err,def{1626,1658},use{1633,1659},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,hash,def{1623},use{1658},dvars{err},pointers{},cfuncs{register_state {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,type,def{1643},use{1644,1651,1653,1655},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,i,def{1625},use{1640},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,newstate,def{1627,1629,1652,1654,1656,1662},use{1630,1632,1635,1639,1647,1652,1654,1656,1658,1661,1664},dvars{err,NULLnewstate,NULLerr},pointers{},cfuncs{free_state {1},register_state {2},re_free {1},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,nodes,def{1622},use{1632,1639,1640,1642},dvars{NULLnewstate,NULLerr},pointers{},cfuncs{re_node_set_init_copy {2},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,node,def{1642},use{1643,1644,1647,1655},dvars{type},pointers{nodes,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,NULLnewstate,def{1639},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_ci_newstate,dfa,def{1622},use{1642,1658},dvars{err},pointers{},cfuncs{register_state {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_translate_buffer,ch,def{561},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_translate_buffer,end_idx,def{556,557},use{559},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_translate_buffer,buf_idx,def{556},use{559,565,566},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_translate_buffer,pstr,def{554,562,565,566},use{557,561},dvars{ch,end_idx},pointers{buf_idx},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_skip_chars,wc2,def{501},use{504,517},dvars{wc,mbclen},pointers{},cfuncs{__mbrtowc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_skip_chars,wc,def{495,510,512,517},use{510,521},dvars{last_wc},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_skip_chars,mbclen,def{494,504,513},use{506,509,513,519},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_skip_chars,prev_st,def{492,503},use{514},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_skip_chars,rawbuf_idx,def{493},use{499,502,504,512,519,522},dvars{wc,mbclen,remain_len},pointers{},cfuncs{__mbrtowc {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_skip_chars,last_wc,def{490,521},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_skip_chars,remain_len,def{502},use{505,509},dvars{mbclen},pointers{},cfuncs{__mbrtowc {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_skip_chars,new_raw_idx,def{490},use{499},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_skip_chars,pstr,def{490,514},use{502,503,504,505,512},dvars{prev_st,wc,mbclen,remain_len},pointers{prev_st},cfuncs{__mbrtowc {4},__mbrtowc {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,new_array,def{1590},use{1592,1594},dvars{REG_ESPACEspot},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,new_alloc,def{1589},use{1591,1595},dvars{},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,REG_ESPACEspot,def{1586,1594},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,elem,def{1580},use{1582},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,new_statenewstate,def{1574},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,i,def{1572},use{1578},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,err,def{1571,1575},use{1576},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,newstate,def{1567},use{1575,1578,1580,1582,1597},dvars{elem,err},pointers{},cfuncs{re_node_set_alloc {2},re_node_set_alloc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,spot,def{1570,1595,1597},use{1587,1589,1590},dvars{new_alloc},pointers{newstate,new_alloc},cfuncs{re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,hash,def{1568},use{1574,1586},dvars{REG_ESPACEspot,new_statenewstate},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,register_state,dfa,def{1567},use{1581,1586},dvars{REG_ESPACEspot},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct_common,dfa,def{172},use{180,181,182},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct_common,icase,def{171},use{178,179},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct_common,trans,def{171},use{177,179},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct_common,pstr,def{170,175,176,177,178,179,180,181,182,183,184},use{},dvars{},pointers{icase,trans,dfa,len},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct_common,REG_NOERRORpstr,def{174},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct_common,len,def{170},use{175,176,183},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct_common,str,def{170},use{174},dvars{REG_NOERRORpstr},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_realloc_buffers,new_offsets,def{148},use{149,151},dvars{REG_ESPACEpstr},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_realloc_buffers,REG_ESPACEpstr,def{145,151,161},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_realloc_buffers,REG_ESPACEnew_wcs,def{142},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_realloc_buffers,pstr,def{130,163},use{133,142,146,148,155},dvars{REG_ESPACEnew_wcs},pointers{new_buf_len},cfuncs{re_realloc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_realloc_buffers,max_object_size,def{138},use{139},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_realloc_buffers,new_mbs,def{157},use{159,161},dvars{REG_ESPACEpstr},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_realloc_buffers,new_buf_len,def{130},use{139,142,148,163},dvars{REG_ESPACEnew_wcs},pointers{},cfuncs{re_realloc {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_realloc_buffers,new_wcs,def{135},use{143,145},dvars{REG_ESPACEpstr},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,NULLnctx_nodes,def{1723},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,node,def{1694},use{1695,1696,1701},dvars{constraint,type},pointers{nodes,dfa},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,constraint,def{1696},use{1698,1710,1727},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,NULLerr,def{1682},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,err,def{1676,1734},use{1683,1735},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,type,def{1695},use{1698,1705,1707},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,nctx_nodes,def{1675},use{1723,1729,1730},dvars{},pointers{},cfuncs{re_node_set_remove_at {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,context,def{1673},use{1689,1727},dvars{NULLnewstate},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,hash,def{1673},use{1734},dvars{err},pointers{},cfuncs{register_state {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,NULLnewstate,def{1689},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,dfa,def{1672},use{1694,1734},dvars{err},pointers{},cfuncs{register_state {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,i,def{1675},use{1692,1729},dvars{},pointers{},cfuncs{re_node_set_remove_at {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,nodes,def{1672},use{1682,1690,1692,1694,1712,1720,1729,1734},dvars{err,NULLerr},pointers{},cfuncs{re_node_set_remove_at {1},re_node_set_init_copy {2},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,newstatenewstate,def{1679},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,create_cd_newstate,newstate,def{1677,1690,1706,1708,1714,1724,1738},use{1680,1682,1685,1701,1706,1708,1712,1715,1717,1720,1724,1729,1734,1737,1740},dvars{err,NULLerr},pointers{nodes},cfuncs{register_state {2},free_state {1},re_free {1},re_node_set_remove_at {1},re_node_set_init_copy {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,ch,def{859},use{866,870},dvars{},pointers{},cfuncs{isascii {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,off,def{856},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,i,def{744},use{745},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,idx,def{575},use{579,580,598,645,646,698,699,767,803,845,849,850,853,856,859,867},dvars{off,ch,re_string_peek_byte,re_string_peek_bytepstridxoff,offset},pointers{},cfuncs{re_string_is_single_byte_char {2},re_string_peek_byte {2},re_string_skip_chars {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,pp,def{741,747},use{752},dvars{mbclen},pointers{buf,p},cfuncs{__mbrtowc {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,mbclen,def{739,752},use{754,755,759},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,buf,def{738,746},use{747},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,p,def{712,720},use{724,728,732,733,737,741,754,759},dvars{mlen,wc},pointers{offset,raw},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,ret,def{813},use{814,815},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,raw,def{712,716},use{717,720,737,754,759},dvars{mlen},pointers{pstr},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,cur_state,def{735},use{751,753,757},dvars{mbclen},pointers{},cfuncs{__mbrtowc {4},memset {4},memset {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,re_string_peek_bytepstridxoff,def{853},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,wc,def{708,728,760},use{766,767,768,773,775,793},dvars{c},pointers{},cfuncs{IS_WIDE_NEWLINE {1},IS_WIDE_WORD_CHAR {1},re_string_skip_chars {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,pstr,def{575,588,589,590,591,592,593,594,597,624,639,645,646,647,656,659,663,667,673,698,699,700,703,759,767,769,772,781,785,791,794,803,830,832},use{579,580,585,586,590,591,592,593,596,604,608,610,614,616,622,624,630,631,633,634,635,636,637,638,647,648,650,651,655,656,660,662,664,673,676,677,678,680,681,682,683,684,686,694,696,700,703,705,710,716,717,718,719,720,724,726,737,742,746,757,759,767,770,772,776,778,780,782,783,790,791,792,793,794,796,800,801,804,805,809,811,813,818,822,824,825,826,827,832,844,845,848,849,850,853,855,856,859,866,867},dvars{re_string_peek_bytepstridxoff,re_string_peek_byte,pstr,buf,mlen,high,p,ch,off,c,end,prev_valid_len,offset},pointers{wc,c,raw,mid,p,re_string_context_at,mbclen,idx,prev_valid_len,offset,eflags},cfuncs{re_string_is_single_byte_char {2},re_string_is_single_byte_char {1},build_upper_buffer {1},re_string_peek_byte {1},memmove {1},memmove {2},memmove {3},build_wcs_upper_buffer {1},build_wcs_buffer {1},memset {1},memset {3},bitset_contain {1},re_string_skip_chars {1},BE {1},re_string_context_at {1},re_string_translate_buffer {1},assert {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,mid,def{613},use{615,617,623,624,631,648,649,650,654,655},dvars{low,high},pointers{},cfuncs{re_string_context_at {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,prev_valid_len,def{694},use{770},dvars{},pointers{},cfuncs{re_string_context_at {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,wcs_idx,def{707},use{780},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,high,def{610,615},use{613,621},dvars{mid},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,end,def{712,717,719},use{718,732},dvars{},pointers{pstr,offset,raw},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,low,def{610,617},use{613,621,638,662},dvars{mid},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,offset,def{577,580,598},use{601,604,614,616,622,630,631,633,634,635,636,637,639,645,646,648,659,673,677,678,681,682,683,684,698,699,716,717,719,720,754,759,801,804,805},dvars{pstr,end,raw},pointers{},cfuncs{re_string_context_at {2},memmove {3},memmove {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,c,def{790,793},use{794,796},dvars{},pointers{},cfuncs{IS_NEWLINE {1},bitset_contain {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,wc2,def{736},use{752,760},dvars{wc,mbclen},pointers{},cfuncs{__mbrtowc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,eflags,def{575},use{594,625,674,770},dvars{},pointers{},cfuncs{re_string_context_at {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_reconstruct,mlen,def{737},use{744,752},dvars{mbclen,i},pointers{},cfuncs{__mbrtowc {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,i,def{370,395,443},use{372,412,413,420,423,444,445},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,ch,def{342,370,374,458,461},use{343,345,462,469},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,mbcdlen,def{317,320,387,390},use{321,391,393,397,417,420,426,428,431},dvars{},pointers{},cfuncs{memcpy {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,wc,def{292,363},use{309,314,315,319,381,384,385,389},dvars{wcu,mbclen},pointers{},cfuncs{towupper {1},__mbrtowc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,buf,def{277,280,375},use{320,322,377,390,392,417},dvars{p,mbcdlen},pointers{},cfuncs{memcpy {2},wcrtomb {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,src_idx,def{274,325},use{380,419,423,427,432,445,447,465,466,481},dvars{p},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,byte_idx,def{274,283},use{290,303,307,311,322,325,330,331,334,356,357,361,366,367,374,375,381,392,397,412,417,431,436,439,451,480},dvars{buf,ch,prev_st,src_idx,mbclen,remain_len},pointers{},cfuncs{memcpy {2},memcpy {1},__mbrtowc {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,wcu,def{314,319,384,389},use{320,332,390,418,449,461},dvars{ch,mbcdlen},pointers{},cfuncs{wcrtomb {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,p,def{364,377,380},use{381,436,439},dvars{mbclen},pointers{},cfuncs{memcpy {2},__mbrtowc {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,prev_st,def{273,308,367},use{320,347,352,390,399,471,476},dvars{mbcdlen},pointers{},cfuncs{wcrtomb {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,mbclen,def{275,309,381},use{312,321,322,331,337,338,346,382,391,392,423,426,428,429,432,436,439,444,447,454,455,470},dvars{end_idx},pointers{},cfuncs{memcpy {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,end_idx,def{274,284,429},use{290,307,361,366},dvars{remain_len},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,remain_len,def{274,307,366},use{311,334,372,381,451},dvars{mbclen},pointers{},cfuncs{__mbrtowc {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_upper_buffer,pstr,def{271,298,302,332,335,343,345,347,352,356,357,399,405,413,414,418,419,422,424,445,449,452,462,465,469,471,476,480,481},use{278,283,284,288,294,295,299,308,310,311,322,330,331,338,342,367,368,372,374,375,380,381,392,397,403,405,407,410,414,417,426,427,428,429,430,436,439,441,455,458,460,461,464},dvars{buf,p,ch,prev_st,end_idx,mbclen,byte_idx},pointers{mbclen,i,byte_idx,src_idx,wcu,prev_st,ch},cfuncs{memcpy {2},memcpy {1},__mbrtowc {4},__mbrtowc {2},toupper {1},re_malloc {2},assert {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_alloc,CONTEXT_NEWLINEset,def{974},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_alloc,size,def{972},use{974,976,977},dvars{CONTEXT_NEWLINEset},pointers{},cfuncs{re_malloc {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_alloc,set,def{972,975,976},use{975,977},dvars{},pointers{size},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_context_at,wc_idx,def{941},use{946,948,949},dvars{},pointers{},cfuncs{REG_VALID_INDEX {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_context_at,tip_contextwc,def{952},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_context_at,c,def{929,961},use{962,964},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_context_at,wc,def{940},use{953,955},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_context_at,eflags,def{927},use{935},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_context_at,idx,def{927},use{930,934,941,961},dvars{c,wc_idx},pointers{},cfuncs{re_string_byte_at {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_context_at,input,def{927},use{933,934,938,942,950,952,953,955,961,962,964},dvars{c,tip_contextwc},pointers{},cfuncs{re_string_byte_at {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,calc_state_hash,hash,def{1460},use{1463,1464},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,calc_state_hash,context,def{1458},use{1460},dvars{hash},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,calc_state_hash,i,def{1461},use{1462},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,calc_state_hash,nodes,def{1458},use{1460,1462,1463},dvars{hash},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct,retpstr,def{80},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct,ret,def{70,76,89,96},use{77,78,90,91,97,98},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct,dfa,def{68},use{72,85,94,108},dvars{},pointers{},cfuncs{re_string_construct_common {6}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct,icase,def{68},use{72,82},dvars{},pointers{},cfuncs{re_string_construct_common {5}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct,trans,def{68},use{72,113},dvars{},pointers{},cfuncs{re_string_construct_common {4}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct,len,def{67},use{72,74,76,92},dvars{ret},pointers{},cfuncs{re_string_realloc_buffers {2},re_string_construct_common {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct,str,def{67},use{72,80},dvars{},pointers{},cfuncs{re_string_construct_common {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_string_construct,pstr,def{67,117,118},use{71,72,76,80,89,92,94,96,103,109,114},dvars{retpstr,ret},pointers{},cfuncs{re_string_translate_buffer {1},build_wcs_buffer {1},re_string_realloc_buffers {1},re_string_realloc_buffers {2},build_upper_buffer {1},build_wcs_upper_buffer {1},re_string_construct_common {3},memset {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,i,def{227},use{229},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,ch,def{227,231},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,p,def{220,234,237},use{238},dvars{mbclen},pointers{},cfuncs{__mbrtowc {2}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,wc,def{219,244,246},use{238,257},dvars{mbclen},pointers{},cfuncs{__mbrtowc {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,byte_idx,def{211},use{217,222,237,259,262,263},dvars{p,remain_len},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,mbclen,def{212,238,243},use{239,240,243,249},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,end_idx,def{211,216},use{217,222},dvars{remain_len},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,prev_st,def{210,223},use{247,252},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,buf,def{205,208,232},use{234},dvars{p},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,remain_len,def{211,222},use{229,238,259},dvars{mbclen},pointers{},cfuncs{__mbrtowc {3}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,build_wcs_buffer,pstr,def{202,247,252,257,260,262,263},use{206,216,223,225,229,231,232,237,238,240,244,245,246},dvars{wc,ch,p,buf,prev_st,mbclen,end_idx},pointers{byte_idx,wc,prev_st},cfuncs{__mbrtowc {4},assert {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert_last,mid,def{1384},use{1386,1388},dvars{right,idx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert_last,right,def{1381,1388},use{1382,1384},dvars{mid},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert_last,idx,def{1380,1386},use{1382,1384,1390},dvars{mid},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert_last,set1,def{1363},use{1364},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert_last,i,def{1363},use{1363},dvars{},pointers{},cfuncs{REG_VALID_INDEX {1}}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert_last,new_elems,def{1340,1342},use{1343,1345},dvars{falseset},pointers{set},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert_last,falseset,def{1345},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert_last,elem,def{1335},use{1349,1381,1385,1390},dvars{right},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/regex_internal.c,re_node_set_insert_last,set,def{1335,1341,1349},use{1338,1342,1345,1376,1381,1385,1390},dvars{right,falseset},pointers{elem},cfuncs{REG_VALID_NONZERO_INDEX {1},re_realloc {3},re_realloc {1}}
