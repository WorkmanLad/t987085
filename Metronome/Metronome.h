#pragma once
class Metronome {
public:
    Metronome();

    void SetBPM(int);
    void SetTimeSignature(int);

    int GetBPM() const { return _bpm; }
    int GetTimeSignature() const { return _timeSignature; }

private:
    int _bpm;
    int _timeSignature;
};

