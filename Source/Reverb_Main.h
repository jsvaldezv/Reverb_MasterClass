#pragma once

class Reverb_Main
{
public:
    
    Reverb_Main();
    ~Reverb_Main();
    
    void prepareReverb(double inSampleRate, int inNumChannels);
    
    void processReverb(float* inAudio, float* outAudio, int inNumSamples);
    
private:
    
    double mySampleRate;
    int numChannels;
};
