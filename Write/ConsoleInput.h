#pragma once
class Song;

class ConsoleInput {
public:
    Song CreateSongFromUserInput();

private:
    const char* GetSongTitle();
    void ShowLyricsPositions(const char*, int);
};
