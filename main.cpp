#include <iostream>

#include "./eeg/statical_properties.h"

int main() {
    std::vector<double> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Mean: " << mean(data) << std::endl;
    std::cout << "Variance: " << variance(data) << std::endl;
    std::cout << "Standard Deviation: " << standardDeviation(data) << std::endl;
    std::cout << "Median: " << median(data) << std::endl;
    std::cout << "RMS: " << rms(data) << std::endl;
    std::cout << "Entropy: " << entropy(data) << std::endl;
    return 0;
}
