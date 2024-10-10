/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibglTYPES32_H_
#define __wrappedlibglTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFi_t)(int32_t);
typedef void* (*pFp_t)(void*);
typedef void (*vFip_t)(int32_t, void*);
typedef void (*vFpp_t)(void*, void*);
typedef int32_t (*iFpp_t)(void*, void*);
typedef void* (*pFXp_t)(void*, void*);
typedef void (*vFipp_t)(int32_t, void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef void (*vFXpi_t)(void*, void*, int32_t);
typedef uint32_t (*uFuip_t)(uint32_t, int32_t, void*);
typedef void* (*pFXip_t)(void*, int32_t, void*);
typedef void (*vFuipu_t)(uint32_t, int32_t, void*, uint32_t);
typedef void (*vFuipp_t)(uint32_t, int32_t, void*, void*);
typedef void* (*pFXipp_t)(void*, int32_t, void*, void*);
typedef void* (*pFXppi_t)(void*, void*, void*, int32_t);
typedef void (*vFuippp_t)(uint32_t, int32_t, void*, void*, void*);
typedef void (*vFupupi_t)(uint32_t, void*, uint32_t, void*, int32_t);
typedef void (*vFuuippp_t)(uint32_t, uint32_t, int32_t, void*, void*, void*);
typedef void (*vFupupip_t)(uint32_t, void*, uint32_t, void*, int32_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(glXSwapIntervalMESA, iFi_t) \
	GO(glGetVkProcAddrNV, pFp_t) \
	GO(glXGetProcAddress, pFp_t) \
	GO(glXGetProcAddressARB, pFp_t) \
	GO(glVDPAUMapSurfacesNV, vFip_t) \
	GO(glVDPAUUnmapSurfacesNV, vFip_t) \
	GO(glDebugMessageCallback, vFpp_t) \
	GO(glDebugMessageCallbackAMD, vFpp_t) \
	GO(glDebugMessageCallbackARB, vFpp_t) \
	GO(glDebugMessageCallbackKHR, vFpp_t) \
	GO(eglDebugMessageControlKHR, iFpp_t) \
	GO(glXGetVisualFromFBConfig, pFXp_t) \
	GO(glProgramCallbackMESA, vFipp_t) \
	GO(eglSetBlobCacheFuncsANDROID, vFppp_t) \
	GO(glXSwapIntervalEXT, vFXpi_t) \
	GO(glCreateShaderProgramv, uFuip_t) \
	GO(glXChooseVisual, pFXip_t) \
	GO(glXGetFBConfigs, pFXip_t) \
	GO(glTransformFeedbackVaryings, vFuipu_t) \
	GO(glTransformFeedbackVaryingsEXT, vFuipu_t) \
	GO(glCompileShaderIncludeARB, vFuipp_t) \
	GO(glGetUniformIndices, vFuipp_t) \
	GO(glShaderSource, vFuipp_t) \
	GO(glShaderSourceARB, vFuipp_t) \
	GO(glXChooseFBConfig, pFXipp_t) \
	GO(glXCreateContext, pFXppi_t) \
	GO(glBindVertexBuffers, vFuippp_t) \
	GO(glMultiDrawElements, vFupupi_t) \
	GO(glMultiDrawElementsEXT, vFupupi_t) \
	GO(glBindBuffersRange, vFuuippp_t) \
	GO(glVertexArrayVertexBuffers, vFuuippp_t) \
	GO(glMultiDrawElementsBaseVertex, vFupupip_t)

#endif // __wrappedlibglTYPES32_H_
