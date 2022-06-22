#include <iostream>
#include "node.cpp"

node* remove(int x, node* n) {

    node* curr = n;
    node* prev = n;
    
    if (curr == nullptr) return nullptr;

    if (curr->value == x) {

        if (curr->next == nullptr) {
            delete n;
            return nullptr;
        }
        else {
            n = n->next;
            delete prev;
            return n;
        }
    }

    while (curr != nullptr && curr->value != x) {

        prev = curr;
        curr = curr->next;
    }
    
    if (curr == nullptr) {

        return n;
    }
    else {

        prev->next = curr->next;
        delete curr;
        return n;
    }

}

int main() {

    
    // node* n = nullptr; 
    // n = remove(0, n);
    // print(n);
    // destroy(n);

    // node* n = build(1, nullptr); 
    // n = remove(1, n);
    // print(n);
    // destroy(n);

    // node* n = build(1, build(2, nullptr));
    // n = remove(0, n);
    // print(n);
    // destroy(n);

    node* n = build(1, build(2, build(3, nullptr)));
    n = remove(2, n);
    print(n);
    destroy(n);

    // node* n = build(1, build(2, build(3, build(4, nullptr))));
    // n = remove(4, n);
    // print(n);
    // destroy(n);

    // node* n = build(1, build(2, build(3, build(4, nullptr))));
    // n = remove(1, n);
    // print(n);
    // destroy(n);

    return 0;
}