#include <iostream>

using namespace std;

// Class Stack
class Stack
{
  // Declare private members
private:
  int stack[10]; // array of numbers with the length of 10 int numbers
  int stackSize = 0;

public:
  // reset method to reset the stack
  void reset()
  {
    stackSize = 0;
  }

  // push method - adds newMember to the stack, return result of the operation as boolean
  bool push(int newNumber)
  {
    if (stackSize >= 10)
    {
      return false;
    }

    stack[stackSize] = newNumber;
    stackSize++;

    return true;
  }

  // pop method - removes the last member from the stack, return result of the operation as boolean
  bool pop()
  {
    if (stackSize <= 0)
    {
      return false;
    }

    stack[stackSize] = 0;
    stackSize--;

    return true;
  }

  // print method - prints out current stack values
  void print()
  {
    cout << "(";
    for (int index = 0; index < stackSize; index++)
    {
      if (index != 0)
      {
        cout << " ";
      }
      cout << stack[index];
    }
    cout << ")\n";
  }
};

int main()
{
  // Create Stack class instance, which will be assigned into the stack variable
  Stack stack;
  // Call reset method
  stack.reset();
  // Call print method
  stack.print();

  // Do some operations and print result
  stack.push(5);
  stack.push(3);
  stack.push(8);
  stack.print();

  // Do some operations and print result
  stack.pop();
  stack.print();

  // Do some operations and print result
  stack.pop();
  stack.pop();
  stack.print();

  system("pause");
  return 0;
}
