#include <iostream>

using namespace std;

class Stack
{
private:
  int stack[10];
  int stackSize = 0;

public:
  void reset()
  {
    stackSize = 0;
  }

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
  Stack stack;
  stack.reset();
  stack.print();

  stack.push(5);
  stack.push(3);
  stack.push(8);
  stack.print();

  stack.pop();
  stack.print();

  stack.pop();
  stack.pop();
  stack.print();

  system("pause");
  return 0;
}
