libvirt-1.1.0/src/security/virt-aa-helper.c,main,included_files,def{1227,1258},use{1263,1266,1306},dvars{rc},pointers{buf},cfuncs{VIR_FREE{1},vah_info{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,include_file,def{1181},use{1214,1223,1262,1265,1287,1300,1312},dvars{rc},pointers{},cfuncs{VIR_FREE{1},vah_info{1},unlink{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,tmp,def{1273},use{1274,1283,1285,1289},dvars{rc},pointers{},cfuncs{VIR_FREE{1},vah_info{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,profile,def{1180},use{1210,1224,1229,1281,1285,1302,1311},dvars{rc},pointers{},cfuncs{VIR_FREE{1},vah_info{1},unlink{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,_ctl,def{1177},use{1177},dvars{ctl},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,rc,def{1179,1219,1221,1264,1265,1284,1285,1294,1296},use{1264,1284,1292,1299,1314},dvars{},pointers{},cfuncs{exit{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,environ,def{1191},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,argv,def{1175},use{132,137,138,1186,1200,1201,1207},dvars{retval,progname},pointers{},cfuncs{vfprintf {2},va_start {2},fprintf{2}}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,ctl,def{1177},use{82,84,87,88,89,90,91,92,122,127,128,148,153,161,169,254,256,258,259,260,262,263,266,271,272,273,274,290,338,343,441,443,459,461,1193,1197,1205,1207,1208,1211,1212,1215,1216,1218,1219,1220,1221,1222,1226,1229,1230,1233,1234,1238,1240,1242,1244,1246,1248,1249,1250,1255,1261,1267,1272,1275,1276,1280,1282,1285,1286,1292,1293,1294,1296,1301,1309},dvars{klass,is_zero,len,rc},pointers{},cfuncs{dispose{1},virAtomicIntDecAndTest{1},VIR_FREE{1},memcpy{2},strlen{1},parserRemove{1},parserReplace{1},virObjectUnref{1},vah_info{1},virBufferAdd{2},PROBE{3},parserLoad{1},virBufferAsprintf{3},virBufferAsprintf{4},vahDeinit{1},memset{3},memset{1},vah_error{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,progname,def{1200,1201},use{1203},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,buf,def{1178},use{98,100,102,104,148,153,156,163,164,165,168,169,170,171,243,245,292,293,294,295,1234,1237,1239,1241,1243,1245,1247,1250,1253,1254,1258,1266},dvars{indent,needSize,rc},pointers{},cfuncs{va_end{1},VIR_FREE{1},memset{1},memcpy{1},virBufferGetIndent{1},virBufferVasprintf{3},va_start{1},virBufferAdd{1},virBufferContentAndReset{1},virBufferFreeAndReset{1},virBufferAsprintf{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,main,argc,def{1175},use{1207},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,file_iterate_pci_cb,buf,def{860},use{861},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,file_iterate_pci_cb,file,def{858},use{861},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,file_iterate_pci_cb,opaque,def{858},use{860},dvars{buf},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,file_iterate_pci_cb,ATTRIBUTE_UNUSED,def{857},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file_chardev,rc,def{811,832,841},use{832,841,845},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file_chardev,pipe_in,def{809},use{815,820,836},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file_chardev,type,def{807},use{813},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file_chardev,perms,def{806},use{820,829,839},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file_chardev,path,def{805},use{815,824,839},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file_chardev,pipe_out,def{810},use{824,829,834},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file_chardev,buf,def{804},use{820,829,839},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,usb,def{1015},use{332,343,377,379,381,382,383,415,419,1016,1017,1020,1023,1024},dvars{dev,rc},pointers{},cfuncs{VIR_FREE{1},VIR_DEBUG{3},VIR_DEBUG{2},virUSBDeviceFree{1},virUSBDeviceFileIterate{1},virUSBDeviceNew{2},virUSBDeviceNew{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,dev,def{1012},use{332,343,1013,1016,1017,1032,1033,1034,1035,1462,1463,1464,1468,1476,1477,1478,1482,1486,1502,1505,1513,1517,1525},dvars{NULLdev,dev},pointers{},cfuncs{VIR_FREE{1},virReportError{2},virReportError{3},virReportError{4},virPCIDeviceNew{4},virPCIDeviceNew{3},virPCIDeviceNew{2},virPCIDeviceNew{1},virUSBDeviceNew{2},virUSBDeviceNew{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,pci,def{1031},use{1032,1033,1034,1035,1037,1040,1041,1462,1463,1464,1468,1476,1477,1478,1482,1486,1502,1505,1513,1517,1525,1561,1563,1565,1566,1567,1568,1833,1843,1849,1872,1873},dvars{NULLdev,dev,rc},pointers{},cfuncs{VIR_DEBUG{3},VIR_DEBUG{2},VIR_FREE{1},virPCIDeviceFree{1},closedir{1},virPCIDeviceFileIterate{1},virReportError{2},virReportError{3},virReportError{4},virPCIDeviceNew{4},virPCIDeviceNew{3},virPCIDeviceNew{2},virPCIDeviceNew{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,disk,def{910,917},use{255,256,257,260,262,263,264,915,917,918,927,1026,1034,1040,1064,1100,1103,1109,1110},dvars{ret,next},pointers{},cfuncs{VIR_FREE{1},virHashFree{1},dataFree{2},dataFree{1},keyFree{1},virStorageFileGetMetadataRecurse{7},virStorageFileGetMetadata{2},virStorageFileGetMetadata{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,probe,def{916},use{919,1025,1030,1043,1062,1094,1098,1108},dvars{ret,NULLfd,disk},pointers{},cfuncs{VIR_DEBUG{5},virStorageFileGetMetadataRecurse{5},virStorageFileGetMetadata{5}}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,rc,def{892,1023,1040,1047,1062},use{901,1025,1047,1062,1067},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,i,def{893},use{909,931,944,955,968,997,1010},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,uuid,def{894},use{42,44,45,47,209,211,217,218,898,899,904,1066},dvars{},pointers{},cfuncs{va_end {1},vasnprintf {4},snprintf{1},VIR_FREE{1},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,uuidstr,def{895},use{898,899},dvars{},pointers{},cfuncs{virUUIDFormat{2}}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,buf,def{891},use{243,245,417,419,927,938,951,962,975,982,986,990,994,1000,1006,1023,1040,1053,1056,1057,1063,1829,1862},dvars{rc},pointers{},cfuncs{VIR_FREE{1},virBufferContentAndReset{1},virBufferFreeAndReset{1},virPCIDeviceFileIterate{3},virUSBDeviceFileIterate{3}}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_files,ctl,def{889,1063},use{42,44,45,47,82,84,87,88,89,90,91,92,122,127,128,209,211,217,218,254,256,258,259,260,262,263,266,271,272,273,274,338,343,898,900,904,905,909,910,916,931,932,933,934,935,936,937,939,941,944,945,946,947,948,949,950,952,955,956,957,958,959,960,961,963,965,968,969,970,971,972,973,974,976,978,981,982,985,986,989,990,993,994,997,998,999,1000,1004,1005,1006,1010,1011,1012,1052,1053},dvars{klass,is_zero,dev,probe,disk},pointers{buf},cfuncs{va_end {1},vasnprintf {4},va_start {1},snprintf{1},dispose{1},virAtomicIntDecAndTest{1},PROBE{3},VIR_FREE{1},virObjectUnref{1},memset{3},memset{1},vahDeinit{1},vah_error{1},virUUIDFormat{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file,rc,def{753,782},use{757,773,777,783,784,800},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file,tmp,def{752,770},use{290,525,559,567,571,574,577,595,596,601,776,782,791,794,798},dvars{rc},pointers{buf,path},cfuncs{VIR_FREE{1},virBufferAsprintf{3},valid_path{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file,readonly,def{754,780},use{525,600,782,792},dvars{rc},pointers{},cfuncs{valid_path{2}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file,perms,def{750},use{779,791},dvars{},pointers{},cfuncs{virBufferAsprintf{4}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file,path,def{750},use{122,124,132,756,763,764,769,770,771,776,782,785},dvars{rc},pointers{},cfuncs{fprintf{3},vah_error{3},vah_warning{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_add_file,buf,def{750},use{292,293,294,295,791,793,794},dvars{},pointers{},cfuncs{virBufferVasprintf{3},va_start{1},va_end{1},virBufferAddLit{1},virBufferAsprintf{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,array_starts_with,size,def{499},use{502},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,array_starts_with,arr,def{499},use{503,506},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,array_starts_with,i,def{501},use{502},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,array_starts_with,str,def{499},use{503,506},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_uuid,rawuuid,def{467},use{475},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_uuid,uuid,def{465},use{469,472,475},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserReplace,profile_name,def{459},use{461},dvars{},pointers{ctl},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserRemove,profile_name,def{450},use{452},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserLoad,profile_name,def{441},use{443},dvars{},pointers{ctl},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,replace_string,pos,def{155,158},use{169},dvars{idx},pointers{oldstr,orig},cfuncs{abs{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,replace_string,idx,def{154,169},use{172,183,188,189},dvars{},pointers{},cfuncs{strncat{1},strncat{2},strncat{3}}
libvirt-1.1.0/src/security/virt-aa-helper.c,replace_string,repstr,def{152},use{175,180},dvars{},pointers{},cfuncs{strcat{2}}
libvirt-1.1.0/src/security/virt-aa-helper.c,replace_string,tmp,def{156,167},use{163,167,172,175,177,180,183,185,188,191,193,196},dvars{},pointers{},cfuncs{strcat{1},VIR_FREE{1},strncat{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,replace_string,oldstr,def{151},use{158,169,183,188,189},dvars{idx},pointers{},cfuncs{ strlen{1}, strlen{2}}
libvirt-1.1.0/src/security/virt-aa-helper.c,replace_string,len,def{151},use{163,175,183,191},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,replace_string,orig,def{151},use{158,169,172,183,188,189,191},dvars{idx},pointers{},cfuncs{strlen{2},strncat{2},abs{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,file_iterate_hostdev_cb,buf,def{852},use{853},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,file_iterate_hostdev_cb,file,def{850},use{853},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,file_iterate_hostdev_cb,opaque,def{850},use{852},dvars{buf},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,file_iterate_hostdev_cb,ATTRIBUTE_UNUSED,def{849},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_usage,,def{101},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,caps_mockup,rcxml,def{654},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,caps_mockup,arch,def{652,673},use{674,677,678},dvars{},pointers{ctxt},cfuncs{VIR_FREE{1},virArchFromString{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,caps_mockup,ctxt,def{651},use{655,659,665,668,673,677,685},dvars{ctl,rcxml},pointers{},cfuncs{xmlXPathFreeContext{1},virXPathString{2}}
libvirt-1.1.0/src/security/virt-aa-helper.c,caps_mockup,xml,def{650},use{684},dvars{},pointers{},cfuncs{xmlFreeDoc{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,caps_mockup,rc,def{649,681},use{681,687},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,caps_mockup,xmlStr,def{647},use{654},dvars{rcxml},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,caps_mockup,ctl,def{647,668,675,677},use{82,84,87,88,89,90,91,92,122,127,128,254,256,258,259,260,262,263,266,271,272,273,274,338,343,669,670},dvars{klass,is_zero},pointers{arch,ctxt},cfuncs{dispose{1},virAtomicIntDecAndTest{1},PROBE{3},VIR_FREE{1},vahDeinit{1},memset{3},memset{1},virObjectUnref{1},vah_error{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_info,str,def{140},use{132,142},dvars{},pointers{},cfuncs{fprintf{3}}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,pcontent,def{266},use{278,283,289,296,307,320},dvars{plen},pointers{},cfuncs{VIR_FREE{1},strlen{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,flen,def{264,272},use{273,296},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,existing,def{267},use{272,278,296,321,1167,1186,1191,1199},dvars{flen},pointers{},cfuncs{virFileReadLimFD{3},VIR_FREE{1},virFileReadAll{3}}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,fd,def{265,302},use{307,308,313},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,rc,def{263,297,317},use{274,297,317,323},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,append,def{261},use{277},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,included_files,def{260},use{278,283},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,plen,def{264,289},use{290,296,307},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,warning,def{268},use{283},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,update_include_file,include_file,def{260},use{271,272,277,302,1170,1176,1177,1180,1186,1193,1194,1199,1200},dvars{buf,fd,flen},pointers{},cfuncs{virFileReadLimFD{1},VIR_FREE{1},VIR_FORCE_CLOSE{1},virFileReadAll{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserCommand,argv,def{230},use{233},dvars{ret},pointers{profile,flag},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserCommand,status,def{210},use{233,234,238,239},dvars{ret},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserCommand,profile,def{209},use{220,226,231,233,251},dvars{ret},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserCommand,ret,def{211,233},use{235},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserCommand,profile_name,def{205},use{221},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserCommand,flag,def{208},use{42,44,45,47,218,231},dvars{},pointers{},cfuncs{va_end {1},vasnprintf {4},va_start {1},snprintf{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserCommand,result,def{207,248},use{248,253},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,parserCommand,cmd,def{205},use{37,49,66,213,218,238},dvars{},pointers{},cfuncs{snprintf{4}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vahDeinit,ctl,def{82},use{84,87,88,89,90,91,92,254,256,258,259,260,262,263,266,271,272,273,274,338,343},dvars{klass,is_zero},pointers{ctl,obj},cfuncs{memset{3},memset{1},dispose{1},virAtomicIntDecAndTest{1},PROBE{3},virObjectUnref{1},VIR_FREE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_name,bad,def{486},use{491},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_name,name,def{482},use{488,491},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_warning,str,def{134},use{132,136},dvars{},pointers{},cfuncs{fprintf{3}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vahParseArgv,xmlStr,def{1150},use{1151,1154,1155,1158},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vahParseArgv,idx,def{1073},use{1090},dvars{rcarg},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vahParseArgv,ctl,def{1071,1093,1096,1099,1102,1108,1115,1118,1129,1131},use{82,84,87,88,89,90,91,92,122,127,128,254,256,258,259,260,262,263,266,271,272,273,274,338,343,1093,1096,1102,1106,1107,1115,1118,1122,1123,1125,1134,1138,1139,1141,1142,1144,1149,1152,1154,1156,1160,1161},dvars{klass,is_zero},pointers{arg},cfuncs{dispose{1},virAtomicIntDecAndTest{1},PROBE{3},VIR_FREE{1},vahDeinit{1},memset{3},memset{1},virObjectUnref{1},vah_error{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vahParseArgv,argv,def{1071},use{1089},dvars{rcarg},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vahParseArgv,rcarg,def{1089},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vahParseArgv,opt,def{1074},use{1089},dvars{rcarg},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vahParseArgv,argc,def{1071},use{1089},dvars{rcarg},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vahParseArgv,arg,def{1073},use{1091,1108},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,verify_xpath_context,tmp,def{612,620,627},use{624,631},dvars{},pointers{ctxt},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,verify_xpath_context,rc,def{611,633},use{633,636},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,verify_xpath_context,ctxt,def{609},use{614,620,627},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_definition,xmlStr,def{692},use{701,725,12259,12265},dvars{},pointers{},cfuncs{virDomainDefParseString{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_definition,guest,def{695,714},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_definition,ctlcaps,def{704},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_definition,ctlxmlopt,def{709},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_definition,rc,def{694,743},use{743,746},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,get_definition,ctl,def{692,725},use{82,84,87,88,89,90,91,92,122,127,128,254,256,258,259,260,262,263,266,271,272,273,274,338,343,701,704,705,710,714,715,716,721,726,728,729,733,734,738,739,12260,12261,12265},dvars{klass,is_zero,guest,ctlcaps},pointers{xmlStr},cfuncs{dispose{1},virAtomicIntDecAndTest{1},PROBE{3},VIR_FREE{1},virObjectUnref{1},memset{3},memset{1},vahDeinit{1},virDomainDefParseString{3},virDomainDefParseString{2},vah_error{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_path,npaths,def{528,594,599},use{595,601},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_path,override,def{555},use{592,596},dvars{opaths},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_path,sb,def{527},use{577,580},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_path,restricted,def{529},use{594,595},dvars{npaths},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_path,readonly,def{525},use{600},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_path,opaths,def{528,592},use{596},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_path,restricted_rw,def{548},use{599,601},dvars{npaths},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,valid_path,path,def{525},use{559,567,571,574,577,595,596,601},dvars{},pointers{tmp},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,rc,def{342,423},use{423,434},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,fd,def{341,408},use{413,414,419},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,plen,def{340,387},use{389,394,401,404,413},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,tlen,def{340,359},use{387,389},dvars{plen},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,template_end,def{339},use{369,388,404},dvars{plen},pointers{},cfuncs{strlen{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,template_name,def{338},use{364,387,401},dvars{plen},pointers{},cfuncs{strlen{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,profile_name,def{330},use{375},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,replace_files,def{337},use{381,388,404,429},dvars{plen},pointers{},cfuncs{VIR_FREE{1},strlen{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,replace_name,def{336},use{375,383,387,401,428},dvars{plen},pointers{},cfuncs{strlen{1},VIR_FREE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,pcontent,def{335,398},use{394,398,399,401,404,413,426},dvars{},pointers{},cfuncs{VIR_FREE{1},strcpy{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,template,def{333},use{349,354,359,433},dvars{tlen},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,tcontent,def{334},use{359,364,369,399,431},dvars{tlen},pointers{},cfuncs{VIR_FREE{1},strcpy{2}}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,profile_files,def{331},use{381},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,create_profile,profile,def{330},use{344,408},dvars{fd},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_error,str,def{122},use{124,132},dvars{},pointers{rv,symbols,tmp,p4,newenv,err,actual,p3,p7,start,n,error,cmd,grp,file,user,buf,approxAlloc,opt,actualname,worker,fd,range,result,cgroup,path,info,caps_str,argv,p2,str,value,p1,cwd,def,id,dst,i,p6,program_name,k,log,msg,mp,p5,gotSens,type,dom,expect,role,version,gotCatOne,expectname,filename,gotCatTwo,c},cfuncs{fprintf{3}}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_error,doexit,def{122},use{126},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,vah_error,ctl,def{122},use{82,84,87,88,89,90,91,92,127,128,254,256,258,259,260,262,263,266,271,272,273,274,338,343},dvars{is_zero,klass},pointers{obj,ctl},cfuncs{dispose{1},virAtomicIntDecAndTest{1},PROBE{3},VIR_FREE{1},virObjectUnref{1},memset{3},memset{1},vahDeinit{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,add_file_path,opaque,def{868},use{870},dvars{buf},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,add_file_path,depth,def{867},use{873},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,add_file_path,buf,def{870},use{290,525,559,567,571,574,577,595,596,601,752,770,776,782,791,794,798,875,877,879},dvars{rc,ret},pointers{},cfuncs{valid_path{1},VIR_FREE{1},virBufferAsprintf{3},vah_add_file{1}}
libvirt-1.1.0/src/security/virt-aa-helper.c,add_file_path,path,def{866},use{525,600,754,780,782,792,875,877,879},dvars{rc,ret},pointers{},cfuncs{valid_path{2},vah_add_file{2}}
libvirt-1.1.0/src/security/virt-aa-helper.c,add_file_path,ret,def{871,875,877,879,883},use{882,883,885},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/security/virt-aa-helper.c,add_file_path,disk,def{865},use{874},dvars{},pointers{},cfuncs{}
