#pragma once
extern Atum::Application* Atum::CreateApplication();
#ifdef ATUM_PLATFORM_WINDOWS
	int main(int argc, char** argv)
	{
		Atum::Log::Init();
		ATUM_CORE_WARN("Initialized Log!");
		int a = 5;
		ATUM_INFO("Hello! Var={0}", a);

		auto app = Atum::CreateApplication();
		app->Run();
		delete app;
	}
#endif