#pragma once

#include <stdlib.h>
#include <stdexcept>

#define CLIENT_WINDOWS (_WIN32 || _WIN64)

#ifdef CLIENT_WINDOWS

#if defined CLIENT_EXPORTS
#define CLIENT_API __declspec(dllexport)
#else
#define CLIENT_API __declspec(dllimport)
#endif

#define CASSERT(x)\
{\
	if ((x) == 0) {__debugbreak(); abort(); }\
}

#endif