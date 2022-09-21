# Problem 2

## A. Write a class named RGBA that contains 4 member variables of type std::uint8 t named m_red, m_green, m_blue, and m_alpha (#include cstdint to access type std:uint8_t). Assign default values of 0 to m_red, m_green, and m_blue, and 255 to malpha. Create a constructor that uses a member initializer list that allows the user to initialize values for m_red, m_blue, m_green, and m_alpha. Include a print() function that outputs the value of the member variables. If you need a reminder about how to use the fixed width integers, please review lesson 4.6 - Fixed-width integers and size t.

### Expected Behavior

#### Output

```
r=0 g=127 b=127 a=255
```

#### **Solution:**

```c++
#include <iostream>
#include <cstdint>

using namespace std;

class RGBA
{
private:
  uint_fast8_t m_red;
  uint_fast8_t m_green;
  uint_fast8_t m_blue;
  uint_fast8_t m_alpha;

public:
  RGBA(uint_fast8_t red = 0, uint_fast8_t green = 0, uint_fast8_t blue = 0, uint_fast8_t alpha = 255)
      : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
  {
  }
  void print()
  {
    cout << "r=" << static_cast<int>(m_red) << " g=" << static_cast<int>(m_green) << " b=" << static_cast<int>(m_blue) << " a=" << static_cast<int>(m_alpha) << "\n";
  }
};

int main()
{
  RGBA teal(0, 127, 127);
  teal.print();

  return 0;
}
```
