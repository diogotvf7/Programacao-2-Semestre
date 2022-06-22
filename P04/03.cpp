#include <iostream>
#include "dlnode.cpp"

dlnode* insert(dlnode* dln, int k, int v) {

    if (dln == nullptr) return new dlnode {v, nullptr, nullptr};
    
    if (k == 0) {

        dlnode* first = new dlnode {v, nullptr, dln};
        dln->prev = first;
        return first;
    }

    int i = 0;
    dlnode* ptr = dln;

    while (i++ < k - 1) { ptr = ptr->next; }

    if (ptr->next == nullptr) {

        dlnode* node = new dlnode {v, ptr, nullptr};
        ptr->next = node;
    }
    else {

        dlnode* node = new dlnode {v, ptr, ptr->next};
        ptr->next->prev = node;
        ptr->next = node;
    }

    return dln;
}

int main() {

    // dlnode* dln = nullptr;
    // dln = insert(dln, 0, 0);
    // print(dln); destroy(dln);

    // dlnode* dln = build(1, build(2));
    // dln = insert(dln, 0, 0);
    // print(dln); destroy(dln);

    // dlnode* dln = build(1, build(2));
    // dln = insert(dln, 1, 0);
    // print(dln); destroy(dln);

    // dlnode* dln = build(1, build(2));
    // dln = insert(dln, 2, 0);
    // print(dln); destroy(dln);

    dlnode* dln = build(1, build(2, build(3, build(4))));
    dln = insert(dln, 3, 0);
    print(dln); destroy(dln);

    return 0;
}