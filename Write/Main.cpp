#include <iostream>
#include <map>
#include <Song.h>
#include <Note.h>
using std::wcout, std::wcin, std::endl, std::map;

int main() {
    Song song = Song("Test song for development");
    Note A_Major = Note("A", 0);

    song.AddNote(&A_Major);
    map<int, Note*> notes = song.GetNotes();

    wcout << notes[0]->name << endl;
    
    return 0;
}