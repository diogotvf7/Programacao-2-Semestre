#include <iostream>

bool isLeap (int y) {

    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

void advance(int delta, int& d, int& m, int& y) {

    for (int i = delta; i > 0; i--) {

        d += 1;

        switch (m) {

            case 1: case 3: case 5: case 7: case 8: case 10: case 12:

                if (d == 32) {

                    d = 1;
                    m += 1;
                }
                break;

            case 4: case 6: case 9: case 11:

                if (d == 31) {

                    d = 1;
                    m += 1;
                }
                break;

            case 2:

                if ((d == 29 && !isLeap(y)) || (d == 30 && isLeap(y))) {
                    
                    d = 1;
                    m += 1;
                }
                break;
                    
        }
        
        if (m == 13) {
            m = 1;
            y += 1;
        }
        
    }
}