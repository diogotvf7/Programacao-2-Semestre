#include <iostream>
#include "node.cpp"
using namespace std;

node* reverse(const node* n) {

    if (n == nullptr) return nullptr;

    node* m = new node {n->value, nullptr, nullptr};
    n = n->next;
    while (n != nullptr) {

        m->prev = new node {n->value, nullptr, m};
        m = m->prev;
        n = n->next;
    }

    return m;
}