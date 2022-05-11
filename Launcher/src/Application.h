#pragma once

#include "Application/EApplication.h"

class Application: public Engine::EApplication
{
public:
	Application();
	~Application();

	virtual void onInit();
	virtual void onQuit();

};

