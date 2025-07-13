libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainBlockStats,device,def{366},use{368,371},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainBlockStats,path,def{363},use{262,295,296,299,366},dvars{},pointers{def,path},cfuncs{xenLinuxDomainDeviceID{2}}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainBlockStats,stats,def{364},use{371},dvars{},pointers{stats},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainBlockStats,def,def{362},use{267,296,299,307,309,313,315,317,322,324,327,328,329,330,332,333,338,342,346,355,366,371},dvars{minor,retval},pointers{def},cfuncs{VIR_FREE{1},xenLinuxDomainDeviceID{1}}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainBlockStats,priv,def{361},use{371},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainDeviceID,scsi_majors,def{269},use{308,316},dvars{major},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainDeviceID,mod_path,def{267},use{296,299,307,309,313,315,317,322,324,327,328,329,330,332,333,338,342,346,355},dvars{retval,minor},pointers{def},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainDeviceID,part,def{265},use{307,309,313,315,318,322,324,327,328,329,330,332,333},dvars{retval,minor},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainDeviceID,major,def{264,308,316,323},use{310,319,325},dvars{retval},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainDeviceID,path,def{262},use{295,296,299},dvars{},pointers{path},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainDeviceID,minor,def{264,309,317,324},use{310,319,325},dvars{retval},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainDeviceID,ide_majors,def{277},use{323},dvars{major},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainDeviceID,retval,def{266,305,310,319,325,328,330,333},use{305,357},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xenLinuxDomainDeviceID,domid,def{262},use{341,345,349,353},dvars{},pointers{},cfuncs{virReportError{2}}
libvirt-1.1.0/src/xen/block_stats.c,disk_re_match,retval,def{235,238,249,252},use{238,249,252,258},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,disk_re_match,pmatch,def{236},use{230,240,244,245,250,251,254},dvars{err},pointers{},cfuncs{re_search_internal {4},regexec{4}}
libvirt-1.1.0/src/xen/block_stats.c,disk_re_match,err,def{234,240,244},use{241,246},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,disk_re_match,part,def{231,248},use{248,251},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,disk_re_match,regex,def{231},use{240,479,491,496,497,506},dvars{ret,err},pointers{},cfuncs{re_compile_internal {2},regcomp{2}}
libvirt-1.1.0/src/xen/block_stats.c,disk_re_match,myreg,def{233},use{223,232,240,244,250,251,254,256,473,488,514,522,525,664,665,666},dvars{err},pointers{},cfuncs{BE {1},re_search_internal {1},regfree{1},regexec{1},free_dfa_content {1},regcomp{1}}
libvirt-1.1.0/src/xen/block_stats.c,disk_re_match,path,def{231},use{224,244,246,251,254},dvars{length,err},pointers{},cfuncs{re_search_internal {2},strlen {1},regexec{2}}
libvirt-1.1.0/src/xen/block_stats.c,read_stat,fp,def{82,84},use{85,89,91,153},dvars{i},pointers{path},cfuncs{fread{1}}
libvirt-1.1.0/src/xen/block_stats.c,read_stat,r,def{80},use{96,99},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,read_stat,i,def{81,89},use{92},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,read_stat,str,def{79,95},use{89,95,96,153},dvars{i},pointers{},cfuncs{fread{4},fread{1}}
libvirt-1.1.0/src/xen/block_stats.c,read_stat,path,def{77},use{84,89,379,383,391,399,408},dvars{i},pointers{},cfuncs{fopen{1}}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stat,path,def{113},use{82,84,85,89,91,117,122,124,153},dvars{i,r},pointers{device},cfuncs{fread{1},VIR_FREE{1},read_stat{1}}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stat,i,def{112},use{116},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stat,paths,def{105},use{116,117},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stat,r,def{114,122},use{126,127},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stat,str,def{103},use{117},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stat,domid,def{103},use{117},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stat,device,def{103},use{117},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,check_bd_connected,len,def{143},use{153,155},dvars{rs},pointers{},cfuncs{xs_read{4}}
libvirt-1.1.0/src/xen/block_stats.c,check_bd_connected,r,def{142,164},use{166},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,check_bd_connected,rs,def{141,153},use{154,160,164,165},dvars{r},pointers{},cfuncs{STREQ{1},VIR_FREE{1}}
libvirt-1.1.0/src/xen/block_stats.c,check_bd_connected,s,def{141,151},use{42,44,45,47,56,57,149,151,153},dvars{rs},pointers{},cfuncs{va_end {1},vasnprintf {4},va_start {1},memcpy {3},xs_read{3},snprintf{3},snprintf{1}}
libvirt-1.1.0/src/xen/block_stats.c,check_bd_connected,domid,def{139},use{41,45,46,150},dvars{len},pointers{},cfuncs{vasnprintf {2},snprintf{2}}
libvirt-1.1.0/src/xen/block_stats.c,check_bd_connected,device,def{139},use{56,57,150},dvars{},pointers{},cfuncs{memcpy {3},snprintf{3}}
libvirt-1.1.0/src/xen/block_stats.c,check_bd_connected,priv,def{139},use{148,153},dvars{rs},pointers{},cfuncs{xs_read{1}}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stats,stats,def{171,174,175,176,177},use{182,183,184,195,196,197,208,209,215,217,218,224},dvars{},pointers{domid,device},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stats,rstats,def{173},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stats,domid,def{171},use{103,117,173,174,175,176,177,187,198,201,212,221},dvars{rstats},pointers{},cfuncs{virReportError{2},read_bd_stat{2}}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stats,device,def{171},use{82,84,85,89,91,113,117,122,124,153,173,174,175,176,177,198},dvars{r,i,rstats},pointers{},cfuncs{fread{1},VIR_FREE{1},read_stat{1},read_bd_stat{1}}
libvirt-1.1.0/src/xen/block_stats.c,read_bd_stats,priv,def{170},use{198},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xstrtoint64,errno,def{68},use{70},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xstrtoint64,s,def{63},use{69,70},dvars{lli},pointers{},cfuncs{strtoll{1}}
libvirt-1.1.0/src/xen/block_stats.c,xstrtoint64,lli,def{65,69},use{70,72},dvars{result},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xstrtoint64,base,def{63},use{69},dvars{lli},pointers{},cfuncs{strtoll{3}}
libvirt-1.1.0/src/xen/block_stats.c,xstrtoint64,result,def{63,72},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/xen/block_stats.c,xstrtoint64,p,def{66},use{69,70},dvars{lli},pointers{},cfuncs{strtoll{2}}
