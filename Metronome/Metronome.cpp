#include "Metronome.h"

Metronome::Metronome() {
    _bpm = 120;
    _timeSignature = 4;
}

void Metronome::SetBPM(int b) {
    if (30 <= b <= 240)
        _bpm = b;
}

void Metronome::SetTimeSignature(int t) {
    if (1 <= t <= 4)
        _timeSignature = t;
}
