#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2) {

    int delta = pow(b, 2) - 4 * a * c;
    // cout << fixed << setprecision(7);

    if (delta > 0) {

        x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        return 2;        
    }

    else if (delta == 0) {

        x1 = - b / (2.0 * a);
        x2 = NAN;
        return 1;
    }

    else {

        x1 = NAN;
        x2 = NAN;
        return 0;
    }

}

int main() {

    // double x1, x2; int r = solve_eq(1, 1, 0, x1, x2); cout << fixed << setprecision(7) << r << ' ' << x1 << ' ' << x2;
    // double x1, x2; int r = solve_eq(1, -2, 1, x1, x2); cout << fixed << setprecision(7) << r << ' ' << x1 << ' ' << x2;
    // double x1, x2; int r = solve_eq(1, -1, 0, x1, x2); cout << fixed << setprecision(7) << r << ' ' << x1 << ' ' << x2;
    double x1, x2; int r = solve_eq(16, -8, 1, x1, x2); cout << fixed << setprecision(7) << r << ' ' << x1 << ' ' << x2;
    // double x1, x2; int r = solve_eq(3, 4, -2, x1, x2); cout << fixed << setprecision(7) << r << ' ' << x1 << ' ' << x2;

    return 1;
}
