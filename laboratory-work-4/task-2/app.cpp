#include <iostream>

using namespace std;

// Class Operation
class Operation
{
  // Declare public members
public:
  int a, b;

  // Class constructor
  Operation(int a, int b)
  {
    this->a = a;
    this->b = b;
  }

  // Simple sum method, returns (gives back) int result as a result
  int sum()
  {
    return a + b;
  }
};

int main()
{
  // Declare and input two variables
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a;
  cin >> b;

  // Initialize Operation class instance to op variable with just inputted values
  Operation op(a, b);
  // Call the sum method and print the result
  cout << "The addition result on:" << op.sum() << endl;

  return 0;
}
