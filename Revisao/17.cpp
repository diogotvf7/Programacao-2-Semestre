#include <iostream>
#include <vector>
#include "Date.h"
#include "Person.h"

using namespace std;


void born_before(const vector<Person>& persons, const Date& date) {

    date.show();
    cout << ':';

    for (const Person& p : persons) {

        if (p.get_birth_date().is_before(date)) {
            
            cout << " ";
            p.show();
        }
    }
}

int main () {   

    born_before({ {"Ana",{2000,4,5}}, {"Rui",{1999,5,11}}, {"Susana",{1999,5,13}}, {"Pedro",{2010,2,10}} }, {2000,1,1});

    return 0;
}