// Member functions of the Vector3d class defined here

#include "Vector3d.h" // Vector3d class defined in this file
#include <iostream>

using namespace std;

Vector3d::Vector3d(double x, double y, double z)
    : m_x{x}, m_y{y}, m_z{z}
{
}

void Vector3d::print() const
{
  cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}
