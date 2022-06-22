#include <iostream>
#include <string>
#include <vector>
using namespace std;

void split(const string& s, vector<string>& v) {
    
    string a = s + ' ';
    size_t i = 0;

    while (i < a.length()) {

        if (a[i] != ' ') {

            v.push_back(a.substr(i, a.find(' ', i) - i));
            i = a.find(' ', i);
            continue;
        }
        i++;
    }
}