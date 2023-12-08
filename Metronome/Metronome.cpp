#include "Metronome.h"
#include <iostream>
#include <chrono>

using std::thread, std::stop_token;
using std::chrono::milliseconds;
using std::wcout;

Metronome::Metronome() {
    _bpm = 120;
    _timeSignature = 4;
}

Metronome::~Metronome() {
    stop_token(t);
}

void Metronome::Start() {
    t = thread(&Metronome::Play, this);
}

void Metronome::Stop() {
    stop_token(t);
}

void Metronome::Play() {
    wcout << "Metronome play\n";
    return;
}

void Metronome::SetBPM(int b) {
    if (30 <= b <= 240)
        _bpm = b;
}

void Metronome::SetTimeSignature(int t) {
    if (1 <= t <= 4)
        _timeSignature = t;
}
