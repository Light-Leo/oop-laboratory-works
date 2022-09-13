# Problem 1A

## A. Create a class called IntPair that holds two integers. This class should have two member variables to hold the integers. You should also create two member functions: one named "set" that will let you assign values to the integers, and one named "print" that will print the values of the variables

### Expected Behavior

#### Output

```
Pair(1, 1)
Pair(2, 2)
```

#### **Solution:**

```c++
#include <iostream>

using namespace std;

class IntPair
{
public:
  int firstNumber{};
  int secondNumber{};

  void print()
  {
    cout << "Pair(" << firstNumber << ", " << secondNumber << ")\n";
  }

  void set(int _firstNumber, int _secondNumber)
  {
    firstNumber = _firstNumber;
    secondNumber = _secondNumber;
  }
};

int main()
{
  IntPair pair1;
  pair1.set(1, 1);

  IntPair pair2{2, 2};

  pair1.print();
  pair2.print();

  system("pause");
  return 0;
}
```
