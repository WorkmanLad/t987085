#pragma once
#include "pch.h"

class Note;

class Song {
public:
    Song(const char* title, const char* lyrics);

    void AddNote(Note*);

    const char* GetTitle() const { return _title; }
    const char* GetLyrics() const { return _lyrics; }
    notes_type GetNotes() const { return _notes; }

private:
    const char* _title;
    const char* _lyrics;
    notes_type _notes;
};

