#include <iostream>
#include <string>
#include <string_view>

using namespace std;

class Ball
{
private:
  string m_color;
  double m_radius;

public:
  Ball()
  {
    m_color = "black";
    m_radius = 10.0;
  }

  Ball(string_view color)
  {
    m_color = color;
    m_radius = 10.0;
  }

  Ball(double radius)
  {
    m_color = "black";
    m_radius = radius;
  }

  Ball(string_view color, double radius)
  {
    m_color = color;
    m_radius = radius;
  }

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
