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
  return 0;
}
