#pragma once
#ifdef PP_PLATFORM_WINDOWS
	#ifdef PP_BUILD_DLL
		#define Pompey_API _declspec(dllexport)
	#else
		#define Pompey_API _declspec(dllexport)
	#endif
#else
	#error The engine only supprt WINDOWS!
#endif