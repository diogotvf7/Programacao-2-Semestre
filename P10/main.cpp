#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include "Page.h"
#include "Book.h"
 
using namespace std;

//! Builds "index" for the "words" received as parameter
void Book::build_index(const set<string>& words) {

    for (const string& word : words) {

        set<size_t> index_pages;
        for (size_t page = 0; page < book_.size(); page++) {

            for (size_t l = 0; l < book_[page].get_num_lines(); l++) {
                
                istringstream iss(book_[page].get_line(l));
                string str;
                while(iss >> str) {
                    
                    if (str == word) {

                        index_pages.insert(page + 1);
                        break;
                    } 
                }
            }
        }
        if (index_pages.size()) index_[word] = index_pages;
    }
}