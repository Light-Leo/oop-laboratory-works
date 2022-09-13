# Problem 3

## A. The class should be named Stack, and should contain:

- A private array of integers of length 10.
- A private integer to keep track of the size of the stack.
- A public member function named reset() that sets the size to 0.
- A public member function named push() that pushes a value on the stack. push() should return false if the array is already full, and true otherwise.
- A public member function named pop() that pops a value off the stack and returns it. If there are no values on the stack, the code should exit via an assert.
- A public member function named print() that prints all the values in the stack.

### Expected Behavior

#### Output

```
()
(5 3 8)
(5 3)
()
```

#### **Solution:**

```c++
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
```
