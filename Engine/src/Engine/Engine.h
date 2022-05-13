#pragma once

#include "Core/Common.h"

namespace Engine 
{
	class GEngine
	{
	public:
		GEngine() {}
		~GEngine() {}
		virtual void release() = 0;
	};

	ENGINE_API GEngine* CreateEngine();
}