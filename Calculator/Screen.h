#pragma once
#include "wx/wx.h"
#include <vector>
#include <string>

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

	std::string preDecimal;
	std::string postDecimal;
	bool decimal = false;
	bool positive = true;
	bool entryMode = true;
	double total = 0;
	double last = 0;
	int op = -1;
public:
	Screen();
	~Screen();
	
	void OnButtonClick(wxCommandEvent& ext);
	void Clear();

	template <int OP>
	void SignButtonClick(wxCommandEvent&);

	void DisplayUpdate();

	wxDECLARE_EVENT_TABLE();
};

