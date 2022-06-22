#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#include "Point2d.h"

void Point2d::translate(const Point2d& t) {

    x += t.x, y += t.y;
}

double Point2d::distance_to(const Point2d& p) const {

    double distx = x - p.x;
    double disty = y - p.y;
    return sqrt(distx*distx + disty*disty);
}