#include <iostream>
using namespace std;

bool isLeap(int y) { return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0; }

void advance(int delta, int& d, int& m, int& y) {

    while (delta--) {

        d++;
        switch (m) {
            case 4: case 6: case 9: case 11:
                if (d == 31) d = 1, m++;
                break;
            case 2:
                if (isLeap(y) && d == 30) d = 1, m++;
                if (!isLeap(y) && d == 29) d = 1, m++;
                break;
            default:
                if (d == 32) d = 1, m++;
        }
        if (m == 13) m = 1, y++;
    }
}