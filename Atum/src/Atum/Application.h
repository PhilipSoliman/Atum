#pragma once
#include "Core.h"

namespace Atum
{
	class ATUM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
