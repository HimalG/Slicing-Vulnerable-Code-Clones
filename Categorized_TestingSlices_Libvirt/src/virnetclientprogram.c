libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispatch,client,def{210},use{261},dvars{},pointers{},cfuncs{func{2}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispatch,evdata,def{214},use{253,258,261,263,266},dvars{},pointers{prog},cfuncs{VIR_FREE{1},xdr_free{2},func{3}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispatch,event,def{213,245},use{247,253,258,261,263},dvars{},pointers{},cfuncs{xdr_free{1}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispatch,msg,def{211},use{196,201,217,218,221,223,227,229,233,235,239,241,245,249,258},dvars{event},pointers{},cfuncs{virNetClientProgramGetEvent{2},VIR_ERROR{2},VIR_DEBUG{7},VIR_DEBUG{6},VIR_DEBUG{5},VIR_DEBUG{4},VIR_DEBUG{3},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispatch,prog,def{209},use{195,200,201,202,217,221,223,227,229,245,261},dvars{event},pointers{},cfuncs{func{4},func{1},virNetClientProgramGetEvent{1},VIR_ERROR{3},VIR_ERROR{2},VIR_DEBUG{2}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramGetEvent,i,def{198},use{200},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramGetEvent,procedure,def{196},use{201},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramGetEvent,prog,def{195},use{200,201,202},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramMatches,msg,def{109},use{111,112},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramMatches,prog,def{108},use{111,112},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramGetProgram,prog,def{96},use{98},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispose,ATTRIBUTE_UNUSED,def{91},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramGetVersion,prog,def{102},use{104},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramOnceInit,retvirNetClientProgramClass,def{55},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramOnceInit,,def{53},use{55,57,58,119,121,135,140,141,143,144,145,147,150},dvars{klass},pointers{},cfuncs{VIR_FREE{1},virClassNew{1},virClassNew{4},virClassNew{0}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,i,def{283},use{304,306,365,367,404},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,msg,def{282,290,293,294,295,296,297,298,299,305},use{68,71,74,76,77,79,80,81,82,83,122,125,127,132,143,144,147,148,151,152,159,160,161,162,163,165,167,168,169,170,171,172,173,176,177,178,179,180,181,182,183,184,190,300,304,305,306,313,316,321,324,325,328,330,331,334,335,338,339,341,344,347,350,353,357,360,368,371,383,388,393,397,402,636,637,642,643,644,648,664,673,677,688,689,690,695,696,707,769},dvars{ret,infds,to,ninfds},pointers{},cfuncs{virLogMessage{8},virVasprintf{1},VIR_STRDUP_QUIET{1},virRaiseErrorFull{5},virRaiseErrorFull{13},virRaiseErrorFull{11},virRaiseErrorFull{10},virRaiseErrorFull{9},virRaiseErrorFull{8},virRaiseErrorFull{7},virRaiseErrorFull{6},virRaiseErrorFull{4},memset{4},memset{1},virNetClientProgramDispatchError{2},VIR_FORCE_CLOSE{1},cb{2},cb{1},xdr_free{2},VIR_DEBUG{4},VIR_DEBUG{3},VIR_DEBUG{2},VIR_FREE{1},virReportSystemError{2},virNetMessageFree{1},virReportError{2}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,ret,def{280},use{383},dvars{},pointers{ret},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,ninfds,def{277,288,360},use{287,288,359,361,365,367,403,404},dvars{},pointers{fdoutlen},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,ret_filter,def{280},use{383},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,infds,def{278,286,366,368},use{285,359,361,366,374,377,403,405},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1},virReportSystemError{2}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,msgfds,def{307},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,args,def{279},use{328},dvars{},pointers{args},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,proc,def{274},use{298,344,347},dvars{msg},pointers{},cfuncs{virReportError{3},virReportError{2}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,serial,def{273},use{297,350,353},dvars{msg},pointers{},cfuncs{virReportError{3},virReportError{2}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,client,def{272},use{331},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,outfds,def{276},use{307,310},dvars{msgfds},pointers{},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,noutfds,def{275},use{296,299},dvars{msg},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,args_filter,def{279},use{328},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramCall,prog,def{271},use{119,293,294,388},dvars{msg},pointers{},cfuncs{virNetClientProgramDispatchError{1}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramNew,NULLprog,def{78,81},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramNew,nevents,def{70},use{84},dvars{prog},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramNew,eventOpaque,def{71},use{85},dvars{prog},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramNew,prog,def{73,82,83,84,85},use{87},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramNew,events,def{69},use{83},dvars{prog},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramNew,version,def{68},use{82},dvars{prog},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramNew,program,def{67},use{81},dvars{NULLprog},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispatchError,err,def{122,148,152},use{125,127,132,143,144,147,151,159,160,161,162,163,165,167,168,169,170,171,172,173,176,177,178,179,180,181,182,183,184,190,330,334,335,636,637,642,643,644,648,664,673,677,688,689,690,695,696,707,769},dvars{ret,to},pointers{str,addr,uuidstr,node,,strp,configfile,disk,configstr,ctl,errorMessage,st,vmDef,def,msgDetail,err},cfuncs{virLogMessage{8},virVasprintf{1},VIR_STRDUP_QUIET{1},xdr_free{2},virRaiseErrorFull{5},virRaiseErrorFull{13},virRaiseErrorFull{11},virRaiseErrorFull{10},virRaiseErrorFull{9},virRaiseErrorFull{8},virRaiseErrorFull{7},virRaiseErrorFull{6},virRaiseErrorFull{4},memset{4},memset{1}}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispatchError,msg,def{120},use{127},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispatchError,ret,def{123,187},use{187,191},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,virNetClientProgramDispatchError,ATTRIBUTE_UNUSED,def{119},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/rpc/virnetclientprogram.c,GLOBAL,obj,def{51},use{},dvars{},pointers{},cfuncs{}
