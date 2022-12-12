#include <iostream>
#include <string>
#include <string_view>

using namespace std;

// Class Ball
class Ball
{
  // Declare private members
  string m_color{"black"};
  double m_radius{10.0};

public:
  // Class constructor, which assigns the variables color -> m_color, radius -> m_radius, arguments have default values
  Ball(string_view color = "black", double radius = 10.0) : m_color{color}, m_radius{radius} {}

  // Class constructor with only one arguments, in this case the default values of m_color will be used
  Ball(double radius) : m_radius{radius} {}

  // print methods
  void print()
  {
    cout << "color: " << m_color << ", radius: " << m_radius << '\n';
  }
};

int main()
{
  // Initialize class instance, which will be assigned into the def variable
  Ball def;
  // Call print method
  def.print();

  // Initialize class instance with the only one constructor argument
  Ball blue{"blue"};
  // Call print method
  blue.print();

  // Initialize class instance with the only one constructor argument
  Ball twenty{20.0};
  // Call print method
  twenty.print();

  // Initialize class instance with the both arguments
  Ball blueTwenty{"blue", 20.0};
  // Call print method
  blueTwenty.print();

  return 0;
}
