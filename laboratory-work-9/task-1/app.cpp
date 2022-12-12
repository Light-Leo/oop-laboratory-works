#include <string>
#include <iostream>

// Class Fruit
class Fruit
{
  // Declare private members
private:
  std::string m_name;
  std::string m_color;

  // Class constructor, which assigns the variables name -> m_name, color -> m_color
public:
  Fruit(const std::string &name, const std::string &color)
      : m_name{name}, m_color{color}
  {
  }

  // Two getters, '&' means reference
  const std::string &getName() const { return m_name; }
  const std::string &getColor() const { return m_color; }
};

// Class Apple is extended by the Fruit class
class Apple : public Fruit
{
  // Declare a private member
private:
  double m_fiber;

  // Class constructor
public:
  Apple(const std::string &name, const std::string &color, double fiber)
      : Fruit{name, color},
        m_fiber{fiber}
  {
  }

  // Getter function
  double getFiber() const { return m_fiber; }
};

// The overloaded operator returns a reference to the original ostream object, which means you can combine insertions.
// The overloaded << operator function must then be declared as a friend of the class so it can access the private data within the class.
std::ostream &operator<<(std::ostream &out, const Apple &a)
{
  out << "Apple(" << a.getName() << ", " << a.getColor() << ", " << a.getFiber() << ')';
  return out;
}

// Class Banana is extended by the Fruit class
class Banana : public Fruit
{
  // Class constructor
public:
  Banana(const std::string &name, const std::string &color)
      : Fruit{name, color}
  {
  }
};

// The overloaded operator returns a reference to the original ostream object, which means you can combine insertions.
// The overloaded << operator function must then be declared as a friend of class Date so it can access the private data within a Date object.
std::ostream &operator<<(std::ostream &out, const Banana &b)
{
  out << "Banana(" << b.getName() << ", " << b.getColor() << ')';
  return out;
}

int main()
{
  // Create a class instance, and assign it into the 'a' variable, with the following arguments: "Red delicious", "red", 4.2
  const Apple a{"Red delicious", "red", 4.2};
  // Print to the console log
  std::cout << a << '\n';

  // Create a class instance, and assign it into the 'b' variable, with the following arguments: "Cavendish", "yellow"
  const Banana b{"Cavendish", "yellow"};
  std::cout << b << '\n';

  return 0;
}
