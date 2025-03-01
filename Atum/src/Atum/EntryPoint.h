#pragma once
extern Atum::Application* Atum::CreateApplication();
#ifdef ATUM_PLATFORM_WINDOWS
	int main(int argc, char** argv)
	{
		auto app = Atum::CreateApplication();
		app->Run();
		delete app;
	}
#endif