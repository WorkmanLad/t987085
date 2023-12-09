#pragma once
#include <map>
using std::map;

class Note;

class Song {
public:
    Song(const char* title, const char* lyrics);

    void AddNote(Note*);

    const char* GetTitle() const { return _title; }
    const char* GetLyrics() const { return _lyrics; }
    map<int, Note*> GetNotes() const { return _notes; }

private:
    const char* _title;
    const char* _lyrics;
    map<int, Note*> _notes;
};

