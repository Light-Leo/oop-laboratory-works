#include <iostream>

using namespace std;

class Rectangle
{
  // Note: class instance won't be using this private members
private:
  float l, b;

public:
  // Method to calculate area
  float getArea(float l, float b)
  {
    return l * b;
  }
};

int main()
{
  // Declare two float variables
  float l, b;
  // Create instance of the class, which will be assigned into the r1 variable
  Rectangle r1;

  // Input variables needed for calculation
  cout << "Enter the length of the rectangle: ";
  cin >> l;

  cout << "Enter the breadth of the rectangle: ";
  cin >> b;

  // Calculate and print out the result
  cout << "Area of the rectangle is: " << r1.getArea(l, b) << " square units.";

  return 0;
}
