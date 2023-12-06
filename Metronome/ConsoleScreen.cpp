#include "ConsoleScreen.h"
#include <iostream>
using std::cout, std::endl;

void ConsoleScreen::Display(Metronome& metronome) const {
    cout << "Beats per minute: " << metronome.GetBPM();
    cout << "\nTime signature: " << GetTimeSignature(metronome.GetTimeSignature()) << endl;
}

const char* ConsoleScreen::GetTimeSignature(int ts) const {
	switch (ts) {
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
