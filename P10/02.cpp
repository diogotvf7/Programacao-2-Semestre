#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>

using namespace std;

//! print map in one line
void show_map(const map<string, size_t>& count) {
  cout << "[ ";
  for (const auto& e : count)   {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

void lower_str(string& str) {for (char& c : str) if ((c >= 65) && (c <= 90)) c += 32;}

void count_words(const string& str, map<string, size_t>& count) {

    istringstream iss(str);
    string read;

    while (iss >> read) {lower_str(read); count[read]++;}
}

int main() {

    string s = "If you want to buy  buy  if you don't want to buy  bye bye";
    map<string, size_t> count; 
    count_words(s, count);
    show_map(count);

    return 0;
}