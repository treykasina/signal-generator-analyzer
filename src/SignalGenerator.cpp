#include "SignalGenerator.hpp"
#include <cmath>

SignalGenerator::SignalGenerator(double sampleRate) : m_sampleRate(sampleRate) {}

std::vector<double> SignalGenerator::generateSine(double frequency, double duration) {
    int numSamples = m_sampleRate * duration;
    std::vector<double> wave(numSamples);

    for (int i = 0; i < numSamples; ++i) {
        double time = i / m_sampleRate;
        // Standard sine wave formula
        wave[i] = std::sin(2.0 * M_PI * frequency * time);
    }
    return wave;
}