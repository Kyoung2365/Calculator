#pragma once
#include "wx/wx.h"

class Calc
{
public:
	enum operation_type {
		OP_ADD,
		OP_SUB,
		OP_MUL,
		OP_DIV
	};

	void Equals(wxCommandEvent& evt);
	void Hex(wxCommandEvent& evt);
	void Bin(wxCommandEvent& evt);
	void Dec(wxCommandEvent& evt);
	void Mod(wxCommandEvent& evt);
};

