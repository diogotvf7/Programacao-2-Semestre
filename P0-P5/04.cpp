#include <iostream>
using namespace std;

bool isPrime(int n) {
    
    for (int i = 2; i < n; i++) if (n % i == 0) return false;
    return n != 1;
}

int main() {

    int a, b; cin >> a; cin >> b;
    int i;
    while (a <= b) {

        int t = 0;
        i = a;
        while (i) {
            
            t += i % 2;
            i /= 2;
        }
        if (isPrime(a) && isPrime(t)) cout << a << '\n';
        a++;
    }

}