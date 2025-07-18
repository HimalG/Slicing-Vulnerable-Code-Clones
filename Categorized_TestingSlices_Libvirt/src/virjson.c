libvirt-1.1.0/src/util/virjson.c,virJSONValueToStringOne,i,def{1029},use{1037,1052},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToStringOne,g,def{1027},use{1031,1035,1038,1043,1046,1050,1053,1056,1061,1067,1073,1078},dvars{},pointers{},cfuncs{VIR_DEBUG{4}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToStringOne,object,def{1026},use{1031,1033,1037,1039,1040,1043,1052,1053,1061,1062,1067,1068,1073},dvars{},pointers{},cfuncs{VIR_DEBUG{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFromString,i,def{1014},use{1015},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFromString,errstr,def{996},use{1002,1003},dvars{},pointers{outbuf,result,info},cfuncs{VIR_FREE{1},virReportError{3}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFromString,ret,def{971,1008},use{1022},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFromString,ATTRIBUTE_UNUSED,def{1140},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFromString,cfg,def{973},use{985},dvars{hand},pointers{},cfuncs{yajl_alloc{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFromString,parser,def{970},use{65,68,71,73,74,75,77,80,81,82,85,88,95,979,985,1004,1008,1013,1015,1016,1020},dvars{ret,hand},pointers{},cfuncs{VIR_DEBUG{2},VIR_FREE{1},virJSONValueFree{1},yajl_alloc{4},yajl_alloc{3}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFromString,hand,def{969,979,985},use{980,981,982,987,993,996,1011},dvars{},pointers{},cfuncs{yajl_free{1},yajl_get_error{1},yajl_config{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFromString,jsonstring,def{967},use{976,994,995,997,998,1002},dvars{},pointers{},cfuncs{virReportError{2},strlen{4},yajl_get_error{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleEndMap,parser,def{879},use{882,884,887,893,894,896},dvars{state},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleEndMap,state,def{880,887},use{888,889,893},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleEndMap,ctx,def{877},use{879},dvars{parser},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleEndArray,parser,def{929},use{932,934,937,943,944,946},dvars{state},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleEndArray,state,def{930,937},use{938,939,943},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleEndArray,ctx,def{927},use{929},dvars{parser},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleStartMap,value,def{851},use{65,68,71,73,74,75,77,80,81,82,85,88,95,855,858,859,865,869},dvars{parser},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleStartMap,parser,def{850,869,870},use{853,858,863,864,871},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleStartMap,ctx,def{848},use{850},dvars{parser},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleMapKey,parser,def{832},use{835,837,840},dvars{state},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleMapKey,stringLen,def{830},use{843},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleMapKey,state,def{833,840},use{841,843},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleMapKey,stringVal,def{829},use{835,843},dvars{},pointers{},cfuncs{VIR_DEBUG{3}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleMapKey,ctx,def{828},use{832},dvars{parser},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleNull,value,def{748},use{65,68,71,73,74,75,77,80,81,82,85,88,95,752,755,756},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleNull,parser,def{747},use{750,755},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleNull,ctx,def{745},use{747},dvars{parser},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserInsertValue,state,def{702,708},use{710,712,717,718,722,726,731},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserInsertValue,value,def{697},use{700,710,717,719,731,732},dvars{parser},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserInsertValue,parser,def{696,700},use{699,703,708},dvars{state},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectIsNull,key,def{681},use{417,425,687},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectIsNull,val,def{683,687},use{688,691},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectIsNull,object,def{681},use{417,421,424,425,426,684,687},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetBoolean,value,def{667},use{677},dvars{},pointers{info},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetBoolean,key,def{667},use{417,425,673},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetBoolean,val,def{669,673},use{674,677},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetBoolean,object,def{667},use{417,421,424,425,426,670,673},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberUlong,value,def{639},use{649},dvars{},pointers{cacheSize,status},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberUlong,key,def{639},use{417,425,645},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberUlong,val,def{641,645},use{646,649},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberUlong,object,def{639},use{417,421,424,425,426,642,645},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToString,ATTRIBUTE_UNUSED,def{1146,1147},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToString,conf,def{1097},use{1110},dvars{g},pointers{},cfuncs{yajl_gen_alloc{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToString,len,def{1095},use{1123},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToString,pretty,def{1090},use{1097,1105,1106},dvars{conf},pointers{},cfuncs{yajl_gen_config{3}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToString,ret,def{1094},use{1128,1133,1135},dvars{},pointers{},cfuncs{NULLSTR{2},VIR_STRDUP{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToString,g,def{1092,1103,1110},use{1104,1105,1106,1107,1112,1118,1123,1131},dvars{},pointers{},cfuncs{yajl_gen_free{1},yajl_gen_config{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToString,str,def{1093},use{1123,1128},dvars{},pointers{},cfuncs{VIR_STRDUP{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueToString,object,def{1089},use{1100,1118},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetString,key,def{583},use{417,425,589},dvars{NULLval},pointers{},cfuncs{virJSONValueObjectGet{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetString,NULLval,def{589},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetString,val,def{585},use{590,593},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetString,object,def{583},use{417,421,424,425,426,586,589},dvars{NULLval},pointers{},cfuncs{virJSONValueObjectGet{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewArray,NULLval,def{245},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewArray,val,def{240},use{242,247},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewArray,,def{238},use{242},dvars{},pointers{},cfuncs{VIR_ALLOC{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetBoolean,value,def{564,569},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetBoolean,val,def{564},use{566,569},dvars{value},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberLong,value,def{625},use{635},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberLong,key,def{625},use{417,425,631},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberLong,val,def{627,631},use{632,635},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberLong,object,def{625},use{417,421,424,425,426,628,631},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberDouble,value,def{653},use{663},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberDouble,key,def{653},use{417,425,659},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberDouble,val,def{655,659},use{660,663},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberDouble,object,def{653},use{417,421,424,425,426,656,659},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberDouble,value,def{555},use{560},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberDouble,number,def{555},use{557,560},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberUlong,value,def{547},use{552},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberUlong,number,def{547},use{549,552},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberInt,jvalue,def{303},use{65,68,71,73,74,75,77,80,81,82,85,88,95,304,306,307},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberInt,number,def{301},use{139,141,145,146,150,156,157,159,160,303},dvars{NULLval},pointers{},cfuncs{VIR_FREE{1},virJSONValueNewNumber{1},virJSONValueNewNumberInt{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberInt,key,def{301},use{306},dvars{},pointers{key},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberInt,object,def{301},use{306},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberInt,value,def{523},use{528},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberInt,number,def{523},use{525,528},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberUint,jvalue,def{316},use{65,68,71,73,74,75,77,80,81,82,85,88,95,317,319,320},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberUint,number,def{314},use{139,141,145,146,150,168,169,171,172,316},dvars{NULLval},pointers{},cfuncs{virJSONValueNewNumber{1},VIR_FREE{1},virJSONValueNewNumberUint{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberUint,key,def{314},use{319},dvars{},pointers{key},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberUint,object,def{314},use{319},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueArraySize,array,def{494},use{496,499},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetValue,n,def{483},use{488},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetValue,object,def{483},use{485,488,491},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFree,i,def{67},use{73,80},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueFree,value,def{65},use{68,71,73,74,75,77,80,81,82,85,88,95},dvars{},pointers{},cfuncs{virJSONValueFree{1},VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetKey,n,def{440},use{445},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetKey,object,def{440},use{442,445,448},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGet,i,def{419},use{424},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGet,key,def{417},use{425},dvars{},pointers{key},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGet,object,def{417},use{421,424,425,426},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberInt,value,def{597},use{607},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberInt,key,def{597},use{417,425,603},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberInt,val,def{599,603},use{604,607},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberInt,object,def{597},use{417,421,424,425,426,600,603},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectHasKey,i,def{404},use{409},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectHasKey,key,def{402},use{410},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectHasKey,object,def{402},use{406,409,410},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNull,NULLval,def{233},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNull,val,def{228},use{230,235},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNull,,def{226},use{230},dvars{},pointers{},cfuncs{VIR_ALLOC{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberLong,jvalue,def{328},use{65,68,71,73,74,75,77,80,81,82,85,88,95,329,331,332},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberLong,number,def{326},use{139,141,145,146,150,180,181,183,184,328},dvars{NULLval},pointers{},cfuncs{VIR_FREE{1},virJSONValueNewNumber{1},virJSONValueNewNumberLong{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberLong,key,def{326},use{331},dvars{},pointers{key},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberLong,object,def{326},use{331},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberUint,value,def{531},use{536},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberUint,number,def{531},use{533,536},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewObject,NULLval,def{257},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewObject,val,def{252},use{254,259},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewObject,,def{250},use{254},dvars{},pointers{},cfuncs{VIR_ALLOC{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppend,newkey,def{264},use{272,277,281},dvars{object},pointers{,jargs},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppend,value,def{262},use{282},dvars{object},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppend,key,def{262},use{269,272},dvars{},pointers{,key},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppend,object,def{262,281,282},use{266,269,275,276,283},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberLong,str,def{180},use{139,141,145,146,150,181,183,184},dvars{NULLval},pointers{number},cfuncs{VIR_FREE{1},virJSONValueNewNumber{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberLong,NULLval,def{183},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberLong,val,def{179},use{185},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberLong,data,def{177},use{181},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueArrayAppend,value,def{387},use{396},dvars{array},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueArrayAppend,array,def{387,396},use{389,392,393,397},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueIsNull,val,def{574},use{576},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberLong,value,def{539},use{544},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetNumberLong,number,def{539},use{541,544},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberDouble,jvalue,def{352},use{65,68,71,73,74,75,77,80,81,82,85,88,95,353,355,356},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberDouble,number,def{350},use{139,141,145,146,150,204,205,207,208,352},dvars{NULLval},pointers{},cfuncs{VIR_FREE{1},virJSONValueNewNumber{1},virJSONValueNewNumberDouble{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberDouble,key,def{350},use{355},dvars{},pointers{key},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberDouble,object,def{350},use{355},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberDouble,str,def{204},use{139,141,145,146,150,205,207,208},dvars{NULLval},pointers{number},cfuncs{VIR_FREE{1},virJSONValueNewNumber{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberDouble,NULLval,def{207},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberDouble,val,def{203},use{209},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberDouble,data,def{201},use{205},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNull,jvalue,def{376},use{65,68,71,73,74,75,77,80,81,82,85,88,95,377,379,380},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNull,key,def{374},use{379},dvars{},pointers{key},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNull,object,def{374},use{379},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberUint,value,def{611},use{621},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberUint,key,def{611},use{417,425,617},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberUint,val,def{613,617},use{618,621},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectGetNumberUint,object,def{611},use{417,421,424,425,426,614,617},dvars{val},pointers{},cfuncs{virJSONValueObjectGet{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectKeysNumber,object,def{432},use{434,437},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendBoolean,jvalue,def{364},use{65,68,71,73,74,75,77,80,81,82,85,88,95,365,367,368},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendBoolean,boolean_,def{362},use{213,221,364},dvars{val},pointers{},cfuncs{virJSONValueNewBoolean{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendBoolean,key,def{362},use{367},dvars{},pointers{key},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendBoolean,object,def{362},use{367},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleNumber,value,def{787,791},use{65,68,71,73,74,75,77,80,81,82,85,88,95,796,799,800},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleNumber,l,def{783},use{789},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleNumber,parser,def{785},use{794,799},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleNumber,s,def{782},use{789},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleNumber,str,def{786},use{139,141,145,146,150,789,791,792,794},dvars{value},pointers{},cfuncs{VIR_DEBUG{3},VIR_FREE{1},virJSONValueNewNumber{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleNumber,ctx,def{781},use{785},dvars{parser},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberInt,str,def{156},use{139,141,145,146,150,157,159,160},dvars{NULLval},pointers{number},cfuncs{VIR_FREE{1},virJSONValueNewNumber{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberInt,NULLval,def{159},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberInt,val,def{155},use{161},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberInt,data,def{153},use{157},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendString,jvalue,def{291},use{65,68,71,73,74,75,77,80,81,82,85,88,95,292,294,295},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendString,value,def{289},use{101,106,110,111,115,291},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueNewString{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendString,key,def{289},use{294},dvars{},pointers{,key},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendString,object,def{289},use{294},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleStartArray,value,def{904},use{65,68,71,73,74,75,77,80,81,82,85,88,95,908,911,912,920},dvars{parser},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleStartArray,parser,def{903,920,921},use{906,911,916,917,922},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleStartArray,ctx,def{901},use{903},dvars{parser},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewString,NULLval,def{109},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewString,val,def{101},use{106,110,111,115},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewString,data,def{99},use{103,110},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueGetString,string,def{514},use{516,519},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleBoolean,value,def{766},use{65,68,71,73,74,75,77,80,81,82,85,88,95,770,773,774},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleBoolean,parser,def{765},use{768,773},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleBoolean,boolean_,def{763},use{213,221,766,768},dvars{val},pointers{},cfuncs{VIR_DEBUG{3},virJSONValueNewBoolean{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleBoolean,ctx,def{763},use{765},dvars{parser},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewStringLen,NULLval,def{128},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewStringLen,val,def{120},use{125,129,130,134},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewStringLen,length,def{118},use{129},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewStringLen,data,def{118},use{122,129},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberUlong,str,def{192},use{139,141,145,146,150,193,195,196},dvars{NULLval},pointers{res,owners,number},cfuncs{VIR_FREE{1},virJSONValueNewNumber{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberUlong,NULLval,def{195},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberUlong,val,def{191},use{197},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberUlong,data,def{189},use{193},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumber,NULLval,def{144},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumber,val,def{139},use{141,145,146,150},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumber,data,def{137},use{145},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewBoolean,NULLval,def{220},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewBoolean,val,def{215,221},use{217,223},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewBoolean,boolean_,def{213},use{221},dvars{val},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectRemoveKey,value,def{456,461,469},use{65,68,71,73,74,75,77,80,81,82,85,88,95,460,468,473},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectRemoveKey,i,def{458},use{466,474},dvars{},pointers{},cfuncs{VIR_DELETE_ELEMENT{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectRemoveKey,key,def{455},use{467,472},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectRemoveKey,object,def{455,470},use{65,68,71,73,74,75,77,80,81,82,85,88,95,463,466,467,469,472,473,474,475},dvars{value},pointers{},cfuncs{virJSONValueFree{1},VIR_DELETE_ELEMENT{3},VIR_DELETE_ELEMENT{1},VIR_FREE{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberUlong,jvalue,def{340},use{65,68,71,73,74,75,77,80,81,82,85,88,95,341,343,344},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberUlong,number,def{338},use{139,141,145,146,150,192,193,195,196,340},dvars{NULLval},pointers{},cfuncs{VIR_FREE{1},virJSONValueNewNumber{1},virJSONValueNewNumberUlong{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberUlong,key,def{338},use{343},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueObjectAppendNumberUlong,object,def{338},use{343},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueArrayGet,element,def{503},use{508},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueArrayGet,array,def{503},use{505,508,511},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberUint,str,def{168},use{139,141,145,146,150,169,171,172},dvars{NULLval},pointers{number},cfuncs{VIR_FREE{1},virJSONValueNewNumber{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberUint,NULLval,def{171},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberUint,val,def{167},use{173},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONValueNewNumberUint,data,def{165},use{169},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleString,value,def{812},use{65,68,71,73,74,75,77,80,81,82,85,88,95,817,820,821},dvars{},pointers{},cfuncs{VIR_FREE{1},virJSONValueFree{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleString,parser,def{811},use{815,820},dvars{},pointers{},cfuncs{VIR_DEBUG{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleString,stringLen,def{809},use{118,129,813},dvars{},pointers{},cfuncs{virJSONValueNewStringLen{2}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleString,stringVal,def{808},use{120,125,129,130,134,812,815},dvars{},pointers{},cfuncs{VIR_FREE{1},VIR_DEBUG{3},virJSONValueNewStringLen{1}}
libvirt-1.1.0/src/util/virjson.c,virJSONParserHandleString,ctx,def{807},use{811},dvars{parser},pointers{},cfuncs{}
