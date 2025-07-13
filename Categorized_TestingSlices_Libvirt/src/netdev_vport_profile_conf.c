libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileFormat,uuidstr,def{265,273},use{267,268,275,276,290},dvars{},pointers{},cfuncs{virBufferAsprintf{3},virUUIDFormat{2}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileFormat,noParameters,def{217,222},use{231,235},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileFormat,type,def{216,229},use{230,237,241,247,248,252,253,257,258,263,264,271,272,279,280,281},dvars{},pointers{},cfuncs{virNetDevVPortTypeToString{3}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileFormat,buf,def{214},use{233,236,240,244,249,254,259,268,276,282,285,286,292,293,294,295},dvars{},pointers{},cfuncs{virBufferVasprintf{3},va_start{1},virBufferAsprintf{1},va_end{1},virBufferAddLit{1}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileFormat,virtPort,def{213},use{42,44,45,47,209,211,217,218,219,222,223,224,225,226,227,229,246,249,251,254,256,260,262,267,270,275,278,282,290},dvars{type,noParameters},pointers{},cfuncs{va_end {1},vasnprintf {4},snprintf{1},va_start {1},virUUIDFormat{1},virBufferAsprintf{3}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,val,def{86,103,120},use{88,93,98,105,110,115,122,127,132},dvars{virtPort},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,NULLvirtPortType,def{58},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,cur,def{51,82},use{72,73,74,75,76,77,78,79,480},dvars{},pointers{},cfuncs{virXMLPropString{1}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,virtPortTypeIDVersion,def{46,76},use{119,122,198},dvars{},pointers{cur},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,flags,def{41},use{66,162,187},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,virtPort,def{50,98,99,115,116,132,133,142,158,171,181},use{53,59,65,137,146,153,163,164,165,166,173,174,175,176,188,192,204,207},dvars{NULLvirtPortType},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,virtPortInstanceID,def{47,77},use{136,137,199},dvars{},pointers{cur},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,node,def{41},use{51,58},dvars{NULLvirtPortType,cur},pointers{},cfuncs{}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,virtPortType,def{43},use{59,61,65,164,165,174,175,201},dvars{NULLvirtPortType},pointers{},cfuncs{VIR_FREE{1},virReportError{2}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,virtPortTypeID,def{45,75},use{102,105,197},dvars{},pointers{cur},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,virtPortManagerID,def{44,74},use{85,88,196},dvars{},pointers{cur},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,virtPortProfileID,def{48,78},use{145,146,200},dvars{},pointers{cur},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/conf/netdev_vport_profile_conf.c,virNetDevVPortProfileParse,virtPortInterfaceID,def{49,79},use{152,153,202},dvars{},pointers{cur},cfuncs{VIR_FREE{1}}
