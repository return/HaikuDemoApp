/*
	Demo.cpp
*/

#include "Demo.h"
#include "DemoWindow.h"

int main(int, char**)
{
	Demo* app = new Demo();
	app->Run();
	
	return(0);
}

Demo::Demo()
	: BApplication(DEMO_SIG)
{
}

void
Demo::ReadyToRun()
{
	demoWindow = new DemoWindow();
	demoWindow->Show();
}


