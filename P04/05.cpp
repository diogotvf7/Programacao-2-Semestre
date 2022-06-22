#include <iostream>
using namespace std;
#include "svnode.cpp"

svnode* copy(const svnode* node) {

    if (node == nullptr) return nullptr;
    svnode* adress = new svnode {node->position, node->value, copy(node->next)};
    return adress;
}

svnode* sum(const svnode* a, const svnode* b) {

    int value, position;
    svnode* c;

    if (a == nullptr && b == nullptr) return nullptr;
    
    if (a == nullptr) {
        
        return copy(b);
    }
    if (b == nullptr) {

        return copy(a);
    } 

    else {

        if (a->position == b->position) {

            c = sum(a->next, b->next);
            value = a->value + b->value;
            position = a->position;
        }
        else if (a->position < b->position) {

            c = sum(a->next, b);
            value = a->value;
            position = a->position;
        }
        else if (b->position < a->position) {

            c = sum(a, b->next);
            value = b->value;
            position = b->position;
        }
        if (value != 0) return build(position, value, c);
        return c;
    }
}

int main() {

    // svnode* a = nullptr;
    // svnode* b = nullptr;
    // svnode* c = sum(a, b);
    // print(a); print(b); print(c); cout << '\n';
    // destroy(a); destroy(b); destroy(c);

    // svnode* a = build(0, 1, nullptr);
    // svnode* b = build(0, -1, nullptr);
    // svnode* c = sum(a, b);
    // print(a); print(b); print(c); cout << '\n';
    // destroy(a); destroy(b); destroy(c);

    // svnode* a = build(0, 2, nullptr);
    // svnode* b = build(1, -1, nullptr);
    // svnode* c = sum(a, b);
    // print(a); print(b); print(c); cout << '\n';
    // destroy(a); destroy(b); destroy(c);

    svnode* a = build(0, 1, build(10, 2, nullptr));
    svnode* b = nullptr;
    svnode* c = sum(a, b);
    print(a); print(b); print(c); cout << '\n';
    destroy(a); destroy(b); destroy(c);

    return 0;
}
