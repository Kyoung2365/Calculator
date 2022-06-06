#include "Main.h"

wxIMPLEMENT_APP(Main);

bool Main::OnInit() {
	screen = new Screen();
	screen->Show();
	return true;
}