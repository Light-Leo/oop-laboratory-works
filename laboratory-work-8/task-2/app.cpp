#include <functional>
#include <iostream>
#include <string>
#include <vector>

// Class Teacher
class Teacher
{
  // Declare a private member
private:
  std::string m_name{};

  // Class constructor
public:
  Teacher(const std::string &name)
      : m_name{name}
  {
  }

  // Getter function
  const std::string &getName() const { return m_name; }
};

class Department
{
  // Declare a private member
private:
  std::vector<std::reference_wrapper<const Teacher>> m_teachers{};

  // Public function to be able to call it outside of the class
  // Pass by regular reference. The user of the Department class shouldn't care about how it's implemented.
public:
  void add(const Teacher &teacher)
  {
    m_teachers.push_back(teacher);
  }

  // The friend declaration declares a non-member function, and makes it friend of the class, meaning it can access the private and protected members of the class.
  // The goal of friend std::ostream &operator<<(std::ostream &out, const Department &department) actually is to be able to do e. g. std::cout << 'Some text';
  friend std::ostream &operator<<(std::ostream &out, const Department &department)
  {
    out << "Department: ";

    for (const auto &teacher : department.m_teachers)
    {
      out << teacher.get().getName() << ' ';
    }

    out << '\n';

    return out;
  }
};

int main()
{
  // Create a teacher outside the scope of the Department
  Teacher t1{"Bob"};
  Teacher t2{"Frank"};
  Teacher t3{"Beth"};

  {
    // Create a department class instance and add some Teachers to it
    Department department{};

    department.add(t1);
    department.add(t2);
    department.add(t3);

    std::cout << department;
  } // Note: Department goes out of scope here and is destroyed, but not the teachers

  std::cout << t1.getName() << " still exists!\n";
  std::cout << t2.getName() << " still exists!\n";
  std::cout << t3.getName() << " still exists!\n";

  return 0;
}
