#include <emscripten/bind.h>
#include "SignalGenerator.hpp"

using namespace emscripten;

// Expose the C++ class to JavaScript
EMSCRIPTEN_BINDINGS(signal_module) {
    class_<SignalGenerator>("SignalGenerator")
        .constructor<double>()
        .function("generateSine", &SignalGenerator::generateSine);
        
    // Allow JavaScript to understand C++ std::vector
    register_vector<double>("VectorDouble");
}