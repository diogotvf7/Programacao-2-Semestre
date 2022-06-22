#ifndef POLYGON_H
#define POLYGON_H

#include <vector>
#include "Point.h"

class Polygon {
    public:
        //Constructors
        Polygon();
        Polygon(const std::vector<Point>& p);
        //Accessor
        std::vector<Point> get_points() const;
        //Funcs
        bool get_vertex(int i, Point& p) const;
        void add_vertex(int i, const Point& p);
        double perimeter() const;
        void show() const;

    private:
        std::vector<Point> points_;
};

#endif