#ifndef POLYGON_H
#define POLYGON_H

#include <vector>
#include "Point.h"

class Polygon {

    public:

        Polygon();
        Polygon(const std::vector<Point>& v);
        bool get_vertex(size_t index, Point& p) const;
        void add_vertex(size_t index, const Point& p);
        double perimeter() const;
        void show() const;

    private:

        std::vector<Point> vertices;
};

#endif