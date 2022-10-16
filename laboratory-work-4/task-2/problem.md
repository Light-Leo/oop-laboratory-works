# Problem 2

## A. Write a program and input two integers in main and pass them to default constructor of the class. Show the result of the additon of two numbers.

#### **Solution:**

```c++
#include <iostream>

using namespace std;

class Operation
{
public:
  int a, b;

  Operation(int a, int b)
  {
    this->a = a;
    this->b = b;
  }

  int sum()
  {
    return a + b;
  }
};

int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a;
  cin >> b;

  Operation op(a, b);
  cout << "The addition result on:" << op.sum() << endl;

  return 0;
}
```
