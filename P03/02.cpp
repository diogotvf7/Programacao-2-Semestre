#include <iostream>
using namespace std;

struct fraction {
   int num; // Numerator
   int den; // Denominator
}; 

int gcd(int a, int b) {

    if (b == 0) return a;
    else return gcd(b, a % b);
}

void reduct(fraction& a) {

    int _ = gcd(a.num, a.den);
    a.num /= _;
    a.den /= _;
    if (a.den < 0) {
        a.den *= -1;
        a.num *= -1;
    }
}

fraction sum(const fraction fa[], int n) {

    fraction total = {0, 1};

    for (int i = 0; i < n; i++) {

        total = {total.num * fa[i].den + fa[i].num * total.den, total.den * fa[i].den};
        reduct(total);
    }
    
    return {total.num, total.den};
}

int main() {

    fraction fa[] { {1, 2}, {2, -3}, {6, 15} };
    fraction s = sum(fa, 3);
    cout << s.num << '/' << s.den << "\n";
}