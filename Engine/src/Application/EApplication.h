#pragma once
#include "Core/Common.h"
#include "Engine/Engine.h"

namespace Engine 
{

	class ENGINE_API EApplication
	{
	public:
		EApplication();
		virtual ~EApplication();

		virtual void onInit() {}
		virtual void onQuit() {}
		virtual void onUpdate() {}

		void run();
		void quit();

	public:
		static EApplication* get();

	private:
		static EApplication* m_Instance;
	public:
		bool m_isRunning = true;
		GEngine* m_engine = nullptr;
	};

}