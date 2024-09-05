// This is what we call a header
#ifndef INSERTION_HPP_
#define INSERTION_HPP_

class InsertionArray
{
public:
  // This is a constructor, it is called every time you create a new object or instantiate an InsertionArrray object
  InsertionArray(const int size);
  // Scope is the {} a block of code is enclosed in
  /**
   * {
   *    functiona()
   *    functionb()
   *  blah balh
   *
   * }
   * you can only access things that were either passed in as arguments, or defined inside the curly brackets you are in
   * this is very important to remember
   *
   */
  ~InsertionArray();
  // These are public member functions
  void insertionSort();
  void printArray();
  // These are private variables, they can only be accessed inside member functions
private:
  int mLength;
  int *data;
};

#endif