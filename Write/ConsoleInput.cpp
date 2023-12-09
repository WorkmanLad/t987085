#include "ConsoleInput.h"
#include <Song.h>
#include <Note.h>
#include <iostream>
#include <iomanip>
using std::wcout, std::cin, std::endl, std::string;

Song* ConsoleInput::GetSongInput() {
    wcout << "Writing a new song\nStart with the lyrics:\n";
    string lyrics;
    char phrase[50];

    cin.unsetf(std::ios::skipws);
    while (cin.getline(phrase, 50)) {
        lyrics.append(phrase);
        lyrics.append("\n");
    }

    //wcout << "\n\nLyrics done. Now the notes\nType the note name, spacebar then it's position. EOF to stop.\n";

    wcout << "Lyrics: \n\n" << lyrics.c_str();
    
    Song* song = new Song(
        "Test song for development\nsecond line of the lyrics\nthird line now"
    );
    Note* A_Major = new Note("A", 0);
    Note* E_Minor = new Note("Em", 10);
    Note* D_Major = new Note("D", 25);
    Note* G_Minor = new Note("Gm", 37);
    Note* A_Major2 = new Note("A", 51);

    song->AddNote(A_Major);
    song->AddNote(E_Minor);
    song->AddNote(D_Major);
    song->AddNote(G_Minor);
    song->AddNote(A_Major2);

    return song;
}
