#include <iostream>
#include <string>
#include <string_view>

using namespace std;

class Ball
{
  // Declare private members
  string m_color{"black"}; // Declare with the initial value of "black"
  double m_radius{10.0};   // Declare with the initial value of 10.0

public:
  // Class constructor, which assigns the variables color -> m_color, radius -> m_radius, arguments have default values
  Ball(string_view color = "black", double radius = 10.0) : m_color{color}, m_radius{radius} {}

  // Class constructor with only one arguments, in this case the default values of m_color will be used
  Ball(double radius) : m_radius{radius} {}

  // print method
  void print()
  {
    cout << "color: " << m_color << ", radius: " << m_radius << '\n';
  }
};

int main()
{
  return 0;
}
