libvirt-1.1.0/gnulib/tests/test-pipe.c,is_nonblocking,ASSERT,def{80},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/tests/test-pipe.c,is_nonblocking,flags,def{79},use{80,81},dvars{},pointers{},cfuncs{ASSERT {1}}
libvirt-1.1.0/gnulib/tests/test-pipe.c,is_nonblocking,fd,def{73},use{80},dvars{ASSERT},pointers{},cfuncs{ fcntl {1}}
libvirt-1.1.0/gnulib/tests/test-pipe.c,is_cloexec,ASSERT,def{66},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/tests/test-pipe.c,is_cloexec,flags,def{61,65},use{62,63,66,67},dvars{},pointers{},cfuncs{ASSERT {1},GetHandleInformation {2}}
libvirt-1.1.0/gnulib/tests/test-pipe.c,is_cloexec,h,def{60},use{62},dvars{},pointers{},cfuncs{GetHandleInformation {1}}
libvirt-1.1.0/gnulib/tests/test-pipe.c,is_cloexec,fd,def{57},use{60,66},dvars{ASSERT},pointers{},cfuncs{ fcntl {1},_get_osfhandle {1}}
libvirt-1.1.0/gnulib/tests/test-pipe.c,is_open,fd,def{40},use{46,51},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/tests/test-pipe.c,main,fd,def{88,90,91},use{90,91,92,93,94,95,96,97,98,99,100,101},dvars{},pointers{},cfuncs{is_cloexec {1},is_open {1},is_nonblocking {1},ASSERT {1},pipe {1}}
