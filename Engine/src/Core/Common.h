#pragma once

#include <stdlib.h>

#define ENGINE_WINDOWS (_WIN32 || _WIN64)

#ifdef ENGINE_WINDOWS

#if defined ENGINE_EXPORTS
#define ENGINE_API __declspec(dllexport)
#else
#define ENGINE_API __declspec(dllimport)
#endif

#define EASSERT(x)\
{\
	if ((x) == 0) {__debugbreak(); abort(); }\
}

#endif