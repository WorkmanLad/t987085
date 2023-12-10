#include <iostream>
#include <map>
#include <Song.h>
#include <Note.h>
#include <ConsoleUI.h>
using std::wcout, std::wcin, std::endl, std::map;

int main() {
    ConsoleUI screen;

    Song song = Song("Test song for development\nsecond line of the song\nthird line");
    song.AddNote(new Note("A", 0));
    song.AddNote(new Note("Em", 10));
    song.AddNote(new Note("D", 25));
    song.AddNote(new Note("Gm", 37));
    song.AddNote(new Note("A", 49));

    screen.Display(song);
    
    return 0;
}