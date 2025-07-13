libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_destroy_func,lock,def{1007,1012},use{1009,1011,1012},dvars{},pointers{},cfuncs{DeleteCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_func,,def{1019},use{1023},dvars{},pointers{},cfuncs{InterlockedIncrement {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_func,initfunction,def{1019},use{1029},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_func,once_control,def{1019,1028,1030},use{1021,1023,1026,1027,1028,1030,1031,1036,1040,1042,1046,1047,1048},dvars{},pointers{},cfuncs{InterlockedDecrement {1},LeaveCriticalSection {1},EnterCriticalSection {1},InitializeCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_unlock_func,lock,def{992,1000},use{994,996,998,1000,1001},dvars{},pointers{},cfuncs{LeaveCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_destroy_func,lock,def{935,946},use{937,939,941,942,943,944,945,946},dvars{},pointers{},cfuncs{free {1},DeleteCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_unlock_func,lock,def{891,901},use{893,895,896,899,901,906,908,911,913,917,920,921,926,927,930},dvars{},pointers{},cfuncs{gl_waitqueue_notify_first {1},LeaveCriticalSection {1},gl_waitqueue_notify_all {1},EnterCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_wrlock_func,result,def{860,863},use{864},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_wrlock_func,event,def{857},use{858,863,866},dvars{result},pointers{},cfuncs{CloseHandle {1},WaitForSingleObject {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_wrlock_func,lock,def{838},use{840,842,844,848,851,853,857,861,869,878,880,882,885,886},dvars{},pointers{},cfuncs{LeaveCriticalSection {1},gl_waitqueue_add {1},EnterCriticalSection {1},glthread_rwlock_init {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_rdlock_func,result,def{807,810},use{811},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_rdlock_func,event,def{804},use{805,810,813},dvars{result},pointers{},cfuncs{CloseHandle {1},WaitForSingleObject {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_rdlock_func,lock,def{784},use{786,788,790,794,797,800,804,808,816,825,827,829,832,833},dvars{},pointers{},cfuncs{LeaveCriticalSection {1},gl_waitqueue_add {1},EnterCriticalSection {1},glthread_rwlock_init {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_init_func,lock,def{953,955,956,958},use{955,956,957,958},dvars{},pointers{},cfuncs{InitializeCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_wrlock_multithreaded,lockerr,def{180},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_wrlock_multithreaded,errerr,def{94},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_wrlock_multithreaded,err,def{80,82,87,178,189},use{83,84,88,91,95,96,181,182,190,194},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_wrlock_multithreaded,lock,def{76,176},use{78,82,85,87,90,94,98,180,184,188,189,192,193,196,198,199},dvars{lockerr,errerr,err},pointers{},cfuncs{pthread_cond_wait {2},pthread_cond_wait {1},pthread_mutex_unlock {1},glthread_rwlock_init_multithreaded {1},pthread_mutex_lock {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_destroy_multithreaded,EINVALerr,def{381},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_destroy_multithreaded,errlock,def{384},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_destroy_multithreaded,err,def{377},use{382,383},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_destroy_multithreaded,lock,def{375,443,582},use{379,381,384,445,447,584,586},dvars{EINVALerr},pointers{},cfuncs{pthread_mutex_destroy {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_notify_all,index,def{764},use{765,766},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_notify_all,i,def{760},use{762,764},dvars{index},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_notify_all,wq,def{758,769,770},use{762,764,765,766,767,769,770},dvars{index},pointers{},cfuncs{SetEvent {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_notify_first,wq,def{747,753},use{749,750,751,752,753},dvars{},pointers{},cfuncs{SetEvent {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_init_multithreaded,errlock,def{336,400,539},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_init_multithreaded,errerr,def{289,292,298,304,318,321,327,333},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_init_multithreaded,err,def{287,316,395,397,534,536},use{290,291,293,296,299,302,305,306,319,320,322,325,328,331,334,335,398,399,537,538},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_init_multithreaded,attributes,def{286,315},use{289,292,295,298,301,304,318,321,324,327,330,333},dvars{errerr},pointers{},cfuncs{pthread_mutex_init {2},pthread_mutexattr_destroy {1},pthread_mutexattr_settype {1},pthread_mutexattr_init {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_init_multithreaded,lock,def{284,313,393,401,532,540},use{298,327,336,397,401,536,540},dvars{err,errerr},pointers{},cfuncs{mutex_init {1},pthread_mutex_init {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,INVALID_HANDLE_VALUEindex,def{737},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,i,def{717},use{721,724},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,old_alloc,def{715},use{718,720},dvars{limit},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,limit,def{720},use{721},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,old_offset,def{716},use{718,720},dvars{limit},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,old_count,def{714},use{718,720,724},dvars{limit},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,event,def{699,733},use{734,740,742},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,new_array,def{705,722,725},use{707,728},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,index,def{700},use{738,739},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,new_alloc,def{704},use{706,729,737},dvars{INVALID_HANDLE_VALUEindex},pointers{},cfuncs{realloc {2}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_add,wq,def{697,726,728,729,740},use{702,704,706,712,714,715,716,726,737,738,739,741},dvars{INVALID_HANDLE_VALUEindex,old_offset,old_count,old_alloc,new_alloc},pointers{event,new_alloc,new_array},cfuncs{realloc {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,gl_waitqueue_init,wq,def{686,688,689,690,691},use{689,690,691},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_lock_unlock_func,lock,def{662},use{664,666},dvars{},pointers{},cfuncs{LeaveCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_lock_init_func,lock,def{637,640},use{639,640},dvars{},pointers{},cfuncs{InitializeCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_singlethreaded,firstbyte,def{461,465},use{462},dvars{},pointers{once_control},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_singlethreaded,once_control,def{457,504,510,615,621},use{461,507,618,621},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_multithreaded,err,def{596,600},use{601,602},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_multithreaded,,def{497,592},use{499,500,600,608},dvars{err},pointers{},cfuncs{mutex_unlock {1},pth_once {3},pth_once {2},pth_once {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_multithreaded,initfunction,def{497,592},use{606},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_multithreaded,once_control,def{497,592,605},use{500,594,600,603,605,608},dvars{err},pointers{},cfuncs{mutex_lock {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_once_call,arg,def{489},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_unlock_multithreaded,lock,def{367,427,435,566,574},use{369,371,429,431,433,436,568,570,572,575},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_lock_multithreaded,self,def{408,547},use{409,416,548,555},dvars{errlock},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_lock_multithreaded,errlock,def{416,555},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_lock_multithreaded,errerr,def{359},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_lock_multithreaded,err,def{345,347,352,411,413,550,552},use{348,349,353,356,360,361,414,415,553,554},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_lock_multithreaded,lock,def{341,406,545},use{343,347,350,352,355,359,363,409,413,418,420,548,552,557,559},dvars{errerr,err},pointers{},cfuncs{pthread_mutex_unlock {1},mutex_lock {1},glthread_recursive_lock_init_multithreaded {1},pthread_mutex_lock {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_destroy_multithreaded,errerr,def{266,269},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_destroy_multithreaded,EINVALerr,def{116},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_destroy_multithreaded,lockerr,def{263},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_destroy_multithreaded,errlock,def{119},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_destroy_multithreaded,err,def{112,261},use{117,118,264,265,267,268,270,271},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_destroy_multithreaded,lock,def{110,259},use{114,116,119,263,266,269},dvars{errerr,lockerr,EINVALerr},pointers{},cfuncs{pthread_cond_destroy {1},pthread_mutex_destroy {1},pthread_rwlock_destroy {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_init_func,lock,def{774,779,780},use{776,777,778,779,780},dvars{},pointers{},cfuncs{gl_waitqueue_init {1},InitializeCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_init_multithreaded,errerr,def{135,138},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_init_multithreaded,errlock,def{45,141},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_init_multithreaded,err,def{40,130,132},use{43,44,133,134,136,137,139,140},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_init_multithreaded,memcpynewslenerr,def{42},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_init_multithreaded,lock,def{38,128,142},use{42,45,132,135,138,141,142},dvars{errerr,err,memcpynewslenerr},pointers{},cfuncs{pthread_mutex_init {1},pthread_cond_init {1},pthread_rwlock_init {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_rdlock_multithreaded,errerr,def{68},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_rdlock_multithreaded,err,def{54,56,61,149,151,164},use{57,58,62,65,69,70,152,153,165,168},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_rdlock_multithreaded,lock,def{50,147},use{52,56,59,61,64,68,72,151,160,164,167,171,172},dvars{errerr,err},pointers{},cfuncs{pthread_cond_wait {2},pthread_cond_wait {1},pthread_mutex_unlock {1},glthread_rwlock_init_multithreaded {1},pthread_mutex_lock {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_lock_destroy_func,lock,def{671,676},use{673,675,676},dvars{},pointers{},cfuncs{DeleteCriticalSection {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_lock_func,self,def{976},use{977,980},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_recursive_lock_lock_func,lock,def{962,980},use{964,966,968,972,977,979,982,984},dvars{},pointers{self},cfuncs{EnterCriticalSection {1},glthread_recursive_lock_init {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_unlock_multithreaded,errerr,def{247},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_unlock_multithreaded,lockerr,def{207},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_unlock_multithreaded,err,def{205,237},use{208,209,238,241,248,251},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_unlock_multithreaded,EINVALlock,def{218},use{},dvars{},pointers{},cfuncs{}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_rwlock_unlock_multithreaded,lock,def{102,203},use{104,106,207,210,213,215,218,223,225,228,230,234,237,240,247,250,255},dvars{errerr,err,lockerr},pointers{},cfuncs{pthread_cond_broadcast {1},pthread_mutex_unlock {1},pthread_cond_signal {1},pthread_mutex_lock {1}}
libvirt-1.1.0/gnulib/lib/glthread/lock.c,glthread_lock_lock_func,lock,def{644},use{646,648,650,654,657},dvars{},pointers{},cfuncs{EnterCriticalSection {1},glthread_lock_init {1}}
