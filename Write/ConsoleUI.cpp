#include "ConsoleUI.h"
#include <Song.h>
#include <Note.h>
#include <string>
#include <iostream>
#include <vector>
using std::string, std::wcout, std::endl, std::vector;

void ConsoleUI::Display(Song& song) {
    string lyrics = song.GetLyrics();
    const map<int, Note*> notes = song.GetNotes();

    string aboveNotes = "";
    vector<string> aboveNotesLines;

    int previousNewLinePos = 0;
    vector<string> lyricsLines;

    int letterCount = 0;

    lyrics.append("\n");

    for (int i = 0; i < lyrics.size(); ++i) {
        ++letterCount;

        if (lyrics[i] == '\n') {
            aboveNotes.append("\n");
            aboveNotesLines.push_back(aboveNotes);
            aboveNotes = "";

            lyricsLines.push_back(lyrics.substr(previousNewLinePos, letterCount));
            previousNewLinePos = i + 1;
            letterCount = 0;
        }

        if (notes.find(i) != notes.end())
            aboveNotes.append(notes.at(i)->name);
        else
            aboveNotes.append("_");
    }

    int x = 0;
    if (aboveNotesLines.size() > lyricsLines.size())
        x = aboveNotesLines.size();
    else
        x = lyricsLines.size();

    for (int i = 0; i < x; ++i) {
        wcout << aboveNotesLines[i].c_str() << lyricsLines[i].c_str() << "\n";
    }
}
