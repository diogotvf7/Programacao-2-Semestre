#include <iostream>
using namespace std;
#include "etree.cpp"


int eval(const etree* t) {

    if (t->left == nullptr && t->right == nullptr) return t->value;

    switch(t->value) {

        case ADD:
            return eval(t->left) + eval(t->right);
        break;

        case SUB:
            return eval(t->left) - eval(t->right);
        break;

        case MUL:
            return eval(t->left) * eval(t->right);
        break;

        case DIV:
            return eval(t->left) / eval(t->right);
        break;
    }
    
    return 0;
}

int main() {

    // etree* et = number(123);
    // int v = eval(et);
    // cout << v << '\n';
    // destroy(et);

    // etree* et = add(number(123), number(-122));
    // int v = eval(et);
    // cout << v << '\n';
    // destroy(et);

    etree* et = sub(mul(number(30), number(2)), div(number(10), number(5)));
    int v = eval(et);
    cout << v << '\n';
    destroy(et);

    return 0;
}
