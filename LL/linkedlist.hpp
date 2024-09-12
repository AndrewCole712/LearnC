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

  // default constructor 
  Node() {}

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
  void printForward() const;
  const Node<T>& getStart() const {return start;}
  void insert(const int index, const T &object);
  int getLength();


private:
  Node<T> *start;
  int length = 0;
};


#endif