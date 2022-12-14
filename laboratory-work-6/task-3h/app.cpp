#include <array>
#include <ctime>
#include <cstdlib>
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
  static int getRandomNumber(int min, int max)
  {
    static constexpr double fraction{1.0 / (RAND_MAX + 1.0)};
    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
  }

  static Monster generateMonster()
  {
    auto type{static_cast<Monster::Type>(getRandomNumber(0, static_cast<int>(Monster::Type::max_monster_types) - 1))};
    int hitPoints{getRandomNumber(1, 100)};

    static constexpr array s_names{"Blarg", "Moog", "Pksh", "Tyrn", "Mort", "Hans"};
    static constexpr array s_roars{"*ROAR*", "*peep*", "*squeal*", "*whine*", "*hum*", "*burp*"};

    auto name{s_names[getRandomNumber(0, static_cast<int>(s_names.size() - 1))]};
    auto roar{s_roars[getRandomNumber(0, static_cast<int>(s_roars.size() - 1))]};

    return {type, name, roar, hitPoints};
  }
};

int main()
{
  srand(static_cast<unsigned int>(time(nullptr)));
  rand();

  Monster m{MonsterGenerator::generateMonster()};
  m.print();

  return 0;
}
