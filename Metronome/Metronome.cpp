#include "Metronome.h"

Metronome::Metronome() {
    _bpm = 80;
    _timeSignature = 4;
    _running = false;
}

void Metronome::SetBPM(int bpm) {
    if (30 <= bpm <= 240)
        _bpm = bpm;
}

void Metronome::SetTimeSignature(int ts) {
    if (1 <= ts <= 4)
        _timeSignature = ts;
}
