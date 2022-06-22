#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int adigits(int a, int b, int c) {

    int highest = 0;
    int arr[] = {a, b, c};
    sort(arr, arr + 3);
    for (int i = 2; i >= 0; i--) {

        highest += arr[i] * pow(10, i);
    }
    return highest;
}

int main() {

    cout << adigits(7, 1, 2) << '\n';

}
