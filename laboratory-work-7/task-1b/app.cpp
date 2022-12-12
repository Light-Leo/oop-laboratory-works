#include <iostream>

using namespace std;

// Class Fraction
class Fraction
{
  // Declare private members
private:
  int m_numerator{0};
  int m_denominator{1};

  // Class constructor, which assigns the variables numerator -> m_numerator, denominator -> m_denominator
public:
  Fraction(int numerator, int denominator = 1)
      : m_numerator{numerator}, m_denominator{denominator}
  {
  }

  // Declare friend overload function (non-member functions)
  friend Fraction operator*(const Fraction &f1, const Fraction &f2);
  friend Fraction operator*(const Fraction &f1, int value);
  friend Fraction operator*(int value, const Fraction &f1);

  // Print method
  void print() const
  {
    cout << m_numerator << '/' << m_denominator << '\n';
  }
};

// Handle * operation: fraction * fraction
Fraction operator*(const Fraction &f1, const Fraction &f2)
{
  return {f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator};
}

// Handle * operation: fraction * value
Fraction operator*(const Fraction &f1, int value)
{
  return {f1.m_numerator * value, f1.m_denominator};
}

// Handle * operation: value * fraction
Fraction operator*(int value, const Fraction &f1)
{
  return {f1 * value};
}

int main()
{
  // Create f1 instance of the Fraction class, and assign it into the f1 variable with the specified arguments
  Fraction f1{2, 5};
  // Call print method on the f1 class
  f1.print();

  // Create f2 instance of the Fraction class, and assign it into the f1 variable with the specified arguments
  Fraction f2{3, 8};
  // Call print method on the f1 class
  f2.print();

  // Create f3 instance of the Fraction class, and assign it into the f1 variable with the specified arguments
  Fraction f3{f1 * f2};
  // Call print method on the f1 class
  f3.print();

  // Create f4 instance of the Fraction class, and assign it into the f1 variable with the specified arguments
  Fraction f4{f1 * 2};
  // Call print method on the f1 class
  f4.print();

  // Create f5 instance of the Fraction class, and assign it into the f1 variable with the specified arguments
  Fraction f5{2 * f2};
  // Call print method on the f1 class
  f5.print();

  // Create f6 instance of the Fraction class, and assign it into the f1 variable with the specified arguments
  Fraction f6{Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4}};
  // Call print method on the f1 class
  f6.print();

  return 0;
}
