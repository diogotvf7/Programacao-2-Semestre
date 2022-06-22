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
    
    wcresult res {0, 0, 0};
    ifstream in(filename);
    string line, word;
    
    while (getline(in, line)) {

        istringstream iss(line);
        while (iss >> word) {res.words++;}
        res.bytes += line.length() + 1;
        res.lines++;
    }
    
    return res;
}

int main () {

    wcresult r = wc("p2_test1.txt"); 
    cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n';

    return 0;
}