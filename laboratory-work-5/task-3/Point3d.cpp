// Member functions of the Point3d class defined here

#include "Point3d.h"  // Point3d class defined here
#include "Vector3d.h" // For the parameter of the function moveByVector()
#include <iostream>

using namespace std;

Point3d::Point3d(double x, double y, double z)
    : m_x{x}, m_y{y}, m_z{z}
{
}

// Adds the vector components to the corresponding point coordinates
void Point3d::moveByVector(const Vector3d &v)
{
  m_x += v.m_x;
  m_y += v.m_y;
  m_z += v.m_z;
}

void Point3d::print() const
{
  cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}
