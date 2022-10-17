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
