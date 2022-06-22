#include <iostream>
using namespace std;

int adigits(int a, int b, int c) {

    return max(max(a, b), max(b, c)) * 100 + (a + b + c - max(max(a, b), max(b, c)) + min(min(a, b), min(b, c))) * 10 + min(min(a, b), min(b, c));
}