/*
	Demo.h
*/

#pragma once

//#ifndef _DEMO_H_
//#define _DEMO_H_

#include "DemoWindow.h"
#include <Application.h>

#define DEMO_SIG "application/x-vnd.Demo"

class Demo: public BApplication
{
	public:
	virtual void	ReadyToRun();
					Demo();
	private:
		DemoWindow*	demoWindow;
};

#endif


