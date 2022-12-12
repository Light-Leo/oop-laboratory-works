#include <iostream>

using namespace std;

// Class Student
class Student
{
  // Declare the public members
public:
  char *name; // name is a pointer variable
  int mark1;
  int mark2;

  // Student class constructor
  Student(char *na, int ma1, int ma2)
  {
    name = na;
    mark1 = ma1;
    mark2 = ma2;
  }

  // Calculates parameters
  int calc_media()
  {
    return (mark1 + mark2) / 2;
  }

  // disp method to call the calc_media, then print the result
  void disp()
  {
    cout << "Student:" << name << " \n media:" << calc_media() << "\n";
  }
};

int main()
{
  const int MaxLength = 1024; // Set nam char length
  char nam[MaxLength] = {};   // Create an array of chars

  // Declare two variables
  int m1, m2;

  // Input values
  cout << "Enter name: ";
  cin >> nam;

  cout << "Enter marks of two subjects: ";
  cin >> m1;
  cin >> m2;

  // Create class instance, which will be assigned into the student1 variable with just inputted values
  Student student1(nam, m1, m2);

  // Class disp method on the instance
  student1.disp();
  return 0;
}
