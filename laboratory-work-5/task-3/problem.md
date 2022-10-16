# Problem 2

## A. In geometry, a point is a position in space. We can define a point in 3d-space as the set of coordinates x, y, and z. For example, the Point(2.0, 1.0, 0.0) would be the point at coordinate space x=2.0, y=1.0, and z=0.0. In physics, a vector is a quantity that has a magnitude (length) and a direction (but no position). We can define a vector in 3d-space as an x, y, and z value representing the direction of the vector along the x, y, and z axis (the length can be derived from these). For example, the Vector(2.0, 0.0, 0.0) would be a vector representing a direction along the positive x-axis (only), with length 2.0. A Vector can be applied to a Point to move the Point to a new position. This is done by adding the vector’s direction to the point’s position to yield a new position. For example, Point(2.0, 1.0, 0.0) + Vector(2.0, 0.0, 0.0) would yield the point (4.0, 1.0, 0.0). Points and Vectors are often used in computer graphics (the point to represent vertices of shape, and vectors represent movement of the shape). Q: c) Reimplement the solution to quiz question 1b using 5 separate files: Point3d.h, Point3d.cpp, Vector3d.h, Vector3d.cpp, and main.cpp.

#### **Solution:**

```c++
// Point3d.h:
#ifndef POINT3D_H
#define POINT3D_H

class Vector3d;

class Point3d
{
private:
  double m_x{};
  double m_y{};
  double m_z{};

public:
  Point3d(double x = 0.0, double y = 0.0, double z = 0.0);

  void print() const;
  void moveByVector(const Vector3d &v);
};

#endif

// Point3d.cpp:
#include "Point3d.h"
#include "Vector3d.h"
#include <iostream>

using namespace std;

Point3d::Point3d(double x, double y, double z)
    : m_x{x}, m_y{y}, m_z{z}
{
}

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

// Vector3d.h:
#ifndef VECTOR3D_H
#define VECTOR3D_H

#include "Point3d.h"

class Vector3d
{
private:
  double m_x{};
  double m_y{};
  double m_z{};

public:
  Vector3d(double x = 0.0, double y = 0.0, double z = 0.0);

  void print() const;
  friend void Point3d::moveByVector(const Vector3d &v);
};

#endif

// Vector3d.cpp:
#include "Vector3d.h"
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

// app.cpp:
#include "Vector3d.h"
#include "Point3d.h"

int main()
{
  Point3d p{1.0, 2.0, 3.0};
  Vector3d v{2.0, 2.0, -3.0};

  p.print();
  p.moveByVector(v);
  p.print();

  return 0;
}
```
