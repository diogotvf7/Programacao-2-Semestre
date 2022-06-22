#include <iostream>
using namespace std;

int main() {

    int x; cin >> x;

    for (int i = 1; i <= x; i++) {

        if (!(i % 3) && !(i % 5)) continue;
        if (!(i % 3)) cout << "Fizz ";
        else if (!(i % 5)) cout << "Buzz ";
        else cout << i << " ";
    }
    return 0;
}