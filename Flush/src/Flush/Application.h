#pragma once

#include "Core.h"

namespace Flush {

	class FLUSH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

