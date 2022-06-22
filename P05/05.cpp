#include <iostream>
using namespace std;
#include "node.cpp"

node* reverse(const node* n) {

    if (n == nullptr) return nullptr;

    node* current = new node {n->value, nullptr, nullptr};
    node* previous = current;
    n = n->next;

    while (n != nullptr) {

        current = new node {n->value, nullptr, previous};
        previous->prev = current;
        previous = current;
        n = n->next;
    }

    return current;
}

int main() {

    // node* a = nullptr;
    // node* b = reverse(a);
    // destroy(a); destroy(b);

    // node* a = build(1, nullptr);
    // node* b = reverse(a);
    // print(b);
    // destroy(a); destroy(b);

    // node* a = build(1, build(2, nullptr));
    // node* b = reverse(a);
    // print(b);
    // destroy(a); destroy(b);

    node* a = build(1, build(2, build(3, nullptr)));
    node* b = reverse(a);
    print(b); 
    destroy(a); destroy(b);

    return 0;
}