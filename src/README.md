# 📊 Signal Generator & Analyzer

A C++ terminal application that generates sine waves and visualizes them using character plotting. 

## 🚀 Features
* **Custom Wave Generation**: Uses `std::sin` to create accurate wave data.
* **Terminal Visualization**: Plots the signal using `*` characters to see the wave shape in real-time.
* **User Interaction**: Accepts frequency inputs to dynamically update the visualization.

## 🛠️ Technical Setup
This project is configured to run on Windows using the **MinGW-w64** toolchain.
* **Compiler**: `g++.exe` (C++17)
* **Build System**: VS Code Tasks automated for seamless "Build and Run"

## 📝 Lessons Learned
During development, I successfully resolved:
* **Linker Errors**: Fixed "undefined reference to std::cout" by switching from `gcc` to `g++`.
* **Environment Configuration**: Correctly mapped compiler paths in `c_cpp_properties.json`.
* **C++ Logic**: Resolved function declaration and "main redefinition" errors.