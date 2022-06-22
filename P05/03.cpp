#include <iostream>
using namespace std;

bool anagrams(const char a[], const char b[], int& n) {

    int fla[26] = {0};
    int flb[26] = {0};
    int i = 0, j = 0;

    while (a[i] != '\0') {
        
        if ('a' <= a[i] && a[i] <= 'z') fla[a[i] - 'a']++;
        else if ('A' <= a[i] && a[i] <= 'Z') fla[a[i] - 'A']++;
        i++;
    }
    while (b[j] != '\0') {

        if ('a' <= b[j] && b[j] <= 'z') flb[b[j] - 'a']++;
        else if ('A' <= b[j] && b[j] <= 'Z') flb[b[j] - 'A']++;
        j++;
    }

    n = 0;

    for (int i = 0; i < 26; i++) n += max(fla[i] - flb[i], flb[i] - fla[i]);
       
    return n == 0;
    
}

int main() {

    // char a[] = "";
    // char b[] = "";
    // int n = -1;
    // bool r = anagrams(a, b, n);
    // cout << '\"' << a << '\"' << ' '
    //     << '\"' << b << '\"' << ' '
    //     << boolalpha << r << ' ' << n << '\n';

    char a[] = " R o m a ";
    char b[] = "Amor";
    int n = -1;
    bool r = anagrams(a, b, n);
    cout << '\"' << a << '\"' << ' '
        << '\"' << b << '\"' << ' '
        << boolalpha << r << ' ' << n << '\n';

    // char a[] = "Amor a";
    // char b[] = "Roma";
    // int n = -1;
    // bool r = anagrams(a, b, n);
    // cout << '\"' << a << '\"' << ' '
    //     << '\"' << b << '\"' << ' '
    //     << boolalpha << r << ' ' << n << '\n';

    return 0;
}
 