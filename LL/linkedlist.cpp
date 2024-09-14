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
LinkedList<T>::LinkedList() : start(nullptr), length(0) {}

template <typename T>
LinkedList<T>::LinkedList(const std::vector<T> &vec)
{
    length = vec.size();
    Node<T> *cur;
    Node<T> *newNode = new Node<T>(vec[0]);
    start = newNode;
    cur = start;
    //std::cout << &start << std::endl;

    for (int i = 1; i < vec.size()+1; i++) {
        // std::cout << &start << " " << cur << std::endl;
        Node<T> *newNode = new Node<T>(vec[i]);
        cur->next = newNode;
        //std::cout << &start << " " << cur << std::endl;
        cur = cur->next;
    }

    /* need to make first element node and set start equal to it */
}

// Insert function implementation
template <typename T>
void LinkedList<T>::insert(const int index, const T &newValue)
{
    if (index > length ) {
            std::cout << "Index out of bounds of the current linked list" << std::endl;
            }
    // create a node pointer "cur" to traverse through the list, 
    // which begins at the head 
    else {
        auto *cur = start;
    // create our new Node with the corresponding value 
        Node<T> *newNode = new Node<T>(newValue);

        // if the new Node is being inserted at the head of the list, 
        // then we must point it at the head
        if (index == 0) { 
            newNode->next = cur;
            start = newNode;
            ++length;
            } 

        /* if the node is not being inserted at the head, 
        then it's either being inserted somewhere in the middle 
        or at the tail */
        else {
            int i = 0;
            /* loop breaks when we reach desired index */
            while (i < index - 1) {
                cur = cur->next;
                ++i;
                }

            newNode->next = cur->next;
            cur->next = newNode;
            ++length;
            }

    }
}

// Remove function implementation
template <typename T>
T LinkedList<T>::remove(const int index) {   
    if (index > length - 1) {
        std::cout << "The node you wish to remove does not exist in the list" << std::endl;
        return 0;
    }

    else {
        auto *cur = start;
        Node<T> *prev = start;
        //prev->next = cur
        //if the node being removed is the head
        if (index == 0) {
            start = cur->next;
            delete cur;
            //std::cout << start.value << std::endl;
            --length;
            return cur->value;
        }

        //if the node being removed is any other element
        else {
            int i = 0;
            while (i != index) {
                prev = cur;
                cur = cur->next;
                ++i; 
            }
            T deleted = cur->value;
            prev->next = cur->next;
            delete cur;
            --length;
            return deleted;
        }
        
        /* if we reached the tail of the list 
        (cur->next == nullptr), but did not reach 
        the index of the node to be removed,
        then the node to be removed does not exist
        within the list */
    }
    //return T(); // Temporary return of default-constructed T}
}

// Subscript operator implementation
template <typename T>
T LinkedList<T>::operator[](const int index) {
    // Stub: Access logic goes here

    if  (index > length - 1) {
        std::cout << "Index out of bounds of the current linked list" << std::endl;
        return 0;
        }


    else {
        auto *cur = start;

        int i = 0; 
        while (i != index) {
            cur = cur->next;
            ++i;
            }
        return cur->value;
        }    
    

    

    /* if the index is not in the 
    the linkedlist, then the loop will break 
    when we reach the end and cur->next == nullptr */
    }

template <typename T>
int LinkedList<T>::getLength() {
    std::cout << length << std::endl;
    return length;
}

template <typename T>
void LinkedList<T>::reverseList() {
    Node<T> *cur;
    Node<T> *front; 
    cur = start -> next;
    
    while (cur->next != nullptr) 
        cur = cur->next;
    front = cur;
    cur = start -> next;
    while (cur != nullptr) {
        
        start -> next = front;
        front = start;
        start = cur;
        cur = cur -> next;
    }
    start = front;
}

template <typename T>
void LinkedList<T>::printForward() const {
        if (length < 1) {
            std::cout << "There are no elements in this list" << std::endl;
        }
        else {
            auto *cur = start;
            while (cur->next!=nullptr) {
                std::cout << cur->value << std::endl;
                cur = cur->next;
            }
        }
    } 

int main(int argc, char **argv)
{
    std::vector<int> data = {0, 1, 2, 3, 4};
    // std::cout << data.size() << std::endl;
    LinkedList<int> linked_data(data);
    linked_data.printForward();
    std::cout << "\n" << std::endl;

    //std::cout << linked_data.remove(0) << "\n" << std::endl;
    std::cout << linked_data.remove(2) << "\n" << std::endl;

    linked_data.reverseList();
        
    linked_data.printForward();

    return 0;

    // for (const auto &item : data) {
    //     item
    // }
}



