#include <iostream>
#include <vector>
#include "Figure.h"
 
using namespace std;

class Rectangle : public Figure {

    public:
        Rectangle(double x_center, double y_center, double width, double height) : Figure(x_center, y_center), width_(width), height_(height) { }
        virtual void draw() const override {

            cout << "R(" << x_center_ << ',' << y_center_ << ")(" << width_ << ',' << height_ << ')';
        }

    private:
        double width_;
        double height_;
};

class Circle : public Figure {

    public:
        Circle(double x_center, double y_center, double radius) : Figure(x_center, y_center), radius_(radius) { }
        virtual void draw() const override {

            cout << "C(" << x_center_ << ',' << y_center_ << ")(" << radius_ << ')';
        }

    private:
        double radius_;
};