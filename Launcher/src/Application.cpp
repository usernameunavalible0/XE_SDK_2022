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
							// USE onInit for Client/Server initialization things
{
	window = glfwCreateWindow(800, 600, "XE_ENGINE_WINDOW", NULL, NULL);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

}

void Application::onInit()
{

}

void Application::onQuit() // Remember this is before glfw terminates.
						   // Should probably use it to disable opengl functions you create
{

}

void drawPlayer()
{
	glColor3f(1, 1, 0);
	glPointSize(8);
	glBegin(GL_POINTS);
	glVertex2i(300, 300);
	glEnd();
}

void Application::onUpdate()
{
	if (glfwWindowShouldClose(window) != GL_TRUE) // MUST HAVE THIS IN EXE FOR SAME UNKNOWN REASON AS WHY POLL EVENTS IS HERE!!
	{
		glfwPollEvents(); // No idea why but for some reason this cant be run in the Engine run method???
		glfwSwapBuffers(window);
	}
	else
	{
		quit();
	}

}