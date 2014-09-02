/*
	DemoView.cpp
*/
#include "DemoView.h"

DemoView::DemoView(BRect rect, char *name)	   	   
	: BView(rect, name, B_FOLLOW_ALL, B_WILL_DRAW)
{
	//define objects
	txtInfo = new BStringView(BRect(10, 10, rect.Width()-10, 30), "txtInfo", "Demo String", B_FOLLOW_LEFT_RIGHT | B_FOLLOW_TOP, B_WILL_DRAW);
	btnOne = new BButton(BRect(10, rect.Height()-30, rect.Width()-10, rect.Height()-10), "btnOne", "Button", new BMessage(BUTTON_ONE_MSG), B_FOLLOW_RIGHT | B_FOLLOW_BOTTOM, B_WILL_DRAW | B_NAVIGABLE);
	
	// set objects
	btnOne->MakeDefault(true);
	
	//add objects
	AddChild(btnOne);
	AddChild(txtInfo);
}
