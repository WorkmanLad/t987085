#include <iostream>
#include <Metronome.h>
#include <ConsoleScreen.h>

using std::wcout, std::wcin, std::endl;

int main() {
    Metronome metronome;
    ConsoleScreen consoleScreen;

    consoleScreen.Display(metronome);

    metronome.Start();

    int i = 0;
    while (i < 1000000)
        ++i;

    return 0;
}
