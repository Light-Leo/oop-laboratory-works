#include <iostream>
#include <string>
#include <string_view>

using namespace std;

// Class Ball
class Ball
{
  // Declare private members
private:
  string m_color;
  double m_radius;

public:
  // Ball constructor, initialized with no arguments passed
  Ball()
  {
    m_color = "black";
    m_radius = 10.0;
  }

  // Ball constructor, initialized with only color (of a string type) passed as the argument
  Ball(string_view color)
  {
    m_color = color;
    m_radius = 10.0;
  }

  // Ball constructor, initialized with only radius (of a double type) passed as the argument
  Ball(double radius)
  {
    m_color = "black";
    m_radius = radius;
  }

  // Ball constructor, initialized with both arguments being passed
  Ball(string_view color, double radius)
  {
    m_color = color;
    m_radius = radius;
  }

  // print method, uses cout to print out private class members
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
