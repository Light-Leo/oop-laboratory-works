#include <iostream>

using namespace std;

// Class Vector3d
class Vector3d
{
  // Declare private members
private:
  double m_x{};
  double m_y{};
  double m_z{};

public:
  // Class constructor (has default values), where x -> m_x, y -> m_y, z -> m_z
  Vector3d(double x = 0.0, double y = 0.0, double z = 0.0)
      : m_x{x}, m_y{y}, m_z{z}
  {
  }

  // print method
  void print() const
  {
    cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
  }

  // Register Point3d as the class friend
  friend class Point3d;
};

// Class Point3d
class Point3d
{
  // Declare private members
private:
  double m_x{};
  double m_y{};
  double m_z{};

public:
  // Class constructor (has default values), where x -> m_x, y -> m_y, z -> m_z
  Point3d(double x = 0.0, double y = 0.0, double z = 0.0)
      : m_x{x}, m_y{y}, m_z{z}
  {
  }

  // print method, uses cout to print values
  void print() const
  {
    cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
  }

  // Method, which modifies all the parameters by the ones from Vector3d reference passed by
  void moveByVector(const Vector3d &v)
  {
    m_x += v.m_x;
    m_y += v.m_y;
    m_z += v.m_z;
  }
};

int main()
{
  // Create the class instance, which will be stored in p variable
  Point3d p{1.0, 2.0, 3.0};
  // Create the class instance, which will be stored in v variable
  Vector3d v{2.0, 2.0, -3.0};

  // Test
  p.print();
  p.moveByVector(v);
  p.print();

  return 0;
}
