#include <iostream>
#include <iomanip>
#include <cmath>

int main () {

    int k, d;
    double total;
    std::cin >> k;
    std::cin >> d;

    for (int i = 0; i <= k; i++) {

        total += pow(-1, i)/(2 * i + 1);
    }

    std::cout << std::setprecision(d) << std::fixed;
    std::cout << 4 * total;

    return 0;
}