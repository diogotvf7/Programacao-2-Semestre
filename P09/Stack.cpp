#include <iostream>
#include <iomanip>
using namespace std;
 
#include "Stack.h"

template <typename T>
Stack<T>::Stack() {

    size_ = 0;
    top_ = nullptr;
}

template <typename T>
Stack<T>::~Stack() {

    while (top_ != nullptr) {

        node<T>* aux = top_;
        top_ = top_->next;
        delete aux;
    }
}

template <typename T>
size_t Stack<T>::size() const {return size_;}

template <typename T>
bool Stack<T>::peek(T& elem) const {

    if (size_) {

        elem = top_->value;
        return true;
    }
    return false;
}

template <typename T>
bool Stack<T>::pop(T& elem) {

    if (size_) {

        elem = top_->value;
        node<T>* aux = top_;
        top_ = top_->next;
        delete aux; 
        size_--;
        return true;
    }
    return false;
}

template <typename T>
void Stack<T>::push(const T& elem) {

    node<T>* aux = new node<T> {elem, top_};
    top_ = aux;
    size_++;
}