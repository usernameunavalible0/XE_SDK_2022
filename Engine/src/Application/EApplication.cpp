#include "EApplication.h"
#include <stdexcept>

using namespace Engine;

EApplication* EApplication::m_Instance = nullptr;

EApplication::EApplication()
{
	EASSERT(!m_Instance)
	m_Instance = this;
}

EApplication::~EApplication() 
{

}

void EApplication::run()
{
	onInit();

	while (m_isRunning)
	{


	}

	onQuit();
}

void EApplication::quit()
{
	m_isRunning = false;
}

EApplication* EApplication::get()
{
	EASSERT(m_Instance);
	return m_Instance;
}