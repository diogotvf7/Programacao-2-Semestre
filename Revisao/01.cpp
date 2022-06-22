#include <iostream>
using namespace std;

bool pangram(const string& s, string& m) {

    bool control[26] = {false};
    int sum = 0;

    for (char c : s) {

        if (('a' <= c) && (c <= 'z')) control[c - 'a'] = true;
        else if (('A' <= c) && (c <= 'Z')) control[c - 'A'] = true;
    }
    for (int i = 0; i < 26; i++) {

        if (!control[i]) m += ('a' + i);
        sum += control[i];
    }
    return sum == 26;
}

int main () {

    string s = "The quick brown fox jumps over the lazy dog";
    string m = "";
    bool r = pangram(s, m);
    cout << '\"' << s << "\" " 
        << boolalpha << r << " \"" << m << "\"\n";

    return 0;
}