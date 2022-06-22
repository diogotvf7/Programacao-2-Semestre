#ifndef POINT_H
#define POINT_H

class Point {

    public:
        Point();
        Point(int x, int y);
        int x() const;
        int y() const;
        void set_x(int x);
        void set_y(int y);
        double distance(const Point& p) const;
        void show() const;

    private:
        int x_;
        int y_;
};

#endif