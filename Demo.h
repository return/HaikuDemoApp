/*
	Demo.h
*/

#ifndef _DEMO_H_
#define _DEMO_H_

#include "DemoWindow.h"
#include <Application.h>

#define DEMO_SIG "application/x-vnd.Demo"

class Demo: public BApplication
{
	public:
						Demo();
		virtual void	ReadyToRun();
	private:
		DemoWindow*		demoWindow;
};

#endif


