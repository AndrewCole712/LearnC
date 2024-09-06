/**
 * @file linkedlist.cpp
 * @author Andrew Cole
 * @brief Implements a linked list.
 * @date 2024-09-05
 *
 *
 */
#include <vector>

// https://www.programiz.com/dsa/linked-list
// https://www.geeksforgeeks.org/introduction-to-linked-list-data-structure/

// Implement a simple, singly linked list.
// It should have the ability to construct itself from a std::vector<T>, insert an element, delete an element, and get the number of elements


template <typename T>
LinkedList<T>::LinkedList()
{
    // TODO:
}

template <typename T>
LinkedList<T>::LinkedList(const std::vector<T> &vec)
{
}

// Insert function implementation
template <typename T>
void LinkedList<T>::insert(const int index, const T &object)
{
    // Stub: Insert logic goes here
}

// Remove function implementation
template <typename T>
T LinkedList<T>::remove(const int index) {
    // Stub: Remove logic goes here
    return T(); // Temporary return of default-constructed T
}

// Subscript operator implementation
template <typename T>
T& LinkedList<T>::operator[](const int index) {
    // Stub: Access logic goes here
    // TODO: Add code here
}

int main(int argc, char *argv)
{
  LinkedList<std::string> stringList();
  LinkedList<int> ll2();
  LinkedList<std::vector> x();
}



