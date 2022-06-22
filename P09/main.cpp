#include <iostream>
#include <iomanip>
#include "Pair.h"
using namespace std;


int main() {

    vector<Pair<string, int>> calories = { {"orange",37},{"egg",146},{"apple",56},{"yogurt",51} };
    sort_by_second(calories);
    show(calories); cout << '\n';

    return 0;
}