libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateLinuxKernel,uts,def{164},use{50,74,75,117,121,167,173,174,178,179,183,190,192,208,211,214,216,220,223,227,230,233,236,239,249,252,256,259},dvars{},pointers{},cfuncs{sprintf {1},strcpy {1},uname{1}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateLinuxKernel,hint,def{162},use{105,109,112,132,137,138,175,180,185},dvars{retval},pointers{},cfuncs{vfprintf {2},fprintf{2},va_start {2},virHostMsgFail{2}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateLinuxKernel,level,def{161},use{175,180,185},dvars{},pointers{},cfuncs{virHostMsgFail{1}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateLinuxKernel,version,def{160},use{44,53,54,170,171,172,184,330,334,335},dvars{ret},pointers{},cfuncs{va_start{2},virVasprintf{3},virVasprintf{2},virVasprintf{1},virHostMsgCheck{4},virHostMsgCheck{3},virHostMsgCheck{2}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateLinuxKernel,thisversion,def{165},use{179,184},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateLinuxKernel,hvname,def{159},use{47,53,54,58,169},dvars{},pointers{},cfuncs{va_end{1},va_start{1},virHostMsgCheck{1}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateHasCPUFlag,line,def{142},use{144,147},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateHasCPUFlag,ret,def{136,148},use{155},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateHasCPUFlag,fp,def{135},use{138,144,153},dvars{},pointers{},cfuncs{VIR_FORCE_FCLOSE{1}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateHasCPUFlag,name,def{133},use{147},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateDevice,hint,def{119},use{105,109,112,124,132,137,138},dvars{retval},pointers{},cfuncs{vfprintf {2},fprintf{2},va_start {2},virHostMsgFail{2}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateDevice,level,def{118},use{124},dvars{},pointers{},cfuncs{virHostMsgFail{1}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateDevice,dev_name,def{117},use{44,54,121,123,330,334,335},dvars{ret},pointers{fmt,snapshotStrVol,params,n,format,ctl,str,status,,dev_name},cfuncs{virVasprintf{3},virVasprintf{2},virVasprintf{1},virHostMsgCheck{3}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostValidateDevice,hvname,def{116},use{47,53,54,58,121},dvars{},pointers{},cfuncs{va_end{1},va_start{1},virHostMsgCheck{1}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgWantEscape,wantEscape,def{67,70},use{73},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgWantEscape,detectTty,def{66,71},use{68},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgWantEscape,,def{64},use{64,66,69,74},dvars{},pointers{},cfuncs{_get_osfhandle {1},isatty{1}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgPass,,def{76},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgFail,hint,def{105},use{109,112,132,137,138},dvars{retval},pointers{grp,path,fmt,argv0,argv,program_name,hint},cfuncs{vfprintf {2},va_start {2},fprintf{2}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgFail,level,def{104},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgCheck,args,def{47},use{53,54,58},dvars{},pointers{},cfuncs{va_end{1},va_start{1}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgCheck,,def{44},use{54,330,334,335},dvars{ret},pointers{dev_name,str,ctl,format,version,,status,n,params,snapshotStrVol,fmt},cfuncs{virVasprintf{3},virVasprintf{2},virVasprintf{1}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgCheck,format,def{44},use{53,54},dvars{},pointers{version},cfuncs{va_start{2}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgCheck,msg,def{48},use{54,60,61,132},dvars{},pointers{},cfuncs{VIR_FREE{1},fprintf{3}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgCheck,prefix,def{43},use{60,132,137,138},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},fprintf{2}}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgSetQuiet,EXIT_FAILUREretquiet,def{40},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tools/virt-host-validate-common.c,virHostMsgSetQuiet,quietFlag,def{38},use{40},dvars{EXIT_FAILUREretquiet},pointers{},cfuncs{}
