# Problem 3

## A. The program below has a lot of redundancy. Update the following program to use non-static member initialization and member initializer lists.

### Expected Behavior

#### Output

```
color: black, radius: 10
color: blue, radius: 10
color: black, radius: 20
color: blue, radius: 20
```

#### **Solution:**

```c++
#include <iostream>
#include <string>
#include <string_view>

using namespace std;

class Ball
{
  string m_color{"black"};
  double m_radius{10.0};

public:
  Ball(string_view color = "black", double radius = 10.0) : m_color{color}, m_radius{radius} {}

  Ball(double radius) : m_radius{radius} {}

  void print()
  {
    cout << "color: " << m_color << ", radius: " << m_radius << '\n';
  }
};

int main()
{
  Ball def;
  def.print();

  Ball blue{"blue"};
  blue.print();

  Ball twenty{20.0};
  twenty.print();

  Ball blueTwenty{"blue", 20.0};
  blueTwenty.print();

  return 0;
}
```
