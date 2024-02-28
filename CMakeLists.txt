cmake_minimum_required(VERSION 3.27)
project(SignalAnalysis)

set(CMAKE_CXX_STANDARD 17)

add_executable(SignalAnalysis main.cpp
        eeg/statical_properties.h)
