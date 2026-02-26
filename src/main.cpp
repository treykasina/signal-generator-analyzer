#include <iostream>
#include <vector>
#include <cmath>

// Generator defined BEFORE main to avoid "undefined" errors
std::vector<double> generateSineWave(int samples, double frequency) {
    std::vector<double> signal;
    for (int i = 0; i < samples; ++i) {
        double value = std::sin(2.0 * M_PI * frequency * (static_cast<double>(i) / samples));
        signal.push_back(value);
    }
    return signal;
}

void analyzeSignal(const std::vector<double>& signal) {
    std::cout << "Successfully analyzed " << signal.size() << " samples." << std::endl;
}

int main() {
    std::cout << "--- Signal Analyzer Starting ---" << std::endl;
    std::vector<double> mySignal = generateSineWave(100, 1.0);
    analyzeSignal(mySignal);
    return 0;
}