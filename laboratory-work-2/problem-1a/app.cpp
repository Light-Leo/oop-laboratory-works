#include <iostream>

using namespace std;

// Class IntPair
class IntPair
{
  // Declare public members
public:
  int firstNumber{};
  int secondNumber{};

  // Public method print, which is responsible for printing out the two numbers
  void print()
  {
    cout << "Pair(" << firstNumber << ", " << secondNumber << ")\n";
  }

  // Primitive set function to set/ update/ modify values of the class instance
  void set(int _firstNumber, int _secondNumber)
  {
    firstNumber = _firstNumber;
    secondNumber = _secondNumber;
  }
};

int main()
{
  // Create pair instance, which will be assign in pair1 variable
  IntPair pair1;
  // Call the set method on the instance
  pair1.set(1, 1);

  // Create pair instance, which will be assign in pair2 variable, by passing in the constructor arguments
  IntPair pair2{2, 2};

  // Call the print method on the following instances
  pair1.print();
  pair2.print();

  system("pause");
  return 0;
}
