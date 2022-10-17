#include <iostream>
#include <string>
#include <string_view>

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

  string_view getTypeString() const
  {
    switch (m_type)
    {
    case Type::dragon:
      return "dragon";
    case Type::goblin:
      return "goblin";
    case Type::ogre:
      return "ogre";
    case Type::orc:
      return "orc";
    case Type::skeleton:
      return "skeleton";
    case Type::troll:
      return "troll";
    case Type::vampire:
      return "vampire";
    case Type::zombie:
      return "zombie";
    default:
      return "???";
    }
  }

  void print() const
  {
    cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << '\n';
  }
};

class MonsterGenerator
{
public:
  static Monster generateMonster()
  {
    return {Monster::Type::skeleton, "Bones", "*rattle*", 4};
  }
};

int main()
{
  Monster m{MonsterGenerator::generateMonster()};
  m.print();

  return 0;
}
