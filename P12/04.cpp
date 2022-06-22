#include <map>
#include <list>
#include <string>
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

string cat_keys(list<map<string, unsigned>> lst) {

    unsigned minvalue = UINT_MAX;
    vector<string> keys;
    size_t i = 0, j = 0;

    for (const map<string, unsigned>& m : lst) {

        string current_keys = "";

        for (const pair<string, unsigned>& p : m) {

            current_keys += p.first;
            if(p.second < minvalue) {

                minvalue = p.second;
                j = i;
            }    

        }
        keys.push_back(current_keys);
        i++;
    }
    return keys[j];
}

int main() {

    list<map<string, unsigned>> m3 = {
    { {"s1", 13}, {"s2", 2} }, 
    { {"s3", 3}, {"s4", 4} }, { {"s5", 16} } };
    cout << cat_keys(m3) << endl;
    return 0;
}