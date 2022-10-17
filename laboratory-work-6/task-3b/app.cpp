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
