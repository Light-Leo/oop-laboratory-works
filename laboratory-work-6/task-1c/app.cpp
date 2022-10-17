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

  friend double distanceFrom(const Point2d &x, const Point2d &y);
};

double distanceFrom(const Point2d &a, const Point2d &b)
{
  return sqrt((a.m_x - b.m_x) * (a.m_x - b.m_x) + (a.m_y - b.m_y) * (a.m_y - b.m_y));
}

int main()
{
  Point2d first{};
  Point2d second{3.0, 4.0};
  first.print();
  second.print();
  cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

  return 0;
}
