#include "insertion.hpp"
#include <cstdlib>
#include <iostream>

InsertionArray::InsertionArray(const int length)
  : mLength(length)
{
  // This dynamically allocates an array using new
  data = new int[length];
  // Add your code to randomly initialize here
  for (int i = 0; i < mLength; i++)
    {
      data[i] = rand() % 100;
    }
}

InsertionArray::~InsertionArray()
{
  // This frees the data
  delete[] data;
}

void InsertionArray::printArray()
{
  for (int i = 0; i < mLength; i++)
  {
    std::cout << data[i] << std::endl;
  }
}

void InsertionArray::insertionSort()
{
  for (int i = 1; i < mLength; i++)
  {
    int key = data[i];
    int j = i - 1;
    while (j > -1 and key < data[j])
    {
      data[j+1] = data[j];
      j--;
    }
    data [j+1] = key;
  }
}

int main(void) {
  InsertionArray array(100);
  array.printArray();
  array.insertionSort();
  array.printArray();

}