#pragma once
class Song;

class ConsoleInput {
public:
    Song GetSongInput();

private:
    void ShowLyricsPositions(const char*, int);
};
