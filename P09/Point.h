#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {

    public:
        //Constructors
        Point();
        Point(int x, int y);
        //Accessors
        int x() const;
        int y() const;
        //Funcs
        void show() const {std::cout << '(' << x_ << ',' << y_ << ')';}
        double distance(const Point& point) const;
    private:
        int x_;
        int y_;
};

#endif