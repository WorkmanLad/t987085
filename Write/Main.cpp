#include <iostream>
#include <map>
#include <Song.h>
#include <Note.h>
#include <ConsoleUI.h>
using std::wcout, std::wcin, std::endl, std::map;

int main() {
    ConsoleUI screen;
    Song song = Song(
        "Test song for development\nsecond line of the lyrics\nthird line now"
    );
    Note A_Major = Note("A", 0);
    Note E_Minor = Note("Em", 10);
    Note D_Major = Note("D", 25);
    Note G_Minor = Note("Gm", 37);
    Note A_Major2 = Note("A", 51);

    song.AddNote(&A_Major);
    song.AddNote(&E_Minor);
    song.AddNote(&D_Major);
    song.AddNote(&G_Minor);
    song.AddNote(&A_Major2);
    map<int, Note*> notes = song.GetNotes();

    screen.Display(song);
    
    return 0;
}