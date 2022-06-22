#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Test {

    public:

        Test() {x_ = 0; y_ = 0;}
        Test() : x_(0), y_(0) {}
        Test (int x, int y) : x_(x), y_(y) {}

    private:

        int x_;
        int y_;
};
