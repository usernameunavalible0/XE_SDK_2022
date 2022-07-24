#pragma once

#include "Application/EApplication.h"
#include "CS_Inter/ClientServer.h"
#include "CClient.h"
//#include "GLFW/glfw3.h"

#include <iostream>

class Application: public Engine::EApplication
{
public:

	Application();
	~Application();

	virtual void preInit();
	virtual void onInit();
	virtual void onQuit();
	virtual void onUpdate();

};

class Client : public CClient::CCLient
{
public:
	Client();
	~Client();

};