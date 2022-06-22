#include <iostream>
#include <iomanip>
using namespace std;

int pow(int e) {return e % 2;}

int main() {

    double total = 0, n, d; cin >> n >> d;

    for (int i = 0; i <= n; i++) {

        total += -1 * (i % 2 - 1) / (2 * i - 1);
    }

    cout << setprecision(d) << fixed << total;

    return 0;
}