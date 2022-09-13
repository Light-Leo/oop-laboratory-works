#include <iostream>

using namespace std;

class IntPair
{
public:
  int firstNumber{};
  int secondNumber{};

  void print()
  {
    cout << "Pair(" << firstNumber << ", " << secondNumber << ")\n";
  }

  void set(int _firstNumber, int _secondNumber)
  {
    firstNumber = _firstNumber;
    secondNumber = _secondNumber;
  }
};

int main()
{
  IntPair pair1;
  pair1.set(1, 1);

  IntPair pair2{2, 2};

  pair1.print();
  pair2.print();

  system("pause");
  return 0;
}
