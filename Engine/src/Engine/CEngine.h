#pragma once

#include "Engine/Engine.h"

namespace Engine {
	class CEngine: public Engine::GEngine
	{
	private:
		CEngine();
		~CEngine();
	public:
		virtual void release() override;

	public:
		static CEngine* create();
	
	private:
		static void destroy();
	private:
		static CEngine* m_Instance;
	};
}
