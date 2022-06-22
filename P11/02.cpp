#include <cmath>
#include <iostream>
#include <iomanip>
#include "Shape.h"

using namespace std;

class Circle : public Shape {

    public:
        Circle(const point& center, double radius) : Shape(center), radius_(radius) {}
        virtual double area() const override {return M_PI * pow(radius_, 2);}
        virtual double perimeter() const override {return 2 * M_PI * radius_;}
        virtual bool contains(const point& p) const override {return pow(p.x - get_center().x, 2) + pow(p.y - get_center().y, 2) <= pow(radius_, 2);}

    private:
        double radius_;
};

class Rectangle : public Shape {

    public:
        Rectangle(const point& center, double width, double height) : Shape(center), width_(width), height_(height) {}
        virtual double area() const override {return width_ * height_;}
        virtual double perimeter() const override {return 2 * width_ + 2 * height_;}
        virtual bool contains(const point& p) const override {return (p.x >= get_center().x - width_/2) && (p.x <= get_center().x + width_/2) && (p.y >= get_center().y - height_/2) && (p.y <= get_center().y + height_/2);}

    private:
        double width_;
        double height_;
};