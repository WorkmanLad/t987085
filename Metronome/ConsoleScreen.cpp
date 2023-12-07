#include "ConsoleScreen.h"
#include <iostream>
#include <Metronome.h>

using std::wcout, std::endl;

void ConsoleScreen::Display(Metronome& m) {
    wcout << "Beats per minute: " << m.GetBPM();
	wcout << "\nTime signature: " << GetTimeSignature(m.GetTimeSignature()) << endl;
}

const char* ConsoleScreen::GetTimeSignature(int n) {
	switch (n) {
		case 1:
			return "1/4";
		case 2:
			return "2/4";
		case 3:
			return "3/4";
		default:
			return "4/4";
	}
}
