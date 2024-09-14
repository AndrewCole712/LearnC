#include <iostream>
#include <vector>
#include <map>
#include "/Users/andrewcole/LearningToCode/LearnC//LL/linkedlist.hpp"

template <typename T>
Node<T>::Node(T value) : value(value), next(nullptr) {}

int main(int argc, char **argv) {
    Node<int> *x = new Node<int>(5);
    Node<int> *z = new Node<int>(6);
    Node<int> *y = x;

    x->next = z;

    std::cout << y->next->value << std::endl;
}


