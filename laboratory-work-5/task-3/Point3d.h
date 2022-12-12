// Header file that defines the Point3d class

#ifndef POINT3D_H
#define POINT3D_H

// Forward declaration for class Vector3d for function moveByVector()
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
  // Forward declaration above needed for this
  void moveByVector(const Vector3d &v);
};

#endif
