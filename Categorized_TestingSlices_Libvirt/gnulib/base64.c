libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_alloc_ctx,outlen,def{550,571},use{570},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_alloc_ctx,needlen,def{557},use{559,563,571},dvars{outlen,out},pointers{},cfuncs{malloc {1}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_alloc_ctx,inlen,def{549},use{557,563},dvars{needlen},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_alloc_ctx,in,def{549},use{563},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_alloc_ctx,out,def{549,559,566},use{560,563,565},dvars{},pointers{},cfuncs{free {1}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_alloc_ctx,ctx,def{548},use{563},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,decode_4,out,def{375,384,407,427},use{434},dvars{outp},pointers{outp},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,decode_4,outp,def{373,434},use{375},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,decode_4,outleft,def{373},use{382,386,405,409,425,429},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,decode_4,inlen,def{372},use{376,389,394,412,417},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,decode_4,in,def{372},use{379,392,397,402,415,422},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode_alloc,,def{154,289,291},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode_alloc,out,def{114,132,136},use{137,140},dvars{},pointers{rados_key,base64},cfuncs{base64_encode {3}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode_alloc,outlen,def{116},use{130,136,138,140,142},dvars{out},pointers{},cfuncs{base64_encode {4},malloc {1}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode_alloc,inlen,def{114},use{116,130,140},dvars{},pointers{},cfuncs{base64_encode {2},BASE64_LENGTH {1}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode_alloc,in,def{114},use{140},dvars{},pointers{},cfuncs{base64_encode {1}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode,b64str,def{70},use{75,78,85,91},dvars{out},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode,out,def{68,75,78,83,91,101},use{101},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode,outlen,def{68},use{73,76,81,89,92,100},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode,inlen,def{67},use{73,84,91,94,95,96},dvars{out},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_encode,in,def{67},use{97},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,non_nl,def{509,512,514},use{524},dvars{},pointers{inlen,in,in_end,ctx},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,in_end,def{508},use{512,527},dvars{inlen},pointers{inlen,in},cfuncs{get_4 {3}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,outleft_save,def{475,482},use{504,505},dvars{outleft},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,ignore_newlines,def{462},use{466,496,511,519},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,outleft,def{461,505},use{475,482,483,504,524,531},dvars{outleft_save},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,flush_ctx,def{463,469},use{476,491,519},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,ctx_i,def{464,468},use{476},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,outlen,def{459},use{461,531},dvars{outleft},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,inlen,def{458,521,527},use{469,483,487,491,496,499,508,512,519,521,524,527,533},dvars{inlen,non_nl,flush_ctx},pointers{},cfuncs{get_4 {4}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,ctx,def{457},use{462,468,512},dvars{ctx_i,ignore_newlines},pointers{},cfuncs{get_4 {1}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,in,def{458},use{483,486,496,498,508,512,514,527},dvars{inlen},pointers{},cfuncs{get_4 {2}}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx,out,def{459},use{483,504,524},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,isbase64,ch,def{298},use{300},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,get_4,c,def{342},use{343,345},dvars{ctx},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,get_4,t,def{327},use{328,333},dvars{},pointers{in},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,get_4,n_non_newline,def{320,332,352},use{332},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,get_4,in,def{319,351},use{327,328,331,339},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,get_4,in_end,def{319},use{328,340},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,get_4,p,def{339},use{340,342,351},dvars{in,c},pointers{in},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,get_4,ctx,def{318,323,345},use{322,323,325,346,352,353},dvars{n_non_newline},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx_init,b64ctx,def{307},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,base64_decode_ctx_init,ctx,def{305},use{307},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/base64.c,to_uchar,ch,def{57},use{59},dvars{},pointers{},cfuncs{}
