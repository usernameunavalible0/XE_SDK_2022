#include "Application.h"

#include <thread>
#include <chrono>

Application::Application()
{

}

Application::~Application()
{

}


void Application::onInit()
{


	window = glfwCreateWindow(640, 480, "XE_ENGINE_WINDOW", NULL, NULL);

	if (!window)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
	}

	glfwMakeContextCurrent(window);

	gladLoadGL();
}

void Application::onQuit()
{
	// Delete all the objects we've created
	glfwDestroyWindow(window);
	glfwTerminate();
}

void Application::onUpdate()
{
	if (glfwWindowShouldClose(window) != GL_TRUE)
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	else
	{
		EApplication::quit();
	}
}