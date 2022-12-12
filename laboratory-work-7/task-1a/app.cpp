#include <iostream>

using namespace std;

// Class Fraction
class Fraction
{
  // Declare private members
private:
  int m_numerator{0};   // default n_numerator value is 0
  int m_denominator{1}; // default n_denominator value is 1

  // Class constructor
  // Class constructor, which assigns the variables numerator -> m_numerator, denominator -> m_denominator
public:
  Fraction(int numerator, int denominator = 1)
      : m_numerator{numerator}, m_denominator{denominator}
  {
  }

  // Print method
  void print() const
  {
    cout << m_numerator << '/' << m_denominator << '\n';
  }
};

int main()
{
  // Create class instance, and assign it into the f1 variable
  Fraction f1{1, 4};
  // Call the print function on the class instance
  f1.print();

  // Create class instance, and assign it into the f2 variable
  Fraction f2{1, 2};
  // Call the print function on the class instance
  f2.print();

  return 0;
}
