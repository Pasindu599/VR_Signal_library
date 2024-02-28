//
// Created by pasin on 2/29/2024.
//

#ifndef SIGNALANALYSIS_MAD_H
#define SIGNALANALYSIS_MAD_H

#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>


/**
 * Calculate the median absolute deviation of the data
 * @param x
 * @param constant
 * @return  MAD value
 */
double mad(const std::vector<double>& x, double constant = 1.4826) {

    double median = 0.0;
    size_t n = x.size();
    if( n > 0 ){
        std::vector<double> x_sorted = x;
        std::sort(x_sorted.begin(), x_sorted.end());
        if (n % 2 == 0) {
            median = (x_sorted[n / 2 - 1] + x_sorted[n / 2]) / 2.0;
        } else {
            median = x_sorted[n / 2];
        }
    }

    //calculate mad
    double mad_value = 0.0;
    for(const double& xi : x){
        mad_value += std::abs(xi - median);
    }
    mad_value /= n;
    mad_value *= constant;
    return mad_value;


}


#endif //SIGNALANALYSIS_MAD_H


