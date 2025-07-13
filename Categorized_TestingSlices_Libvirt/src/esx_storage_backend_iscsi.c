libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolDelete,flags,def{705},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolDelete,ATTRIBUTE_UNUSED,def{704},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,def,def{637,669,680,682,684,687,690},use{645,675,692,696},dvars{},pointers{},cfuncs{virStorageVolDefFormat{2},VIR_FREE{1},memset{4},memset{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,hostScsiDisk,def{636,653},use{655,656,661,671,682,684,685},dvars{def},pointers{scsiLun},cfuncs{strlen{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,scsiLun,def{635},use{210,218,651,653,671,682,684},dvars{def},pointers{},cfuncs{md5_process_bytes {1},md5_buffer{1},esxVI_HostScsiDisk_DynamicCast{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,pool,def{633,667},use{243,245,292,293,294,295,644,692,1567,1573,1574,1575,1576,1585,1587,1591,1598,1600,1602,1604,1607,1612,1616,1618,1621,1626},dvars{},pointers{},cfuncs{va_end{1},virBufferVasprintf{3},va_start{1},VIR_FREE{1},virBufferFreeAndReset{1},virBufferAddLit{1},virStorageVolDefFormat{1},virBufferAsprintf{1},memset{4},memset{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,uuid_string,def{640},use{673,675},dvars{},pointers{},cfuncs{virUUIDFormat{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,md5,def{639},use{42,44,45,47,209,210,211,217,218,671,673},dvars{},pointers{},cfuncs{md5_process_bytes {2},va_end {1},snprintf{1},va_start {1},virUUIDFormat{1},vasnprintf {4},md5_buffer{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,scsiLunList,def{634},use{647,695},dvars{},pointers{},cfuncs{esxVI_ScsiLun_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,xml,def{631,692},use{698},dvars{},pointers{def,pool},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,volume,def{628},use{632,656,663,669},dvars{def},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,priv,def{632},use{647},dvars{},pointers{volume},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetXMLDesc,flags,def{629},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolWipe,flags,def{719},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolWipe,ATTRIBUTE_UNUSED,def{718},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolCreateXMLFrom,flags,def{615},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolCreateXMLFrom,ATTRIBUTE_UNUSED,def{612,613,614},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolCreateXML,flags,def{599},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolCreateXML,ATTRIBUTE_UNUSED,def{597,598},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByKey,uuid_string,def{551},use{564,568,570,581},dvars{volume},pointers{},cfuncs{virGetStorageVol{4},virUUIDFormat{2},memset{4},memset{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByKey,md5,def{550},use{42,44,45,47,209,210,211,217,218,565,567,568},dvars{},pointers{},cfuncs{md5_process_bytes {2},va_end {1},vasnprintf {4},va_start {1},snprintf{1},virUUIDFormat{1},md5_buffer{2},memset{4},memset{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByKey,scsiLunList,def{547},use{558,588},dvars{},pointers{},cfuncs{esxVI_ScsiLun_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByKey,priv,def{545},use{558,574},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByKey,volume,def{544,580},use{591},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByKey,key,def{542},use{554,555,570,575},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByKey,scsiLun,def{548},use{210,218,562,567,575,580},dvars{volume},pointers{},cfuncs{md5_process_bytes {1},strlen{2},virGetStorageVol{3},md5_buffer{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByKey,poolName,def{546},use{572,576,580,589},dvars{volume},pointers{},cfuncs{virGetStorageVol{2},VIR_FREE{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByKey,conn,def{542},use{254,256,258,259,260,262,263,266,271,272,273,274,338,343,514,527,530,531,532,535,538,539,541,544,545,555,580},dvars{is_zero,klass,volume},pointers{},cfuncs{VIR_FREE{1},dispose{1},virAtomicIntDecAndTest{1},virGetStorageVol{1},memset{3},memset{1},PROBE{3},virObjectUnref{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByName,scsiLun,def{453},use{210,218,462,464,471},dvars{},pointers{},cfuncs{md5_process_bytes {1},strlen{2},md5_buffer{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByName,uuid_string,def{456},use{472,479},dvars{volume},pointers{},cfuncs{virGetStorageVol{4},virUUIDFormat{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByName,md5,def{455},use{42,44,45,47,209,210,211,217,218,471,472},dvars{},pointers{},cfuncs{md5_process_bytes {2},va_end {1},snprintf{1},va_start {1},virUUIDFormat{1},vasnprintf {4},md5_buffer{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByName,scsiLunList,def{452},use{458,486},dvars{},pointers{},cfuncs{esxVI_ScsiLun_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByName,priv,def{451},use{458},dvars{},pointers{pool},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByName,volume,def{450,479},use{488},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByName,name,def{448},use{464,479},dvars{volume},pointers{},cfuncs{virGetStorageVol{3},virGetStorageVol{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByName,pool,def{447},use{254,256,258,259,260,262,263,266,271,272,273,274,338,343,451,479,514,527,530,531,532,535,538,539,541,544},dvars{is_zero,klass,volume},pointers{},cfuncs{VIR_FREE{1},dispose{1},virAtomicIntDecAndTest{1},memset{3},virGetStorageVol{1},virGetStorageVol{2},memset{1},PROBE{3},virObjectUnref{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByName,pool,def{164,188},use{193},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByName,md5,def{163},use{186,188,210,218},dvars{pool},pointers{},cfuncs{md5_process_bytes {2},virGetStoragePool{3},md5_buffer{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByName,target,def{161},use{172,176,186,191,210,218},dvars{},pointers{},cfuncs{md5_process_bytes {1},strlen{2},esxVI_HostInternetScsiHbaStaticTarget_Free{1},md5_buffer{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByName,name,def{158},use{172,188,428,441,450},dvars{pool},pointers{},cfuncs{memcpy{2},memcpy{1},virCheckNonNullArgReturn{1},virGetStoragePool{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByName,priv,def{160},use{172},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByName,conn,def{157},use{160,188,254,256,258,259,260,262,263,266,271,272,273,274,338,343,431,443,446,449,450,453,454,456,459},dvars{is_zero,klass,pool},pointers{},cfuncs{VIR_FREE{1},memset{3},memset{1},virObjectUnref{1},PROBE{3},memcpy{1},virAtomicIntDecAndTest{1},dispose{1},virGetStoragePool{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByUUID,md5,def{207},use{210,218,224,226,236},dvars{pool},pointers{},cfuncs{md5_process_bytes {2},virGetStoragePool{3},md5_buffer{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByUUID,target,def{205},use{210,218,223,224,231,236,428,441,450},dvars{pool},pointers{},cfuncs{md5_process_bytes {1},memcpy{2},memcpy{1},virGetStoragePool{2},virCheckNonNullArgReturn{1},strlen{2},md5_buffer{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByUUID,hostInternetScsiHba,def{204},use{210,217,240},dvars{},pointers{},cfuncs{esxVI_HostInternetScsiHba_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByUUID,pool,def{202,236},use{242},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByUUID,uuid,def{200},use{226},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByUUID,priv,def{203},use{209},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolLookupByUUID,conn,def{199},use{203,236,254,256,258,259,260,262,263,266,271,272,273,274,338,343,431,443,446,449,450,453,454,456,459},dvars{is_zero,klass,pool},pointers{},cfuncs{VIR_FREE{1},memset{3},memset{1},virObjectUnref{1},PROBE{3},memcpy{1},virAtomicIntDecAndTest{1},dispose{1},virGetStoragePool{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolNumOfVolumes,hostScsiTopologyLun,def{366},use{374},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolNumOfVolumes,hostScsiTopologyLunList,def{365},use{369,379},dvars{},pointers{},cfuncs{esxVI_HostScsiTopologyLun_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolNumOfVolumes,priv,def{364},use{369},dvars{},pointers{pool},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolNumOfVolumes,count,def{363},use{376,381},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolNumOfVolumes,pool,def{361},use{364,369},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetXMLDesc,target,def{301},use{313,314,319,333,342,344,345},dvars{def},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetXMLDesc,xml,def{298,349},use{355},dvars{},pointers{def},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetXMLDesc,priv,def{299},use{308},dvars{},pointers{pool},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetXMLDesc,flags,def{296},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetXMLDesc,def,def{302,327,331,333,335,342,345},use{243,245,292,293,294,295,306,329,335,337,349,352,1166,1180,1181,1184,1186,1188,1190,1193,1200,1203,1205,1206,1208,1210,1214,1217,1218,1220,1222,1225,1230},dvars{},pointers{},cfuncs{va_end{1},virBufferVasprintf{3},va_start{1},virBufferFreeAndReset{1},virBufferAsprintf{1},memcpy{1},VIR_FREE{1},virBufferAddLit{1},virStoragePoolDefFormat{1},memset{4},memset{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetXMLDesc,hostInternetScsiHba,def{300},use{308,353},dvars{},pointers{},cfuncs{esxVI_HostInternetScsiHba_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetXMLDesc,pool,def{296},use{299,314,323,327,329},dvars{def},pointers{},cfuncs{memcpy{2},virReportError{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectListStoragePools,i,def{106},use{144},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectListStoragePools,target,def{105},use{133,134},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectListStoragePools,hostInternetScsiHba,def{104},use{113,120,149},dvars{},pointers{},cfuncs{esxVI_HostInternetScsiHba_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectListStoragePools,priv,def{103},use{112},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectListStoragePools,count,def{102},use{133,137,144,151},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectListStoragePools,success,def{101,140},use{143,151},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectListStoragePools,maxnames,def{99},use{108,133},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectListStoragePools,names,def{98},use{134,145},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectListStoragePools,conn,def{98},use{103},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,poolName,def{501},use{515,519,526,534},dvars{volume},pointers{},cfuncs{virGetStorageVol{2},VIR_FREE{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,hostScsiDisk,def{500,511},use{513,518},dvars{},pointers{scsiLun},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,scsiLun,def{499},use{210,218,510,511,523},dvars{},pointers{},cfuncs{md5_process_bytes {1},strlen{2},md5_buffer{1},esxVI_HostScsiDisk_DynamicCast{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,uuid_string,def{504},use{524,526},dvars{volume},pointers{},cfuncs{virGetStorageVol{4},virUUIDFormat{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,md5,def{503},use{42,44,45,47,209,210,211,217,218,523,524},dvars{},pointers{},cfuncs{md5_process_bytes {2},va_end {1},snprintf{1},va_start {1},virUUIDFormat{1},vasnprintf {4},md5_buffer{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,scsiLunList,def{498},use{506,533},dvars{},pointers{},cfuncs{esxVI_ScsiLun_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,volume,def{496,526},use{536},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,path,def{494},use{513,526},dvars{volume},pointers{},cfuncs{virGetStorageVol{3}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,priv,def{497},use{506,517},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolLookupByPath,conn,def{494},use{254,256,258,259,260,262,263,266,271,272,273,274,338,343,497,514,526,527,530,531,532,535,538,539,541,544},dvars{is_zero,klass,volume},pointers{},cfuncs{VIR_FREE{1},dispose{1},virAtomicIntDecAndTest{1},virGetStorageVol{1},memset{3},memset{1},PROBE{3},virObjectUnref{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,scsiLun,def{396},use{413,418,419},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,i,def{397},use{431},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,scsiLunList,def{395},use{409,439},dvars{},pointers{},cfuncs{esxVI_ScsiLun_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,hostScsiTopologyLun,def{394},use{416,418},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,hostScsiTopologyLunList,def{393},use{400,404,438},dvars{},pointers{},cfuncs{esxVI_HostScsiTopologyLun_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,priv,def{392},use{400,409},dvars{},pointers{pool},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,count,def{391,435},use{413,416,422,431,435,441},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,success,def{390,427},use{430},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,maxnames,def{388},use{413,416},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,names,def{387},use{419,432},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolListVolumes,pool,def{387},use{392,400},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolRefresh,priv,def{252},use{257,266,267},dvars{},pointers{pool},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolRefresh,flags,def{249},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolRefresh,hostInternetScsiHba,def{253},use{258,268,275},dvars{},pointers{},cfuncs{esxVI_HostInternetScsiHba_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolRefresh,result,def{251,272},use{272,277},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolRefresh,pool,def{248},use{252},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectNumOfStoragePools,target,def{60},use{83},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectNumOfStoragePools,hostInternetScsiHba,def{59},use{63,70,90},dvars{},pointers{},cfuncs{esxVI_HostInternetScsiHba_Free{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectNumOfStoragePools,count,def{57},use{84,92},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectNumOfStoragePools,success,def{56,87},use{92},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectNumOfStoragePools,priv,def{58},use{62},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxConnectNumOfStoragePools,conn,def{54},use{58},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetPath,path,def{735},use{737,738},dvars{},pointers{},cfuncs{VIR_STRDUP{1}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStorageVolGetPath,volume,def{733},use{737},dvars{},pointers{},cfuncs{VIR_STRDUP{2}}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetInfo,resultinfo,def{287},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetInfo,info,def{284,288},use{287},dvars{resultinfo},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_storage_backend_iscsi.c,esxStoragePoolGetInfo,ATTRIBUTE_UNUSED,def{283},use{},dvars{},pointers{},cfuncs{}
