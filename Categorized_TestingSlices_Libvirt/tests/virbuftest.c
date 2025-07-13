libvirt-1.1.0/tests/virbuftest.c,testBufTrim,ret,def{150,179},use{179,184},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,testBufTrim,expected,def{149},use{168,169},dvars{},pointers{},cfuncs{virtTestDifference{2}}
libvirt-1.1.0/tests/virbuftest.c,testBufTrim,bufinit,def{146},use{153},dvars{buf},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,testBufTrim,buf,def{147,153},use{152,155,156,157,158,159,160,162,163,164,165,167,173,174,182,243,245,666,672,679,680,682},dvars{len2},pointers{},cfuncs{VIR_FREE{1},virBufferFreeAndReset{1},strlen{1},virBufferContentAndReset{1},virBufferAddLit{1},virBufferTrim{1}}
libvirt-1.1.0/tests/virbuftest.c,testBufTrim,result,def{148,167},use{168,169,183,356,359,360,385},dvars{},pointers{buf},cfuncs{VIR_FREE{1},(int) {3},strlen{1},virtTestDifference{3}}
libvirt-1.1.0/tests/virbuftest.c,testBufTrim,ATTRIBUTE_UNUSED,def{144},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,mymain,ret,def{191},use{206},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,mymain,,def{189},use{206},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,testBufAutoIndent,ret,def{68,73,78,84,91,98,105,111,116,138},use{73,78,84,91,98,105,111,116,138,141},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,testBufAutoIndent,expected,def{65},use{136,137},dvars{},pointers{},cfuncs{virtTestDifference{2}}
libvirt-1.1.0/tests/virbuftest.c,testBufAutoIndent,bufinit,def{63},use{64},dvars{buf},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,testBufAutoIndent,buf,def{64},use{55,57,58,59,60,61,70,71,75,76,77,79,80,81,82,83,86,87,88,89,93,94,95,96,98,100,101,102,103,104,107,108,109,113,114,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,135,148,153,156,161,163,164,165,168,169,170,171,183,185,243,245,290,292,293,294,295,369,385,391,437,438,453,457,486,502,508,517,518,531,538,541,544,553,558,561,562,563,567,582,600,610,625,626,640,646,647,649},dvars{len,needSize,indent},pointers{},cfuncs{virBufferVasprintf{3},virBufferEscapeShell{1},memset{1},strlen{1},memcpy{2},memcpy{1},va_start{1},virBufferEscape{1},VIR_FREE{1},virBufferAddChar{1},virBufferSetError{1},virBufferAdjustIndent{1},virBufferAdd{1},virBufferAdd{2},va_end{1},virBufferAddLit{1},virBufferURIEncodeString{1},virBufferContentAndReset{1},virBufferEscapeSexpr{1},virBufferStrcat{1},virBufferEscapeString{1},virBufferGetIndent{1},virBufferFreeAndReset{1},virBufferAsprintf{3},virBufferAsprintf{1}}
libvirt-1.1.0/tests/virbuftest.c,testBufAutoIndent,result,def{67,135},use{136,137,140,356,359,360,385},dvars{},pointers{buf},cfuncs{VIR_FREE{1},(int) {3},strlen{1},virtTestDifference{3}}
libvirt-1.1.0/tests/virbuftest.c,testBufAutoIndent,ATTRIBUTE_UNUSED,def{61},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,testBufInfiniteLoop,info,def{29},use{43},dvars{},pointers{data},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,testBufInfiniteLoop,ret,def{28,48,53},use{48,53,58},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,testBufInfiniteLoop,addstr,def{27},use{39,44,46,56,290,366,372,378,379,380,390},dvars{len},pointers{},cfuncs{VIR_FREE{1},virBufferAsprintf{3},strlen{1},virBufferEscapeString{3}}
libvirt-1.1.0/tests/virbuftest.c,testBufInfiniteLoop,buf,def{26},use{31,39,44,46,50,290,292,293,294,295,369,385,391,437,438},dvars{},pointers{},cfuncs{va_end{1},virBufferVasprintf{3},va_start{1},VIR_FREE{1},virBufferAddChar{1},virBufferContentAndReset{1},virBufferEscapeString{1},virBufferAsprintf{3},virBufferAsprintf{1}}
libvirt-1.1.0/tests/virbuftest.c,testBufInfiniteLoop,bufinit,def{25},use{26},dvars{buf},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,testBufInfiniteLoop,bufret,def{27,50},use{51,57},dvars{},pointers{buf},cfuncs{VIR_FREE{1}}
libvirt-1.1.0/tests/virbuftest.c,testBufInfiniteLoop,data,def{23},use{29},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/tests/virbuftest.c,GLOBAL,,def{13},use{},dvars{},pointers{},cfuncs{}
