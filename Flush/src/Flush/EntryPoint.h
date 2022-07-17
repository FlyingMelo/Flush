#pragma once

#ifdef FLS_PLATFORM_WINDOWS

Flush::Application* Flush::CreateApplication();

void main(int argc, char** argv)
{
	printf("Flush Engine\n");
	auto app = Flush::CreateApplication();
	app->Run();
	delete app;
}

#endif