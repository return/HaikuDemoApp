/*
	DemoWindow.h
*/

#ifndef _DEMOWINDOW_H_
#define _DEMOWINDOW_H_

#include <Application.h>
#include <InterfaceKit.h>
#include "DemoView.h"


class DemoWindow : public BWindow
{
	public:
								DemoWindow();
		virtual bool			QuitRequested();
		virtual void			MessageReceived(BMessage* message);
	
	private:
	
		DemoView*		vwMain;

};

#endif
