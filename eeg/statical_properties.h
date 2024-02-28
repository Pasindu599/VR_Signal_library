//
// Created by pasin on 2/28/2024.
//

#ifndef SIGNALANALYSIS_STATICAL_PROPERTIES_H
#define SIGNALANALYSIS_STATICAL_PROPERTIES_H

#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>


/**
 * Calculate the mean of the data
 * @param data
 * @return mean value
 */

static double mean(const std::vector<double>& data) {

    double sum = 0;
    for (auto& d : data) {
        sum += d;
    }
    return sum / data.size();
}

/**
 * Calculate the variance of the data
 * @param data
 * @return variance value
 */

static double variance(const std::vector<double>& data) {
    double m = mean(data);
    double sum = 0;
    for (auto& d : data) {
        sum += (d - m) * (d - m);
    }
    return sum / data.size();
}

/**
 * Calculate the standard deviation of the data
 * @param data
 * @return standard deviation value
 */

static double standardDeviation(const std::vector<double>& data) {
    return std::sqrt(variance(data));
}

/**
 * Calculate the median of the data
 * @param data
 * @return median value
 */
static double median(const std::vector<double>& data) {
    std::vector<double> sortedData = data;
    std::sort(sortedData.begin(), sortedData.end());
    if (sortedData.size() % 2 == 0) {
        return (sortedData[sortedData.size() / 2 - 1] + sortedData[sortedData.size() / 2]) / 2;
    } else {
        return sortedData[sortedData.size() / 2];
    }
}


/**
 * Calculate the root mean square of the data
 * @param data
 * @return rms value
 */
static double rms(const std::vector<double>& data) {
    double sum = 0;
    for (auto& d : data) {
        sum += d * d;
    }
    return std::sqrt(sum / data.size());
}

/**
 * Calculate the entropy of the data
 * @param data
 * @return entropy value
 */
static double entropy(const std::vector<double>& data) {
    std::vector<double> sortedData = data;
    std::sort(sortedData.begin(), sortedData.end());
    double sum = 0;
    for (auto& d : sortedData) {
        sum += d * std::log(d);
    }
    return -sum;
}



#endif //SIGNALANALYSIS_STATICAL_PROPERTIES_H

