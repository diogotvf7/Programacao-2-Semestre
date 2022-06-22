#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void normalise(vector<T>& v, const T& min, const T& max) {

    for (T& n : v) {

        if (n < min) n = min;
        if (n > max) n = max;
    }

}

int main () {

    return 0;
}