#pragma once
class Metronome;

class ConsoleScreen {
public:
    void Display(Metronome&);

private:
    const char* GetTimeSignature(int);
};

