#include <bits/stdc++.h>
using namespace std;

// Class Complex
class Complex
{
  // Declare all the public members
public:
  int real;
  int imaginary;

  // Class constructor with default values
  Complex()
  {
    real = 0;
    imaginary = 0;
  }

  // Class constructor with both arguments present
  Complex(int r, int i)
  {
    real = r;
    imaginary = i;
  }

  // addComplexNumber to calculate the complex numbers, creates the new Complex class instance and ultimately returns it
  Complex addComplexNumber(Complex C1, Complex C2)
  {
    Complex res;
    res.real = C1.real + C2.real;
    res.imaginary = C1.imaginary + C2.imaginary;

    return res;
  }
};

int main()
{
  // Create class instance, which will be assigned into the C1 variable
  Complex C1(4, 5);
  cout << "Complex number 1 : " << C1.real << " + i" << C1.imaginary << endl;

  // Create class instance, which will be assigned into the C2 variable
  Complex C2(8, 9);
  cout << "Complex number 2 : " << C2.real << " + i" << C2.imaginary << endl;

  // Create class instance, which will be assigned into the C3 variable
  Complex C3; // will be empty with no values
  // Call addComplexNumber and overwrite current class instance with the one created/ returned by the method
  C3 = C3.addComplexNumber(C1, C2);
  cout << "Sum of complex number : " << C3.real << " + i" << C3.imaginary;
  cout << endl
       << endl;

  // Create class instance, which will be assigned into the A variable
  Complex A(2, 7);
  cout << "Complex number 1 : " << A.real << " + i" << A.imaginary << endl;

  // Create class instance, which will be assigned into the B variable
  Complex B(10, 6);
  cout << "Complex number 2 : " << B.real
       << " + i" << B.imaginary << endl;

  // Create class instance, which will be assigned into the C variable
  Complex C;
  // Call addComplexNumber and overwrite current class instance with the one created/ returned by the method
  C = C.addComplexNumber(A, B);
  cout << "Sum of complex number : "
       << C.real << " + i"
       << C.imaginary;
}
