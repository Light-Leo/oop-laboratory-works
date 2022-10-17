# Problem 3B

## A. Now, let's create our Monster class. Our Monster will have 4 attributes (member variables): a type (MonsterType), a name (std::string), a roar (std::string), and the number of hit points (int). Create a Monster class that has these 4 member variables.

#### **Solution:**

```c++
#include <string>

using namespace std;

enum class MonsterType
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

class Monster
{
private:
  MonsterType m_type{};
  string m_name{};
  string m_roar{};
  int m_hitPoints{};
};
```
