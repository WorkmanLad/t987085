#include "ConsoleInput.h"
#include <Song.h>
#include <Note.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using std::wcout, std::cin, std::endl;
using std::string, std::getline;
using std::ofstream, std::ifstream;

Song ConsoleInput::CreateSongFromUserInput() {
    wcout << "Writing a new song\nStart with the title:\n";
    const char* title = GetSongTitle();

    Song song = Song(title, "Test song for development");

    song.AddNote(new Note("A", 0));
    song.AddNote(new Note("Em", 10));
    song.AddNote(new Note("D", 25));
    song.AddNote(new Note("Gm", 37));
    song.AddNote(new Note("A", 51));

    return song;
}

const char* ConsoleInput::GetSongTitle() {
    string title;
    getline(cin, title);



    ofstream(title + ".txt");

    return title;
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
