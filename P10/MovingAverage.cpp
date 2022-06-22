#include <iostream>
#include "MovingAverage.h"

using namespace std;

MovingAverage::MovingAverage(std::size_t n): n_(n) {}

void MovingAverage::update(double value) {

    if (values_.size() == n_) values_.pop_front();
    values_.push_back(value);
}

double MovingAverage::get() const {

    double sum = 0;
    for (double v : values_) sum += v;
    return sum / values_.size();
}
