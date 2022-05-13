#pragma once

#include "Application/EApplication.h"
#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include <iostream>

class Application: public Engine::EApplication
{
public:

	Application();
	~Application();

	GLFWwindow* window;

	virtual void onInit();
	virtual void onQuit();
	virtual void onUpdate();
};
