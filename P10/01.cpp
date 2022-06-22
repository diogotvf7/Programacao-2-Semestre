#include <iostream>
#include <map>
 
using namespace std;

map<char, unsigned> map_roman = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

unsigned roman_to_arab(const string& roman) {

    unsigned total = 0;

    for (size_t i = 0; i < roman.size() ; i++) {

        if (map_roman[roman[i]] >= map_roman[roman[i + 1]]) {

            total += map_roman[roman[i]];
        }
        else total -= map_roman[roman[i]];
    }

    total += map_roman[roman.size() - 1];

    return total;
}

int main() {

    string r = "XV";
    cout << roman_to_arab(r) << '\n';

    // string r = "MMMCMXCIX";
    // cout << roman_to_arab(r) << '\n';

    return 0;
}