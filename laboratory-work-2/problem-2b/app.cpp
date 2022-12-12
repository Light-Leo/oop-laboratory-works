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

  bool isEqual(Point3D classInstance)
  {
    return m_x == classInstance.m_x && m_y == classInstance.m_y && m_z == classInstance.m_z;
  }

  // Declare the private members
private:
  int m_x;
  int m_y;
  int m_z;
};

int main()
{
  // Create the Point3D instance, that will be assigned into the point1 variable
  Point3D point1;
  // Call setValues method with following values
  point1.setValues(1, 2, 3);

  // Create the Point3D instance, that will be assigned into the point1 variable
  Point3D point2;
  // Call setValues method with following values
  point2.setValues(1, 2, 3);

  // Call isEqual method to check whether the variables of two instances have the values (m_x, m_y, m_z) equal
  // Checks true (equality) flow
  if (point1.isEqual(point2))
  {
    cout << "point1 and point2 are equal\n";
  }
  else
  {
    cout << "point1 and point2 are not equal\n";
  }

  // Create the Point3D instance, that will be assigned into the point1 variable
  Point3D point3;
  // Call setValues method with following values
  point3.setValues(3, 4, 5);

  // Call isEqual method to check whether the variables of two instances have the values (m_x, m_y, m_z) equal
  // Checks false (non-equality) flow
  if (point1.isEqual(point3))
  {
    cout << "point1 and point3 are equal\n";
  }
  else
  {
    cout << "point1 and point3 are not equal\n";
  }

  system("pause");
  return 0;
}
