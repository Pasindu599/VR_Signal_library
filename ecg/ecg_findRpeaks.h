//
// Created by pasin on 2/29/2024.
//

#ifndef SIGNALANALYSIS_ECG_FINDRPEAKS_H
#define SIGNALANALYSIS_ECG_FINDRPEAKS_H

#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

/**
 * Find R-peaks in an ECG signal
 * @param ecgSignal
 * @param threshold
 * @return  R-peaks 
 */

std::vector<double> findRPeaks(const std::vector<double>& ecgSignal, double threshold = 0.6) {
    std::vector<double> rPeaks;

    // Assuming the ECG signal is already preprocessed (filtered and normalized)

    // Find peaks using a simple threshold
    for (int i = 1; i < ecgSignal.size() - 1; ++i) {
        if (std::fabs(ecgSignal[i]) > std::fabs(threshold) && std::fabs(ecgSignal[i]) > std::fabs(ecgSignal[i - 1]) && std::fabs(ecgSignal[i]) > std::fabs(ecgSignal[i + 1])) {
            rPeaks.push_back(ecgSignal[i]);
        }
    }

    return rPeaks;
}


#endif //SIGNALANALYSIS_ECG_FINDRPEAKS_H
