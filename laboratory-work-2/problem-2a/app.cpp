#include <iostream>

using namespace std;

// Class Point3D
class Point3D
{
  // Declare public members
public:
  // Sets the private variable's values
  void setValues(int _m_x, int _m_y, int _m_z)
  {
    m_x = _m_x;
    m_y = _m_y;
    m_z = _m_z;
  }

  // Print function - prints out the private variables
  void print()
  {
    cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
  }

  // Declare the private members
private:
  int m_x;
  int m_y;
  int m_z;
};

int main()
{
  // Create the Point3D instance, that will be assigned into the point variable
  Point3D point;
  // Call setValues method with following values
  point.setValues(1, 2, 3);
  // Call the print method
  point.print();

  system("pause");
  return 0;
}
