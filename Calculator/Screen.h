#pragma once
#include "wx/wx.h"
#include <vector>
#include <string>

class Screen : public wxFrame
{
private:
	wxTextCtrl* Display;
	std::vector<wxButton*> numButtons;
	wxButton* hexButton;
	wxButton* binButton;
	wxButton* decButton;
	wxButton* modButton;
	wxButton* deciButton;
	wxButton* signButton;
	wxButton* addButton;
	wxButton* subButton;
	wxButton* multButton;
	wxButton* divButton;
	wxButton* clsButton;
	wxButton* equalsButton;
public:
	Screen();
	~Screen();
};

