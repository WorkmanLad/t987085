#include <iostream>
#include <Metronome.h>
#include <ConsoleScreen.h>

using std::wcout, std::wcin, std::endl;

int main() {
    Metronome metronome;
    ConsoleScreen consoleScreen;

    consoleScreen.Display(metronome);

    return 0;
}
