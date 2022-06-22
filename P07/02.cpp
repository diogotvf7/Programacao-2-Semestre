#include <iostream>
#include <fstream>
#include <sstream>
 
using namespace std;
 
struct wcresult {
  unsigned int lines;
  unsigned int words; 
  unsigned int bytes; 
};

wcresult wc(const string& filename) {

    ifstream in(filename);
    string line, word;
    istringstream copy;
    wcresult ret {0, 0, 0};

    while (getline(in, line)) {

        copy.str(line);
        ret.bytes += line.length() + 1;
        while (copy >> word) ret.words++;
        ret.lines++;
        copy.clear();
    }

    return ret;
}   

int main() {

    // wcresult r = wc("p2_test1.txt"); 
    // cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n';

    wcresult r = wc("p2_test2.txt"); 
    cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n';
   
    return 0;
}