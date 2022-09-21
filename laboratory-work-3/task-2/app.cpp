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
