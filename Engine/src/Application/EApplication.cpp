#include "EApplication.h"
#include <stdexcept>
#include <iostream>

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
	preInit();

	if (!window)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		quit();
	}

	glfwMakeContextCurrent(window);

	onInit();

	while (m_isRunning)
	{
		onUpdate();
		//if (glfwWindowShouldClose(window) != GL_TRUE) // must use if statment because of the stupid way this engine is setup
		//{
		//	onUpdate();
		//	//glfwPollEvents(); --- cant be run here probably because it relates to something about the acctual executable (but i dont know)
		//}
		//else
		//{
		//	m_isRunning = false;
		//}
	}
		onQuit();

		// Delete all the objects we've created
		glfwDestroyWindow(window);
		glfwTerminate();
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