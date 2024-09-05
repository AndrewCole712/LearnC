#include "insertion.hpp"

InsertionArray::InsertionArray(int length) {
  // This dynamically allocates an array using new
  data = new int[length];
  mLength = length;
  // Add your code to randomly initialize here
}

InsertionArray::~InsertionArray()
{
  // This frees the data
  delete[] data;
}

void InsertionArray::printArray()
{
  // TODO: Add your function to print the array here (use the member variable as the length)
}

void InsertionArray::insertionSort()
{
  // TODO: add your function here to do insertion sort and delete this comment after
}

int main(void) {
  InsertionArray array(100);
  array.printArray();
  array.insertionSort();
  array.printArray();
}