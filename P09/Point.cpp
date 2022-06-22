#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point() {

    x_ = 0;
    y_ = 0;
}
Point::Point(int x, int y) {

    x_ = x;
    y_ = y;
}
int Point::x() const {

    return x_;
}
int Point::y() const {

    return y_;
}
double Point::distance(const Point& point) const {

    return sqrt(pow(x_ - point.x(), 2) + pow(y_ - point.y(), 2));
}