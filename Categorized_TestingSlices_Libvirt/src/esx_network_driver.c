libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkRegister,,def{939},use{941},dvars{},pointers{},cfuncs{virRegisterNetworkDriver{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkIsPersistent,ATTRIBUTE_UNUSED,def{909},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkSetAutostart,autostart,def{883,886},use{888},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkSetAutostart,ATTRIBUTE_UNUSED,def{882},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkUndefine,hostPortGroupPort,def{537},use{560,562,565},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkUndefine,hostPortGroup,def{536},use{556,558,588,590,594},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkUndefine,hostPortGroupKey,def{535},use{553,558,578,585,590,606},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkUndefine,found,def{554,570,586,598},use{575,603},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkUndefine,network,def{529},use{532,544,615},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkUndefine,hostPortGroupList,def{534},use{547,623},dvars{},pointers{},cfuncs{esxVI_HostPortGroup_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkUndefine,hostVirtualSwitch,def{533},use{545,622},dvars{},pointers{},cfuncs{esxVI_HostVirtualSwitch_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkUndefine,result,def{531,619},use{619,625},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkUndefine,priv,def{532},use{539,544,547,592,593,613,614},dvars{},pointers{network},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,i,def{333},use{385,418,475},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,hostPortGroupSpec,def{332,486},use{476,478,479,480,481,482,486,491,499,521},dvars{},pointers{},cfuncs{esxVI_HostPortGroupSpec_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,NULLdef,def{342},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,physicalNic,def{331},use{430,432,435},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,conn,def{320},use{283,294,300,323,513},dvars{network},pointers{},cfuncs{virCheckNonNullArgReturn{1},virGetNetwork{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,hostPortGroup,def{327},use{386,388},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,hostVirtualSwitch,def{325},use{210,218,283,295,304,350,355,506,511,513,517},dvars{network},pointers{},cfuncs{md5_process_bytes {1},memcpy{2},memcpy{1},esxVI_HostVirtualSwitch_Free{1},virCheckNonNullArgReturn{1},strlen{2},virGetNetwork{2},md5_buffer{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,md5,def{335},use{210,218,511,513},dvars{network},pointers{},cfuncs{md5_process_bytes {2},virGetNetwork{3},md5_buffer{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,physicalNicList,def{330},use{414,520},dvars{},pointers{},cfuncs{esxVI_PhysicalNic_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,hostVirtualSwitchSpec,def{328,410,453},use{399,400,453,456,462,470,519},dvars{},pointers{},cfuncs{esxVI_HostVirtualSwitchSpec_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,def,def{324},use{32,34,35,36,37,39,40,41,101,103,104,105,106,107,111,113,114,118,120,124,126,127,128,132,134,135,137,138,140,141,142,146,148,152,154,155,159,161,162,163,167,169,170,171,172,176,178,179,180,181,183,184,185,186,188,189,190,191,196,200,201,203,205,206,208,212,216,219,220,221,223,225,226,228,230,231,233,235,236,238,240,242,244,245,246,344,349,364,371,372,375,380,385,388,391,404,418,421,426,432,447,455,461,470,475,481,482,488,490,505,516},dvars{},pointers{},cfuncs{virNetworkForwardIfDefClear{1},virNetworkRouteDefClear{1},virNetworkDNSSrvDefClear{1},virNetworkDNSHostDefClear{1},virPortGroupDefClear{1},virNetworkForwardPfDefClear{1},virNetworkIpDefClear{1},virReportError{2},virNetworkDHCPHostDefClear{1},virNetworkDefFree{1},virNetworkForwardDefClear{1},virNetworkDNSDefClear{1},VIR_FREE{1},virNetDevVlanClear{1},virNetDevBandwidthFree{1},virNetworkDNSTxtDefClear{1},virNetworkForwardTypeToString{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,found,def{419,439},use{444},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,priv,def{323},use{337,349,381,414,468,469,497,498,505},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,xml,def{320},use{342,2241,2243},dvars{NULLdef},pointers{},cfuncs{virNetworkDefParseString{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,hostVirtualSwitchBondBridge,def{329},use{406,411,434},dvars{hostVirtualSwitchSpec},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,hostPortGroupList,def{326},use{381,518},dvars{},pointers{},cfuncs{esxVI_HostPortGroup_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkDefineXML,network,def{322,513},use{523},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkIsActive,ATTRIBUTE_UNUSED,def{900},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,tmp,def{788},use{790,792},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,def,def{691,714,725,744},use{32,34,35,36,37,39,40,41,101,103,104,105,106,107,111,113,114,118,120,124,126,127,128,132,134,135,137,138,140,141,142,146,148,152,154,155,159,161,162,163,167,169,170,171,172,176,178,179,180,181,183,184,185,186,188,189,190,191,196,200,201,203,205,206,208,210,212,216,218,219,220,221,223,225,226,228,230,231,233,235,236,238,240,242,244,245,246,697,709,711,727,746,750,775,813,820,821,826,848,853,862},dvars{},pointers{},cfuncs{md5_process_bytes {2},virNetworkForwardIfDefClear{1},virNetworkRouteDefClear{1},virNetworkDNSSrvDefClear{1},virNetworkDNSTxtDefClear{1},virNetDevBandwidthFree{1},VIR_FREE{1},virNetworkDNSDefClear{1},virPortGroupDefClear{1},virNetworkForwardPfDefClear{1},virNetworkIpDefClear{1},virNetworkForwardDefClear{1},virNetworkDNSHostDefClear{1},virNetworkDefFormat{1},virNetDevVlanClear{1},virNetworkDHCPHostDefClear{1},virNetworkDefFree{1},md5_buffer{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,networkName,def{690},use{810,812,814},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,network,def{687},use{787,790},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,hostPortGroupKey,def{689},use{770,803,808,839},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,networkList,def{686},use{783,860},dvars{},pointers{},cfuncs{esxVI_ObjectContent_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,hostVirtualSwitch,def{678},use{210,218,704,709,711,845,847,856},dvars{},pointers{},cfuncs{md5_process_bytes {1},esxVI_HostVirtualSwitch_Free{1},strlen{2},md5_buffer{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,hostPortGroup,def{684},use{806,808,812,817,819},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,network_,def{674},use{677,703},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,physicalNic,def{681},use{741,743,747},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,networkNameList,def{688},use{792,861},dvars{},pointers{},cfuncs{esxVI_String_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,propertyNameList,def{685},use{781,782,859},dvars{},pointers{},cfuncs{esxVI_String_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,count,def{679,717,767},use{717,721,724,727,767,771,774,775},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,found,def{739,752,804,831},use{757,836},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,xml,def{676,853},use{864},dvars{},pointers{flags,def},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,priv,def{677},use{693,703,733,782,798},dvars{},pointers{network_},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,hostPortGroupList,def{683},use{798,858},dvars{},pointers{},cfuncs{esxVI_HostPortGroup_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,flags,def{674},use{853,2723,2727},dvars{},pointers{},cfuncs{virNetworkDefFormat{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,physicalNicList,def{680},use{733,857},dvars{},pointers{},cfuncs{esxVI_PhysicalNic_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetXMLDesc,physicalNicKey,def{682},use{720,738,743,760},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxShapingPolicyToBandwidth,bandwidth,def{632,652,653,658,659,664,665},use{634,643,644,645},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxShapingPolicyToBandwidth,shapingPolicy,def{631},use{639,650,652,653,656,658,659,662,664,665},dvars{bandwidth},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByUUID,uuid_string,def{178},use{196,200},dvars{},pointers{},cfuncs{virReportError{2},virUUIDFormat{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByUUID,md5,def{177},use{188,190,210,218},dvars{},pointers{},cfuncs{md5_process_bytes {2},md5_buffer{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByUUID,hostVirtualSwitch,def{176},use{186,188,195,205,210,218,283,295,304},dvars{network},pointers{},cfuncs{md5_process_bytes {1},memcpy{2},memcpy{1},virCheckNonNullArgReturn{1},strlen{2},virGetNetwork{2},md5_buffer{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByUUID,network,def{173,205},use{210},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByUUID,hostVirtualSwitchList,def{175},use{182,208},dvars{},pointers{},cfuncs{esxVI_HostVirtualSwitch_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByUUID,uuid,def{171},use{42,44,45,47,190,196,205,209,211,217,218},dvars{network},pointers{},cfuncs{va_end {1},snprintf{1},vasnprintf {4},virGetNetwork{3},va_start {1},virUUIDFormat{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByUUID,priv,def{174},use{180,181},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByUUID,conn,def{171},use{174,205,283,294,300},dvars{network},pointers{},cfuncs{virCheckNonNullArgReturn{1},virGetNetwork{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxBandwidthToShapingPolicy,result,def{253,307},use{307,310,314},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxBandwidthToShapingPolicy,shapingPolicy,def{251,278,286,295,304},use{255,274,281,290,299,311},dvars{},pointers{},cfuncs{esxVI_HostNetworkTrafficShapingPolicy_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxBandwidthToShapingPolicy,bandwidth,def{250},use{260,261,262,263,269,270,280,286,289,295,298,304},dvars{shapingPolicy},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListNetworks,i,def{112},use{136},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListNetworks,count,def{111,140},use{129,136,140,145},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListNetworks,hostVirtualSwitch,def{110},use{124,126},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListNetworks,hostVirtualSwitchList,def{109},use{120,143},dvars{},pointers{},cfuncs{esxVI_HostVirtualSwitch_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListNetworks,success,def{107,132},use{135},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListNetworks,maxnames,def{105},use{114},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListNetworks,names,def{105},use{126,137},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListNetworks,priv,def{108},use{118,119},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListNetworks,conn,def{105},use{108},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByName,md5,def{221},use{210,218,238,240},dvars{network},pointers{},cfuncs{md5_process_bytes {2},virGetNetwork{3},md5_buffer{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByName,hostVirtualSwitch,def{220},use{210,218,225,238,240,242,283,295,304},dvars{network},pointers{},cfuncs{md5_process_bytes {1},memcpy{2},memcpy{1},esxVI_HostVirtualSwitch_Free{1},virCheckNonNullArgReturn{1},strlen{2},virGetNetwork{2},md5_buffer{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByName,name,def{216},use{224,240,283,295,304},dvars{network},pointers{},cfuncs{memcpy{2},memcpy{1},virCheckNonNullArgReturn{1},virGetNetwork{2}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByName,priv,def{219},use{223,224},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByName,network,def{218,240},use{244},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkLookupByName,conn,def{216},use{219,240,283,294,300},dvars{network},pointers{},cfuncs{virCheckNonNullArgReturn{1},virGetNetwork{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectListDefinedNetworks,ATTRIBUTE_UNUSED,def{160,161,162},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetAutostart,xmlautostart,def{874},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetAutostart,autostart,def{871},use{874},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkGetAutostart,ATTRIBUTE_UNUSED,def{870},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkOpen,VIR_DRV_OPEN_DECLINEDconn,def{61},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkOpen,flags,def{53},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkOpen,ATTRIBUTE_UNUSED,def{52},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkOpen,conn,def{51},use{57,61},dvars{VIR_DRV_OPEN_DECLINEDconn},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectNumOfDefinedNetworks,ATTRIBUTE_UNUSED,def{151},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectNumOfNetworks,count,def{84},use{94,99},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectNumOfNetworks,hostVirtualSwitch,def{83},use{92},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectNumOfNetworks,hostVirtualSwitchList,def{82},use{88,97},dvars{},pointers{},cfuncs{esxVI_HostVirtualSwitch_Free{1}}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectNumOfNetworks,priv,def{81},use{86,87},dvars{},pointers{conn},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxConnectNumOfNetworks,conn,def{79},use{81},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkClose,VIR_DRV_OPEN_SUCCESSconn,def{71},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/esx/esx_network_driver.c,esxNetworkClose,conn,def{69},use{},dvars{},pointers{},cfuncs{}
