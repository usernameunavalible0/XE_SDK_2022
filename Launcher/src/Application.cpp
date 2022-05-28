#include "Application.h"

#include <thread>
#include <chrono>

Application::Application()
{

}

Application::~Application()
{

}

void Application::preInit() // the first thing ran in engine run method (usually for declaring opengl things)
							// USE onInit for Client initialization things
{
	window = glfwCreateWindow(640, 480, "XE_ENGINE_WINDOW", NULL, NULL);
}

void Application::onInit()
{


}

void Application::onQuit() // Remember this is before glfw terminates.
						   // Should probably use it to disable opengl functions you create
{

}

void Application::onUpdate()
{
	if (glfwWindowShouldClose(window) != GL_TRUE) // MUST HAVE THIS IN EXE FOR SAME UNKNOWN REASON AS WHY POLL EVENTS IS HERE!!
	{
		glfwPollEvents(); // No idea why but for some reason this cant be run in the Engine run method???
	}
	else
	{
		quit();
	}
}