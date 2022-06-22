#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#include "Point2d.h"

void Point2d::translate(const Point2d& t) {x += t.get_x(); y += t.get_y();}

double Point2d::distance_to(const Point2d& p) const {

    return sqrt(pow(x - p.get_x(), 2) + pow(y - p.get_y(), 2));
}