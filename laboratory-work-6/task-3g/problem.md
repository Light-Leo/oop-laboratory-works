# Problem 3G

## A. Now, MonsterGenerator needs to generate some random attributes. To do that, well need to make use of this handy function:

#### **Solution:**

```c++
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
    return {Monster::Type::skeleton, "Bones", "*rattle*", 4};
  }
};
```
