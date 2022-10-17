# Problem 2

## A. Take the Fraction class we wrote in the previous quiz (listed below) and add an overloaded operator<< and operator>> to it.

### Expected Behavior

#### Output

```
Enter fraction 1: 2/3
Enter fraction 2: 3/8
2/3 * 3/8 is 1/4
```

#### **Solution:**

```c++
#include <iostream>
#include <limits>
#include <numeric>

using namespace std;

class Fraction
{
private:
  int m_numerator{0};
  int m_denominator{1};

public:
  Fraction(int numerator = 0, int denominator = 1) : m_numerator{numerator}, m_denominator{denominator}
  {
    reduce();
  }

  void reduce()
  {
    int gcd{std::gcd(m_numerator, m_denominator)};
    if (gcd)
    {
      m_numerator /= gcd;
      m_denominator /= gcd;
    }
  }

  friend Fraction operator*(const Fraction &f1, const Fraction &f2);
  friend Fraction operator*(const Fraction &f1, int value);
  friend Fraction operator*(int value, const Fraction &f1);

  friend ostream &operator<<(ostream &out, const Fraction &f1);
  friend istream &operator>>(istream &in, Fraction &f1);

  void print()
  {
    cout << m_numerator << '/' << m_denominator << '\n';
  }
};

Fraction operator*(const Fraction &f1, const Fraction &f2)
{
  return {f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator};
}

Fraction operator*(const Fraction &f1, int value)
{
  return {f1.m_numerator * value, f1.m_denominator};
}

Fraction operator*(int value, const Fraction &f1)
{
  return {f1.m_numerator * value, f1.m_denominator};
}

ostream &operator<<(ostream &out, const Fraction &f1)
{
  out << f1.m_numerator << '/' << f1.m_denominator;
  return out;
}

istream &operator>>(istream &in, Fraction &f1)
{
  in >> f1.m_numerator;

  in.ignore(numeric_limits<streamsize>::max(), '/');

  in >> f1.m_denominator;

  f1.reduce();

  return in;
}

int main()
{
  Fraction f1;
  cout << "Enter fraction 1: ";
  cin >> f1;

  Fraction f2;
  cout << "Enter fraction 2: ";
  cin >> f2;

  cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';

  return 0;
}
```
