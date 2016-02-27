/*
	DemoWindow.h
*/

#pragma once

//#ifndef _DEMOWINDOW_H_
//#define _DEMOWINDOW_H_

#include <Application.h>
#include <InterfaceKit.h>
#include "DemoView.h"


class DemoWindow : public BWindow
{
	public:
		virtual bool	QuitRequested();
		virtual void	MessageReceived(BMessage* message);
						DemoWindow();	
	private:
		DemoView*		vwMain;
};

#endif
