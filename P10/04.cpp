#include <vector>
#include <list>
#include <iostream>
#include <sstream>
 
using namespace std;

template <typename Itr> 
string to_string(Itr start, Itr end) {

    ostringstream oss;
    oss << '['; while (start != end) {

        oss << ' ' << *start; 
        start++;
    }
    oss << " ]";
    return oss.str();
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b) {

    int counter = 0;
    while (start != end) {

        if (*start == a) {

            *start = b; counter++;
        }
        start++;
    }
    return counter;
}

int main() {

    vector<int> v { 1, 2, 3, 3, 4 };
    cout << replace(v.begin(), v.end(), 3, 0) << ' '
        << to_string(v.cbegin(), v.cend()) << '\n';
}