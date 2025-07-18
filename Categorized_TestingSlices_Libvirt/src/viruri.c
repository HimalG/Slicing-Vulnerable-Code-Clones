libvirt-1.1.0/src/util/viruri.c,virURIFormatParams,amp,def{284,291},use{288},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruri.c,virURIFormatParams,i,def{283},use{286},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruri.c,virURIFormatParams,buf,def{282},use{98,100,102,104,148,153,156,163,164,165,168,169,170,171,183,185,243,245,288,289,290,295,296,301,531,538,541,544,553,558,561,562,563,567,640,646,647,649},dvars{needSize,indent},pointers{buf,indent,pool,configbuf,new_meminfo,log},cfuncs{memset{1},virBufferAddChar{1},virBufferGetIndent{1},va_start{1},memcpy{1},virBufferFreeAndReset{1},va_end{1},virBufferAdd{1},virBufferAddLit{1},virBufferStrcat{1},VIR_FREE{1},virBufferURIEncodeString{1}}
libvirt-1.1.0/src/util/viruri.c,virURIFormatParams,uri,def{280},use{148,153,161,169,286,287,289,290,531,538,641,647,648},dvars{len},pointers{},cfuncs{strlen{1},memcpy{2},virBufferAdd{2},virBufferURIEncodeString{2},virBufferStrcat{2}}
libvirt-1.1.0/src/util/viruri.c,virURIFree,i,def{312},use{324},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruri.c,virURIFree,uri,def{310},use{314,317,318,319,320,321,322,324,325,326,328,330},dvars{},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/viruri.c,virURIParseParams,name,def{72,93,100,111},use{94,101,112,116,122,123,127},dvars{},pointers{eq,end,query},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/viruri.c,virURIParseParams,eq,def{65,82,83},use{83,92,99,100,106,111,114},dvars{},pointers{query},cfuncs{xmlURIUnescapeString{1},xmlURIUnescapeString{2}}
libvirt-1.1.0/src/util/viruri.c,virURIParseParams,query,def{66,131},use{68,71,75,77,79,82,86,93,100,106,111,114,131,132},dvars{value,name,query,end},pointers{end,uri},cfuncs{xmlURIUnescapeString{2},xmlURIUnescapeString{1},strlen{1},strchr{1}}
libvirt-1.1.0/src/util/viruri.c,virURIParseParams,value,def{72,114},use{115,122,124,128},dvars{},pointers{end,eq},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/viruri.c,virURIParseParams,end,def{65,75,77,79},use{76,78,83,86,93,99,114,131},dvars{},pointers{query},cfuncs{xmlURIUnescapeString{2}}
libvirt-1.1.0/src/util/viruri.c,virURIParseParams,uri,def{63},use{66,77,79,82,93,100,111,122},dvars{name,eq,end},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruri.c,virURIParse,length,def{196},use{203},dvars{},pointers{},cfuncs{memmove{3}}
libvirt-1.1.0/src/util/viruri.c,virURIParse,xmluri,def{157,160},use{162,174,176,178,179,182,185,188,190,213,218},dvars{ret},pointers{},cfuncs{xmlFreeURI{1}}
libvirt-1.1.0/src/util/viruri.c,virURIParse,ret,def{158,178,204},use{169,174,176,179,182,185,188,190,194,195,196,202,203,204,210,215,219,310,314,317,318,319,320,321,322,324,325,326,328,330},dvars{},pointers{},cfuncs{VIR_FREE{1},virURIFree{1},memmove{2},memmove{1},strlen{1}}
libvirt-1.1.0/src/util/viruri.c,virURIParse,uri,def{155},use{160,165},dvars{xmluri},pointers{},cfuncs{virReportError{2},xmlParseURI{1}}
libvirt-1.1.0/src/util/viruri.c,virURIParamAppend,pvalue,def{38},use{40,49,57},dvars{uri},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/viruri.c,virURIParamAppend,pname,def{37},use{40,48,56},dvars{uri},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/viruri.c,virURIParamAppend,value,def{35},use{40},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruri.c,virURIParamAppend,name,def{34},use{40},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruri.c,virURIParamAppend,uri,def{33,48,49,50},use{43,50,51},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruri.c,virURIFormat,xmluri,def{237,243,244,245,246,248,250,252,253},use{241,256,257,259,267},dvars{ret},pointers{},cfuncs{xmlSaveUri{1},memset{4},memset{1}}
libvirt-1.1.0/src/util/viruri.c,virURIFormat,NULLxmluri,def{264},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruri.c,virURIFormat,ret,def{239,267},use{268,276},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/src/util/viruri.c,virURIFormat,tmpserver,def{238},use{259,264,274},dvars{NULLxmluri},pointers{},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/src/util/viruri.c,virURIFormat,uri,def{235},use{243,244,245,246,248,250,252,253},dvars{xmluri},pointers{},cfuncs{}
