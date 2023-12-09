#include "ConsoleInput.h"
#include <Song.h>
#include <Note.h>
#include <iostream>
#include <iomanip>
using std::wcout, std::cin, std::endl, std::basic_string;

Song ConsoleInput::GetSongInput() {
    wcout << "Writing a new song\nStart with the title:\n";
    


    /*wcout << "\n\nLyrics done. Now the notes\nType the note name then it's position. EOF to stop.\n";
    char noteName[5];
    int notePos;*/

    //ShowLyricsPositions(lyrics.c_str(), lyrics.size());

    /*cin.setf(std::ios::skipws);
    while (cin >> noteName >> notePos) {
        song->AddNote(new Note(noteName, notePos));
    }*/

    song.AddNote(new Note("A", 0));
    song.AddNote(new Note("Em", 10));
    song.AddNote(new Note("D", 25));
    song.AddNote(new Note("Gm", 37));
    song.AddNote(new Note("A", 51));

    return song;
}

void ConsoleInput::ShowLyricsPositions(const char* lyrics, int size) {
    wcout << "\nLyrics:\n" << lyrics << endl;
    wcout << "Positions:\n0";
    for (int i = 1; i < size; ++i) {
        if (lyrics[i - 1] == ' ' || lyrics[i - 1] == '\n')
            wcout << i;
        else
            wcout << ' ';

        if (lyrics[i] == '\n')
            wcout << '\n';
    }

    wcout << endl;
}
