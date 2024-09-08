#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_

// Your header goes here
template <typename T>
class Node 
{
public:
   // node value
  T value;
  //pointer to next node
  Node* next;

  // node constructor
  Node(T value);

};

template <typename T>
class LinkedList
{
  // TODO:
public:
  LinkedList();
  LinkedList(const std::vector<T> &vec);

  T remove(const int index);
  T operator[](const int index);
  void printReverse() const;
  const Node& getStart() const {return start;}
  void LinkedList<T>::insert(const int index, const T &object);
private:
  Node start;
};


#endif