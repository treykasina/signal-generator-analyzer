#pragma once
#include <vector>

class SignalGenerator {
public:
    SignalGenerator(double sampleRate);
    
    // Generates a sine wave and returns the data points
    std::vector<double> generateSine(double frequency, double duration);

private:
    double m_sampleRate;
};