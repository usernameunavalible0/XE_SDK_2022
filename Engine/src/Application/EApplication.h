#pragma once
#include "Core/Common.h"


namespace Engine 
{

	class ENGINE_API EApplication
	{
	public:
		EApplication();
		virtual ~EApplication();

		virtual void onInit() {}
		virtual void onQuit() {}

		void run();
		void quit();

	public:
		static EApplication* get();

	private:
		static EApplication* m_Instance;
	public:
		bool m_isRunning = true;
	};

}