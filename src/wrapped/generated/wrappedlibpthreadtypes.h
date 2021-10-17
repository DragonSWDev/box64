/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.1.0.16) *
 *******************************************************************/
#ifndef __wrappedlibpthreadTYPES_H_
#define __wrappedlibpthreadTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef int64_t (*iFp_t)(void*);
typedef void (*vFpi_t)(void*, int64_t);
typedef int64_t (*iFLp_t)(uintptr_t, void*);
typedef int64_t (*iFpi_t)(void*, int64_t);
typedef int64_t (*iFpL_t)(void*, uintptr_t);
typedef int64_t (*iFpp_t)(void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef int64_t (*iFpLp_t)(void*, uintptr_t, void*);
typedef int64_t (*iFppu_t)(void*, void*, uint64_t);
typedef int64_t (*iFppL_t)(void*, void*, uintptr_t);
typedef int64_t (*iFppp_t)(void*, void*, void*);
typedef int64_t (*iFpppp_t)(void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(__pthread_register_cancel, vFp_t) \
	GO(__pthread_unregister_cancel, vFp_t) \
	GO(__pthread_unwind_next, vFp_t) \
	GO(__pthread_mutex_destroy, iFp_t) \
	GO(__pthread_mutex_lock, iFp_t) \
	GO(__pthread_mutex_trylock, iFp_t) \
	GO(__pthread_mutex_unlock, iFp_t) \
	GO(__pthread_mutexattr_destroy, iFp_t) \
	GO(__pthread_mutexattr_init, iFp_t) \
	GO(pthread_attr_destroy, iFp_t) \
	GO(pthread_attr_init, iFp_t) \
	GO(pthread_barrierattr_destroy, iFp_t) \
	GO(pthread_barrierattr_init, iFp_t) \
	GO(pthread_condattr_destroy, iFp_t) \
	GO(pthread_condattr_init, iFp_t) \
	GO(pthread_mutex_destroy, iFp_t) \
	GO(pthread_mutex_lock, iFp_t) \
	GO(pthread_mutex_trylock, iFp_t) \
	GO(pthread_mutex_unlock, iFp_t) \
	GO(pthread_mutexattr_destroy, iFp_t) \
	GO(pthread_mutexattr_init, iFp_t) \
	GO(_pthread_cleanup_pop, vFpi_t) \
	GO(_pthread_cleanup_pop_restore, vFpi_t) \
	GO(pthread_getattr_np, iFLp_t) \
	GO(__pthread_mutexattr_settype, iFpi_t) \
	GO(pthread_attr_setdetachstate, iFpi_t) \
	GO(pthread_attr_setinheritsched, iFpi_t) \
	GO(pthread_attr_setschedpolicy, iFpi_t) \
	GO(pthread_attr_setscope, iFpi_t) \
	GO(pthread_barrierattr_setpshared, iFpi_t) \
	GO(pthread_condattr_setclock, iFpi_t) \
	GO(pthread_condattr_setpshared, iFpi_t) \
	GO(pthread_kill, iFpi_t) \
	GO(pthread_mutexattr_setkind_np, iFpi_t) \
	GO(pthread_mutexattr_setprotocol, iFpi_t) \
	GO(pthread_mutexattr_setpshared, iFpi_t) \
	GO(pthread_mutexattr_settype, iFpi_t) \
	GO(pthread_attr_setguardsize, iFpL_t) \
	GO(pthread_attr_setstacksize, iFpL_t) \
	GO(__pthread_key_create, iFpp_t) \
	GO(__pthread_mutex_init, iFpp_t) \
	GO(__pthread_once, iFpp_t) \
	GO(pthread_attr_getdetachstate, iFpp_t) \
	GO(pthread_attr_getguardsize, iFpp_t) \
	GO(pthread_attr_getinheritsched, iFpp_t) \
	GO(pthread_attr_getschedparam, iFpp_t) \
	GO(pthread_attr_getschedpolicy, iFpp_t) \
	GO(pthread_attr_getscope, iFpp_t) \
	GO(pthread_attr_getstackaddr, iFpp_t) \
	GO(pthread_attr_getstacksize, iFpp_t) \
	GO(pthread_attr_setschedparam, iFpp_t) \
	GO(pthread_attr_setstackaddr, iFpp_t) \
	GO(pthread_barrierattr_getpshared, iFpp_t) \
	GO(pthread_cond_init, iFpp_t) \
	GO(pthread_cond_wait, iFpp_t) \
	GO(pthread_condattr_getclock, iFpp_t) \
	GO(pthread_condattr_getpshared, iFpp_t) \
	GO(pthread_key_create, iFpp_t) \
	GO(pthread_mutex_init, iFpp_t) \
	GO(pthread_mutex_timedlock, iFpp_t) \
	GO(pthread_mutexattr_getkind_np, iFpp_t) \
	GO(pthread_mutexattr_getprotocol, iFpp_t) \
	GO(pthread_mutexattr_gettype, iFpp_t) \
	GO(pthread_once, iFpp_t) \
	GO(_pthread_cleanup_push, vFppp_t) \
	GO(_pthread_cleanup_push_defer, vFppp_t) \
	GO(pthread_attr_setaffinity_np, iFpLp_t) \
	GO(pthread_getaffinity_np, iFpLp_t) \
	GO(pthread_setaffinity_np, iFpLp_t) \
	GO(pthread_barrier_init, iFppu_t) \
	GO(pthread_attr_setstack, iFppL_t) \
	GO(__pthread_atfork, iFppp_t) \
	GO(pthread_atfork, iFppp_t) \
	GO(pthread_attr_getstack, iFppp_t) \
	GO(pthread_cond_timedwait, iFppp_t) \
	GO(pthread_create, iFpppp_t)

#endif // __wrappedlibpthreadTYPES_H_
