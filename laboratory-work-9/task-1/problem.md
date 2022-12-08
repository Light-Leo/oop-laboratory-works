# Problem 1

## A. Let’s implement our Fruit example that we talked about in our introduction to inheritance. Create a Fruit base class that contains two private members: a name (std::string), and a color (std::string). Create an Apple class that inherits Fruit. Apple should have an additional private member: fiber (double). Create a Banana class that also inherits Fruit. Banana has no additional members.

### Expected Behavior

#### Output

```
Apple(Red delicious, red, 4.2)
Banana(Cavendish, yellow)
```

#### **Solution:**

```c++
#include <string>
#include <iostream>

class Fruit
{
private:
  std::string m_name;
  std::string m_color;

public:
  Fruit(const std::string &name, const std::string &color)
      : m_name{name}, m_color{color}
  {
  }

  const std::string &getName() const { return m_name; }
  const std::string &getColor() const { return m_color; }
};

class Apple : public Fruit
{
private:
  double m_fiber;

public:
  Apple(const std::string &name, const std::string &color, double fiber)
      : Fruit{name, color},
        m_fiber{fiber}
  {
  }

  double getFiber() const { return m_fiber; }
};

std::ostream &operator<<(std::ostream &out, const Apple &a)
{
  out << "Apple(" << a.getName() << ", " << a.getColor() << ", " << a.getFiber() << ')';
  return out;
}

class Banana : public Fruit
{
public:
  Banana(const std::string &name, const std::string &color)
      : Fruit{name, color}
  {
  }
};

std::ostream &operator<<(std::ostream &out, const Banana &b)
{
  out << "Banana(" << b.getName() << ", " << b.getColor() << ')';
  return out;
}

int main()
{
  const Apple a{"Red delicious", "red", 4.2};
  std::cout << a << '\n';

  const Banana b{"Cavendish", "yellow"};
  std::cout << b << '\n';

  return 0;
}
```
