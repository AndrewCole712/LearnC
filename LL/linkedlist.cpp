/**
 * @file linkedlist.cpp
 * @author Andrew Cole
 * @brief Implements a linked list.
 * @date 2024-09-05
 *
 *
 */
#include <vector>
#include "linkedlist.hpp"
#include <iostream>

// https://www.programiz.com/dsa/linked-list
// https://www.geeksforgeeks.org/introduction-to-linked-list-data-structure/

// Implement a simple, singly linked list.
// It should have the ability to construct itself from a std::vector<T>, insert an element, delete an element, and get the number of elements

template <typename T>
Node<T>::Node(T value) : value(value), next(nullptr) {}

template <typename T>
LinkedList<T>::LinkedList() {}

template <typename T>
LinkedList<T>::LinkedList(const std::vector<T> &vec)
{
    Node *cur = &start;
    for (const auto &item : vec) {
        cur->value = vec[item];
        cur = cur->next;
    }
}

// Insert function implementation
template <typename T>
void LinkedList<T>::insert(const int index, const T &newValue)
{
    // create a node pointer "cur" to traverse through the list, 
    // which begins at the head 
    Node *cur = &start;
    // create our new Node with the corresponding value 
    Node *newNode = new Node(newValue);

    // if the new Node is being inserted at the head of the list, 
    // then we must point it at the head
    if (index == 0) { 
        newNode->next = start;
        start = newNode;
    } 

    /* if the node is not being inserted at the head, 
    then it's either being inserted somewhere in the middle 
    or at the tail */
    else {
        int i = 0
        /* the while loop breaks if either we reach
        the desired index (i != index-1) or we reach 
        the end of the list (cur->next != nullptr) */
        while (i != index-1 && cur->next != nullptr) {
            cur = cur->next;
            ++i;
        }
        newNode->next = cur->next;
        cur->next = newNode;
    }
}

// Remove function implementation
template <typename T>
T LinkedList<T>::remove(const int index) {
    Node *cur = &start;
    //if the node being removed is the head
    if (index = 0) {
        start = start->next
        cur->next = nullptr;
    }

    //if the node being removed is any other element
    else {
        int i = 0
        while (i != index && cur->next != nullptr) {
            Node *prev = cur;
            cur = cur->next;
            ++i; 
        }
        /* if we reached the index to break the loop, 
        then we can link the node preceeding the 
        removed node to the node following the removed node
        and we can link the removed node to nullptr to 
        delete the node */
        if (i == index) {
            prev->next = cur->next;
            cur->next = nullptr;
        }
        
        /* if we reached the tail of the list 
        (cur->next == nullptr), but did not reach 
        the index of the node to be removed,
        then the node to be removed does not exist
        within the list */
        else {
            std::cout << "The node you wish to remove does not exist in the list" << std::endl;
        }
    }


    return T(); // Temporary return of default-constructed T
}

// Subscript operator implementation
template <typename T>
T LinkedList<T>::operator[](const int index) {
    // Stub: Access logic goes here
    Node *cur = &start;

    int i = 0; 
    while (i != index && cur->next != nullptr) {
        cur = cur->next;
        ++i;
    }

    /* if the index is not in the 
    the linkedlist, then the loop will break 
    when we reach the end and cur->next == nullptr */
    if (i != index) {
        std::cout << "The node does not exist in the linkedlist" << std::endl;
    }
    else {
        return T cur->value;
    }
}

template <typename T>
void LinkedList<T>::printReverse() const {
    // Print reverse linkedlist in O(size)

}

int main(int argc, char **argv)
{
    std::vector<int> data = {1, 2, 3, 4, 5};
    std::cout << data.size() << std::endl;

    // for (const auto &item : data) {
    //     item
    // }

}



