#include <cmath>
#include <iostream>

using namespace std;

class Point2d
{
private:
  double m_x{};
  double m_y{};

public:
  Point2d(double x = 0.0, double y = 0.0)
      : m_x{x}, m_y{y}
  {
  }

  void print() const
  {
    cout << "Point2d(" << m_x << " , " << m_y << ")\n";
  }

  double distanceTo(const Point2d &other) const
  {
    return sqrt((m_x - other.m_x) * (m_x - other.m_x) + (m_y - other.m_y) * (m_y - other.m_y));
  }
};

int main()
{
  Point2d first{};
  Point2d second{3.0, 4.0};
  first.print();
  second.print();
  cout << "Distance between two points: " << first.distanceTo(second) << '\n';

  return 0;
}
