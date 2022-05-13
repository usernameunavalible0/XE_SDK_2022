#include "CEngine.h"
#include "Core/Common.h"

Engine::CEngine* Engine::CEngine::m_Instance = nullptr;

Engine::GEngine* Engine::CreateEngine()
{
    return CEngine::create();
}

Engine::CEngine::CEngine()
{
}

Engine::CEngine::~CEngine()
{
}

void Engine::CEngine::release()
{

    CEngine::destroy();
}

Engine::CEngine* Engine::CEngine::create()
{
    EASSERT(!m_Instance);
    m_Instance = new CEngine();
    return m_Instance;
}

void Engine::CEngine::destroy()
{
    EASSERT(m_Instance);
    delete m_Instance;
    m_Instance = nullptr;
}
