#include <string>
#include <vector>
#include <iostream>
using namespace std;

string longest_prefix(const vector<string>& v) {

    string prefix = "";
    int i = 0;
    for (char c: v[0]) {

        for (string str : v) if (str[i] != c) return prefix;
        prefix.push_back(v[0][i++]);
    }

    return prefix;
}

int main() {

    cout << "\"" << longest_prefix({ "apple", "apply", "ape", "april" }) << "\"\n";

    return 0;
}