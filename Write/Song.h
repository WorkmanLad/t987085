#pragma once
#include <map>
using std::map;

class Note;

class Song {
public:
    Song(const char* lyrics);

    void AddNote(Note*);

    const char* GetLyrics() { return _lyrics; }
    map<int, Note*> GetNotes() { return _notes; }

private:
    const char* _lyrics;
    map<int, Note*> _notes;
};

