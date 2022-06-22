#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point() {x_ = 0; y_ = 0;}
Point::Point(int x, int y) : x_(x), y_(y) {}
int Point::x() const {return x_;}
int Point::y() const {return y_;}
void Point::set_x(int x) {x_ = x;}
void Point::set_y(int y) {y_ = y;}
double Point::distance(const Point& p) const {return sqrt(pow(x_ - p.x(), 2) + pow(y_ - p.y(), 2));}
void Point::show() const {cout << '(' << x_ << ',' << y_ << ')';}