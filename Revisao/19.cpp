#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T1, typename T2>
class Pair {

    public:
        Pair(T1 first, T2 second) : first_(first), second_(second) {}
        T1 get_first() const {return first_;}
        T2 get_second() const {return second_;}
        void show() const{cout << '{' << first_ << ',' << second_ << '}';}
    private:
        T1 first_;
        T2 second_;
};

void show(const vector<Pair<string,int>>& v) {

    cout << '{';
    for (const Pair<string, int>& p : v) p.show();
    cout << '}';
}


// template<typename T1, typename T2>
// class Sort_by_first {
//     public:
//         bool operator()(const Pair<T1, T2>& left, const Pair<T1, T2>& right) const {return left.get_first() < right.get_first();}
// };

// template<typename T1, typename T2>
// class Sort_by_second {
//     public:
//         bool operator()(const Pair<T1, T2>& left, const Pair<T1, T2>& right) const {return left.get_second() < right.get_second();}
// };

// template<typename T1, typename T2>
// void sort_by_first(vector<Pair<T1, T2>>& v) {

//     sort(v.begin(), v.end(), Sort_by_first<T1, T2>());
// } 

// template<typename T1, typename T2>
// void sort_by_second(vector<Pair<T1, T2>>& v) {

//     sort(v.begin(), v.end(), Sort_by_second<T1, T2>());
// }

template<typename T1, typename T2>
void sort_by_first(vector<Pair<T1, T2>>& v) {

    sort(v.begin(), v.end(), [] (Pair<T1, T2> p1, Pair<T1, T2> p2) -> bool {return p1.get_first() < p2.get_first();});
} 

template<typename T1, typename T2>
void sort_by_second(vector<Pair<T1, T2>>& v) {

    sort(v.begin(), v.end(),  [] (Pair<T1, T2> p1, Pair<T1, T2> p2) -> bool {return p1.get_second() < p2.get_second();});
}

int main () {

    vector<Pair<string, int>> calories = { {"orange",37},{"egg",146},{"apple",56},{"yogurt",51} };
    sort_by_second(calories);
    show(calories); cout << '\n';

    return 0;
}