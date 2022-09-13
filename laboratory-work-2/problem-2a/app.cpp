#include <iostream>

using namespace std;

class Point3D
{
public:
  void setValues(int _m_x, int _m_y, int _m_z)
  {
    m_x = _m_x;
    m_y = _m_y;
    m_z = _m_z;
  }

  void print()
  {
    cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
  }

private:
  int m_x;
  int m_y;
  int m_z;
};

int main()
{
  Point3D point;
  point.setValues(1, 2, 3);
  point.print();

  system("pause");
  return 0;
}
