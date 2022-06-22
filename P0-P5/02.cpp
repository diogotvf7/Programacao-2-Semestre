#include <iostream>
using namespace std;

int main() {

    int x, total = 0; cin >> x;

    while (x) {
        total += x % 10;
        total *= 10;
        x /= 10;
    }
    cout << total / 10;

    return 0;
}