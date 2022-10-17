# Problem 3D

## A. Create a constructor that allows you to initialize all of the member variables.

#### **Solution:**

```c++
#include <string>

using namespace std;

class Monster
{
public:
  enum class Type
  {
    dragon,
    goblin,
    ogre,
    orc,
    skeleton,
    troll,
    vampire,
    zombie,
    max_monster_types
  };

private:
  Type m_type{};
  string m_name{};
  string m_roar{};
  int m_hitPoints{};

public:
  Monster(Type type, const string &name, const string &roar, int hitPoints)
      : m_type{type}, m_name{name}, m_roar{roar}, m_hitPoints{hitPoints}
  {
  }
};

int main()
{
  Monster skeleton{Monster::Type::skeleton, "Bones", "*rattle*", 4};

  return 0;
}
```
