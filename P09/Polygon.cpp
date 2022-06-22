#include <iostream>
#include "Polygon.h"

using namespace std;

Polygon::Polygon() {

    points_ = {};
}
Polygon::Polygon(const std::vector<Point>& p) {

    points_ = p;
}
vector<Point> Polygon::get_points() const {

    return points_;
}
bool Polygon::get_vertex(int i, Point& p) const {

    if ((i < 1) || (i > int(points_.size()))) return false;

    p = points_[i - 1];
    return true;
}
void Polygon::add_vertex(int i, const Point& p) {

    points_.insert(points_.begin() + i - 1, p);
}
double Polygon::perimeter() const {

    if (points_.size() == 0) return 0;

    double sum = 0;

    for (size_t i = 0; i < points_.size() - 1; i++) {

        sum += points_[i].distance(points_[i + 1]);
    }

    sum += points_[points_.size() - 1].distance(points_[0]);
    
    return sum;   
}
void Polygon::show() const {

    cout << '{';
    for (Point p : points_) p.show();
    cout << '}';
}