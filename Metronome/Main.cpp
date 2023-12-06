#include <Metronome.h>
#include <ConsoleScreen.h>
#include <iostream>
using std::wcout, std::wcin, std::endl;

int main() {
    Metronome metronome;
    ConsoleScreen screen;

    metronome.SetBPM(100);
    screen.Display(metronome);

    return 0;
}