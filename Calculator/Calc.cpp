#include "Calc.h"

double Calc::Operation(double left, double right, int op) {
	
	switch (op) {
	case OP_ADD:
		return left + right;
		break;
	case OP_SUB:
		return left - right;
		break;
	case OP_MUL:
		return left * right;
		break;
	case OP_DIV:
		if (right != 0)
			return left / right;
		else
			throw std::runtime_error("Cannot divide by zero");
		break;
	}
}

void Calc::Hex(wxCommandEvent& evt) {

	/*HEX Conversion*/

}

void Calc::Bin(wxCommandEvent& evt) {

	/*BIN Conversion*/

}

void Calc::Dec(wxCommandEvent& evt) {

	/*DEC Conversion*/

}

void Calc::Mod(wxCommandEvent& evt) {

	/*MOD*/

}

