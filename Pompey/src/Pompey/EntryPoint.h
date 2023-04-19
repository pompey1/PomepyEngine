#pragma once
#ifdef PP_PLATFORM_WINDOWS

#include <stdio.h>
extern Pompey::Application* Pompey::CreateApplication();

int main(int argc, int* argv) {
	printf("testtests");
	auto app = Pompey::CreateApplication();
	app->Run();
	delete app;
}
#endif