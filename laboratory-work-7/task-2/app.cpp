#include <iostream>
#include <limits>
#include <numeric>

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
  Fraction(int numerator = 0, int denominator = 1) : m_numerator{numerator}, m_denominator{denominator}
  {
    // We put reduce() in the constructor to ensure any new fractions we make get reduced!
    // Any fractions that are overwritten will need to be re-reduced
    reduce();
  }

  // Method to reduce fraction
  void reduce()
  {
    // GCD is the greatest common divisor. This line is responsible for finding it, and assigning it into gcd variable.
    int gcd{std::gcd(m_numerator, m_denominator)};
    if (gcd)
    {
      // Apply GCD to the fraction, simply divide the every part by it.
      m_numerator /= gcd;
      m_denominator /= gcd;
    }
  }

  // Declare friend overload function (non-member functions)
  friend Fraction operator*(const Fraction &f1, const Fraction &f2);
  friend Fraction operator*(const Fraction &f1, int value);
  friend Fraction operator*(int value, const Fraction &f1);

  friend ostream &operator<<(ostream &out, const Fraction &f1);
  friend istream &operator>>(istream &in, Fraction &f1);

  // Print method
  void print()
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
  return {f1.m_numerator * value, f1.m_denominator};
}

// The overloaded operator returns a reference to the original ostream object, which means you can combine insertions.
// The overloaded << operator function must then be declared as a friend of the class so it can access the private data within the class.
ostream &operator<<(ostream &out, const Fraction &f1)
{
  out << f1.m_numerator << '/' << f1.m_denominator;
  return out;
}

// Friend istream overload function to handle cin operations and be able to interfere/ modify private members of the class
std::istream &operator>>(std::istream &in, Fraction &f1)
{
  // Overwrite the values of f1
  in >> f1.m_numerator;

  // Ignore the '/' separator
  in.ignore(std::numeric_limits<std::streamsize>::max(), '/');

  in >> f1.m_denominator;

  // Since we overwrite the existing f1, we need to reduce again
  f1.reduce();

  return in;
}

int main()
{
  // Create f1 instance, and assign it into the f1 variable
  Fraction f1;
  cout << "Enter fraction 1: ";
  cin >> f1;

  // Create f1 instance, and assign it into the f2 variable
  Fraction f2;
  cout << "Enter fraction 2: ";
  cin >> f2;

  // Trigger overload function to do multiplication and print it
  cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';

  return 0;
}
