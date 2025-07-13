libvirt-1.1.0/src/util/iohelper.c,usage,status,def{208},use{210,217},dvars{},pointers{},cfuncs{exit{1}}
libvirt-1.1.0/src/util/iohelper.c,runIO,got,def{143,152,171},use{156,158,167,170,173},dvars{},pointers{},cfuncs{memset{3},memset{1}}
libvirt-1.1.0/src/util/iohelper.c,runIO,end,def{89,169},use{115,128,177},dvars{},pointers{},cfuncs{virReportSystemError{1}}
libvirt-1.1.0/src/util/iohelper.c,runIO,shortRead,def{88,164},use{160,168},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,direct,def{87},use{160,168},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,fdoutname,def{85,111,124},use{111,174,178,187},dvars{},pointers{path},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/iohelper.c,runIO,fdinname,def{85,109,122},use{122,153},dvars{},pointers{path},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/iohelper.c,runIO,total,def{86},use{146,147,167,169},dvars{end,buflen},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,path,def{77},use{109,124,197},dvars{},pointers{},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/iohelper.c,runIO,fdout,def{84,110,123},use{168,173,184},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,fd,def{77},use{108,114,123,127,168,177,195},dvars{fdout,directend,fdin},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,ret,def{83,192,198},use{192,196,198,202},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,buf,def{80,96,103},use{98,102,152,170,173},dvars{got},pointers{base},cfuncs{memset{1}}
libvirt-1.1.0/src/util/iohelper.c,runIO,fdin,def{84,108,121},use{152},dvars{got},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,length,def{77},use{114,145,146,147},dvars{buflen,directend},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,base,def{79,102},use{92,96,102,103,152,201},dvars{got,buf,base},pointers{buf},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/iohelper.c,runIO,directend,def{114,127},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,oflags,def{77},use{87,106,138},dvars{direct},pointers{},cfuncs{virReportSystemError{2}}
libvirt-1.1.0/src/util/iohelper.c,runIO,alignMask,def{82},use{92,98,103,158,171},dvars{got,buf},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,runIO,buflen,def{81,147},use{92,98,146,149,152,158,170},dvars{got},pointers{},cfuncs{memset{3}}
libvirt-1.1.0/src/util/iohelper.c,prepare,fd,def{51,54,56},use{58,64,67,73},dvars{},pointers{},cfuncs{VIR_FORCE_CLOSE{1}}
libvirt-1.1.0/src/util/iohelper.c,prepare,offset,def{49},use{63,64,66},dvars{},pointers{},cfuncs{virReportSystemError{3}}
libvirt-1.1.0/src/util/iohelper.c,prepare,mode,def{48},use{54,55,58,66,118,135},dvars{fd},pointers{},cfuncs{orig_open {3},open {3},open{3}}
libvirt-1.1.0/src/util/iohelper.c,prepare,oflags,def{48},use{53,54,56,59,62,77,107,118,128,129,135},dvars{fd},pointers{},cfuncs{orig_open {2},va_start {2},open {2},open{2}}
libvirt-1.1.0/src/util/iohelper.c,prepare,path,def{48},use{54,56,59,61,62,66,68},dvars{mode,fd},pointers{},cfuncs{va_end {1},va_start {1},va_arg {1},virReportSystemError{2},open{1}}
libvirt-1.1.0/src/util/iohelper.c,main,program_name,def{233},use{132,137,138,238,244,256,261,266,271,279,293,302,317,320},dvars{retval},pointers{},cfuncs{vfprintf {2},va_start {2},fprintf{3},fprintf{2}}
libvirt-1.1.0/src/util/iohelper.c,main,fd,def{230,274},use{132,277,283,286,288,293,306},dvars{oflags},pointers{},cfuncs{fprintf{3},fcntl{1}}
libvirt-1.1.0/src/util/iohelper.c,main,mode,def{228},use{49,63,64,66,259,274},dvars{fd},pointers{},cfuncs{virReportSystemError{3},prepare{3}}
libvirt-1.1.0/src/util/iohelper.c,main,oflags,def{227,283,287,289},use{48,53,54,56,59,62,77,107,118,128,129,135,254,274,291,306},dvars{fd},pointers{},cfuncs{orig_open {2},va_start {2},open {2},open{2},prepare{2}}
libvirt-1.1.0/src/util/iohelper.c,main,offset,def{225},use{264,274},dvars{fd},pointers{},cfuncs{prepare{4}}
libvirt-1.1.0/src/util/iohelper.c,main,path,def{223,248},use{51,54,56,58,64,67,73,132,274,306,310,320},dvars{fd},pointers{argv},cfuncs{fprintf{3},unlink{1},VIR_FORCE_CLOSE{1},prepare{1}}
libvirt-1.1.0/src/util/iohelper.c,main,delete,def{229},use{269,309},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,main,err,def{224,315},use{134,138,141,316,317},dvars{},pointers{},cfuncs{fprintf{4}}
libvirt-1.1.0/src/util/iohelper.c,main,lengthIndex,def{231,253,276},use{253,276},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,main,length,def{226},use{300,306},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/iohelper.c,main,argv,def{221},use{132,233,248,250,254,256,259,261,264,266,269,271,274,277,279,300,302},dvars{fd,program_name},pointers{},cfuncs{fprintf{3}}
libvirt-1.1.0/src/util/iohelper.c,main,argc,def{221},use{250,252,269,275},dvars{},pointers{},cfuncs{}
