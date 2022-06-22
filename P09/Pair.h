#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template<typename T1, typename T2>
class Pair {

    public:
        //Constructor
        Pair(const T1& first, const T2& second);
        //Accessors
        T1 get_first() const;
        T2 get_second() const;
        //Funcs
        void show() const;

    private:
        T1 first_; 
        T2 second_;
};

template<typename T1, typename T2>
Pair<T1, T2>::Pair(const T1& first, const T2& second) {

    first_ = first;
    second_ = second;
}
template<typename T1, typename T2>
T1 Pair<T1, T2>::get_first() const {

    return first_;
}
template<typename T1, typename T2>
T2 Pair<T1, T2>::get_second() const {

    return second_;
}
template<typename T1, typename T2>
void Pair<T1, T2>::show() const {

    cout << '{' << first_ << ',' << second_ << '}';
}
bool compare_func_sort_by_first(const Pair<string, int>& a, const Pair<string, int>& b) {

    return a.get_first() < b.get_first();
}
void sort_by_first(vector<Pair<string, int>>& v) {

    sort(v.begin(), v.end(), compare_func_sort_by_first);
}
bool compare_func_sort_by_second(const Pair<string, int>& a, const Pair<string, int>& b) {

    return a.get_second() < b.get_second();
}
void sort_by_second(vector<Pair<string, int>>& v) {

    sort(v.begin(), v.end(), compare_func_sort_by_second);
}
void show(const vector<Pair<string, int>>& v) {

    cout << '{';
    for (Pair<string, int> p : v) {

        p.show();
    }
    cout << '}';
}