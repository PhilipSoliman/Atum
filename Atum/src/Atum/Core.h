#pragma once
#ifdef ATUM_PLATFORM_WINDOWS
	#ifdef ATUM_BUILD_DLL
		#define ATUM_API __declspec(dllexport)
	#else
		#define ATUM_API __declspec(dllimport)
	#endif
#else 
	#error Hazel only supports Windows!
#endif