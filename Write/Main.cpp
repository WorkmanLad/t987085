#include "pch.h"
#include <Song.h>
#include <Note.h>
#include <ConsoleUI.h>

typedef int(*WindowFunction)();
HINSTANCE hInst;

int main() {
    WindowFunction windowFunction;
    hInst = LoadLibraryA("Engine.dll");

    if (hInst == 0)
        return 1;

    windowFunction = (WindowFunction)GetProcAddress(hInst, "WindowFunction");
    int result = windowFunction();

    wcout << "Result: " << result;

    FreeLibrary(hInst);
    return 0;
}

void test1() {
    ConsoleUI screen;

    Song song = Song("Test song", "Test song for development\nsecond line of the song\nthird line");
    song.AddNote(new Note("A", 0));
    song.AddNote(new Note("Em", 10));
    song.AddNote(new Note("D", 25));
    song.AddNote(new Note("Gm", 37));
    song.AddNote(new Note("A", 49));

    screen.Display(song);
}