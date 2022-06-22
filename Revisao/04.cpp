#include <string>
#include <vector>
#include <iostream>
using namespace std;

string longest_prefix(const vector<string>& v) {
    
    string prefix = "";

    for (size_t i = 0; i < v[0].size(); i++) {

        for (string s :  v) {

            if (s[i] != v[0][i]) {return prefix;}
        }
        prefix += v[0][i];
    }
    return prefix;
}