# Problem 1A

## A. Write a class named Fraction that has an integer numerator and denominator member. Write a print() function that prints out the fraction.

### Expected Behavior

#### Output

```
1/4
1/2
```

#### **Solution:**

```c++
#include <iostream>

using namespace std;

class Fraction
{
private:
  int m_numerator{0};
  int m_denominator{1};

public:
  Fraction(int numerator, int denominator = 1)
      : m_numerator{numerator}, m_denominator{denominator}
  {
  }

  void print() const
  {
    cout << m_numerator << '/' << m_denominator << '\n';
  }
};

int main()
{
  Fraction f1{1, 4};
  f1.print();

  Fraction f2{1, 2};
  f2.print();

  return 0;
}
```
