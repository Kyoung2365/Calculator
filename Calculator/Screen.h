#pragma once
#include "wx/wx.h"

class Screen : public wxFrame
{

private:
	wxTextCtrl* Display = nullptr;

	std::vector<wxButton*> numButtons;
	wxButton* hexButton = nullptr;
	wxButton* binButton = nullptr;
	wxButton* decButton = nullptr;
	wxButton* modButton = nullptr;
	wxButton* deciButton = nullptr;
	wxButton* signButton = nullptr;
	wxButton* addButton = nullptr;
	wxButton* subButton = nullptr;
	wxButton* multButton = nullptr;
	wxButton* divButton = nullptr;
	wxButton* clsButton = nullptr;
	wxButton* equalsButton = nullptr;

public:
	Screen();
	~Screen();
	void OnButtonClick(wxCommandEvent& evt);
	void Clear(wxCommandEvent&);
	void SignButtonClick(wxCommandEvent& evt);
};

