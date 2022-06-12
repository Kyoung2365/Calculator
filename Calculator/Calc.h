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

	static double Operation(double left, double right, int op);

	void Hex(wxCommandEvent& evt);
	void Bin(wxCommandEvent& evt);
	void Dec(wxCommandEvent& evt);
	void Mod(wxCommandEvent& evt);
};

