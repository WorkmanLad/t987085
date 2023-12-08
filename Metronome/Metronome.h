#pragma once
#include <thread>

class Metronome {
public:
    Metronome();
    ~Metronome();

    void Start();
    void Stop();

    void SetBPM(int);
    void SetTimeSignature(int);

    int GetBPM() const { return _bpm; }
    int GetTimeSignature() const { return _timeSignature; }

private:
    void Play();

    int _bpm;
    int _timeSignature;

    std::thread t;
};

