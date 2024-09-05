class InsertionArray
{
public:
  // This is a constructor, it is called every time you create a new object or instantiate an InsertionArrray object
  InsertionArray(const int length);
  // This is a destructor, it is called (invoked) every time you delete a new object or it goes off the stack (scope in which it is declared ends)
  // Scope is the {} a block of code is enclosed in
  /**
   * {
   *    functiona()
   *    functionb()
   *  blah balh
   *
   * }
   * everything inside these curl braces is in the same scope. If I go into functionb, I can't access something in the curl braces such as int x
   * unless I passed it in. If I am in functiona, I can't action functionb variables. If I am in functionb, I can't access functiona variables or stuff in curly braces.
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