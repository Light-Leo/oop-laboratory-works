# Problem 1

## A. Write a class having two private variables and one-member function which will return the area of the rectangle.

#### **Solution:**

```c++
#include <iostream>

using namespace std;

class Rectangle
{
private:
  float l, b;

public:
  float getArea(float l, float b)
  {
    return l * b;
  }
};

int main()
{
  float l, b;
  Rectangle r1;

  cout << "Enter the length of the rectangle: ";
  cin >> l;

  cout << "Enter the breadth of the rectangle: ";
  cin >> b;

  cout << "Area of the rectangle is: " << r1.getArea(l, b) << " square units.";

  return 0;
}
```
