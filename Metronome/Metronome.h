#pragma once

class Metronome {
public:
    Metronome();

    void SetBPM(int);
    void SetTimeSignature(int);
    void ToggleStartStop() { _running = !_running; };

    int GetBPM() const { return _bpm; }
    int GetTimeSignature() const { return _timeSignature; }
    bool IsRunning() const { return _running; }

private:
    int _bpm;
    int _timeSignature;
    bool _running;
};

