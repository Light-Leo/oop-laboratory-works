#include <iostream>
#include <cstdint>

using namespace std;

// Class RGBA
class RGBA
{
  // Declare private members
private:
  uint_fast8_t m_red;
  uint_fast8_t m_green;
  uint_fast8_t m_blue;
  uint_fast8_t m_alpha;

public:
  // Class constructor, where arguments have default values
  RGBA(uint_fast8_t red = 0, uint_fast8_t green = 0, uint_fast8_t blue = 0, uint_fast8_t alpha = 255)
      : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
  {
  }

  // print method
  void print()
  {
    cout << "r=" << static_cast<int>(m_red) << " g=" << static_cast<int>(m_green) << " b=" << static_cast<int>(m_blue) << " a=" << static_cast<int>(m_alpha) << "\n";
  }
};

int main()
{
  // Initialize the class instance, and assign it into the teal variable
  RGBA teal(0, 127, 127);
  // trigger print method on the class instance
  teal.print();

  return 0;
}
