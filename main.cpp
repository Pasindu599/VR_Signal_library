#include <iostream>

#include "./eeg/statical_properties.h"
#include "./stats/mad.h"
#include "./ecg/ecg_findRpeaks.h"

int main() {

    std::vector<double> ecgSignal = {0.1, 0.3, 0.8, 1.2, 1.5, 1.0, 0.7, 0.4, -0.8, 0.1};

    std::vector<double> rPeaks = findRPeaks(ecgSignal);


    std::cout << "Detected R-peaks at indices: ";
    for (double peakIndex : rPeaks) {
        std::cout << peakIndex << " ";
    }
    std::cout << std::endl;

    return 0;
}
