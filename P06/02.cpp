#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
//! Print vector of strings.
void print(const vector<string>& v) {
  cout << "[ ";
  for (size_t i = 0; i < v.size(); i++) {
    cout << '\"' << v[i] << "\" ";
  }
  cout << "]\n";
}

void split(const string& s, vector<string>& v) {
  
  int beg = 0, end = 0;

  for (char c : s + " ") {

    if (c == ' ') {

      if (beg != end) {

      v.push_back(s.substr(beg, end - beg));
      beg = end;
      }

      beg++, end = beg;
      
    }
    else end++;

  }
}

int main () {

  string s = "C++ LEIC FCUP FEUP";
  vector<string> v;
  split(s, v);
  print(v);
  
  return 0;
}