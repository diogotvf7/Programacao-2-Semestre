#include <iostream>
#include "Polygon.h"
#include "Point.h"

using namespace std;

Polygon::Polygon() {vertices = {};}
Polygon::Polygon(const std::vector<Point>& v) : vertices(v) {}
bool Polygon::get_vertex(size_t index, Point& p) const {

    if (index <= 0 || index > vertices.size()) return false;
    p.set_x(vertices[index - 1].x()); p.set_y(vertices[index - 1].y());
    return true;
}
void Polygon::add_vertex(size_t index, const Point& p) {vertices.insert(vertices.begin() + index - 1, p);}
double Polygon::perimeter() const {

    if (vertices.size() <= 1) return 0;
    double sum = 0;
    for (size_t i = 0; i < vertices.size() - 1; i++) {sum += vertices[i].distance(vertices[i + 1]);}
    sum += vertices[vertices.size() -1].distance(vertices[0]);

    return sum;
}
void Polygon::show() const {cout << '{'; for (const Point& p : vertices) p.show(); cout << '}';}