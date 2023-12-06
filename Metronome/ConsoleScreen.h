#pragma once
#include <Metronome.h>

class ConsoleScreen {
public:
    void Display(Metronome&) const;

private:
    const char* GetTimeSignature(int) const;
};

