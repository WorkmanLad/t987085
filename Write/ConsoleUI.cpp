#include "pch.h"
#include "ConsoleUI.h"
#include <Song.h>
#include <Note.h>

void ConsoleUI::Display(Song& song) {
    string lyrics = song.GetLyrics();
    const notes_type notes = song.GetNotes();

    string aboveNotes = "";
    vector<string> aboveNotesLines;
    vector<string> lyricsLines;

    int previousNewLinePos = 0;
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
            aboveNotes.append(" ");
    }

    int x = 0;
    if (aboveNotesLines.size() > lyricsLines.size())
        x = aboveNotesLines.size();
    else
        x = lyricsLines.size();

    for (int i = 0; i < x; ++i)
        wcout << aboveNotesLines[i].c_str() << lyricsLines[i].c_str() << "\n";
}
