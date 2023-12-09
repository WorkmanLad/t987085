#include <iostream>
#include <map>
#include <Song.h>
#include <Note.h>
#include <ConsoleUI.h>
#include <ConsoleInput.h>
using std::wcout, std::wcin, std::endl, std::map;

int main() {
    ConsoleUI screen;
    ConsoleInput input;

    Song* song = input.GetSongInput();

    wcout << endl;

    screen.Display(*song);
    
    return 0;
}