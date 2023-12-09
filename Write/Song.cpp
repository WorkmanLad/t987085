#include "Song.h"
#include <Note.h>

Song::Song(const char* title, const char* lyrics) {
    _title = title;
    _lyrics = lyrics;
    _notes = {};
}

void Song::AddNote(Note* n) {
    _notes[n->position] = n;
}
