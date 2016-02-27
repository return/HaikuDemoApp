/*
	DemoView.h
*/

#pragma once

//#ifndef DEMOVIEW_H
//#define DEMOVIEW_H

#include <Application.h>
#include <InterfaceKit.h>

#define		BUTTON_ONE_MSG		'BTN1'

class DemoView : public BView 
{
	public:
		DemoView(BRect frame, char *name); 
	private:
		BStringView*	txtInfo;
		BButton*		btnOne;
};

#endif
