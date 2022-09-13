# Problem 2A

## A. Write a simple class named Point3D. The class should contain:

- Three private member variables of type int named m_x, m_y, and m_z;
- A public member function named setValues() that allows you to set values for m_x, my, and m_z.
- A public member function named print() that prints the Point in the following format: <m_x, m_y, m_2>

### Expected Behavior

#### Output

```
<1, 2, 3>
```

#### **Solution:**

```c++
#include <iostream>

using namespace std;

class Point3D
{
public:
  void setValues(int _m_x, int _m_y, int _m_z)
  {
    m_x = _m_x;
    m_y = _m_y;
    m_z = _m_z;
  }

  void print()
  {
    cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
  }

private:
  int m_x;
  int m_y;
  int m_z;
};

int main()
{
  Point3D point;
  point.setValues(1, 2, 3);
  point.print();

  system("pause");
  return 0;
}
```
