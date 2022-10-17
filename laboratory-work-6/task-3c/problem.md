# Problem 3C

## A. enum MonsterType is specific to Monster, so move the enum inside the class as a public declaration. When the enum is inside the class, "MonsterType" can be renamed "Type" since the context is already Monster.

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
};
```
