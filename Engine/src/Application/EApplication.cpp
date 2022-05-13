#include "EApplication.h"
#include <stdexcept>

Engine::EApplication* Engine::EApplication::m_Instance = nullptr;

Engine::EApplication::EApplication()
{
	EASSERT(!m_Instance)
	m_Instance = this;
	m_engine = CreateEngine();
}

Engine::EApplication::~EApplication() 
{
	m_engine->release();
}

void Engine::EApplication::run()
{
	onInit();

	while (m_isRunning)
	{

		onUpdate();
	}

	onQuit();
}

void Engine::EApplication::quit()
{
	m_isRunning = false;
}

Engine::EApplication* Engine::EApplication::get()
{
	EASSERT(m_Instance);
	return m_Instance;
}