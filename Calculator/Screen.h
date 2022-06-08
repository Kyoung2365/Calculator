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
	double total = 0;
	double last = 0;
	int op = -1;
	bool entryMode = true;

	double getCurrentValue();
	void updateDisplay();
	void Clear();
	void performOp();
	void showTotal();

	template<int NUM>
	void onNumButton(wxCommandEvent&);
	template<int OP>
	void onOpButton(wxCommandEvent&);

public:
	Screen();
	~Screen();
	
	wxDECLARE_EVENT_TABLE();

};

