#include <iostream>

using namespace std;

class Operation
{
public:
  int a, b;

  Operation(int a, int b)
  {
    this->a = a;
    this->b = b;
  }

  int sum()
  {
    return a + b;
  }
};

int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a;
  cin >> b;

  Operation op(a, b);
  cout << "The addition result on:" << op.sum() << endl;

  return 0;
}
