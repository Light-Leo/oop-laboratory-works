# Problem 1

## A. Would you be more likely to implement the following as a composition or an aggregation?

### Q1. A ball that has a color

Composition: Color is an intrinsic property of a ball.

### Q2. An employer that is employing multiple people

Aggregation: An employer doesn’t start with any employees and hopefully doesn’t destroy all its employees when it goes bankrupt.

### Q3. The departments in a university

Composition: Departments can’t exist in absence of a university.

### Q4. Your age

Composition: Your age is an intrinsic property of you.

### Q5. A bag of marbles

Aggregation: The bag and the marbles inside have independent existences.

## A. What type of relationship (composition, aggregation, association, or dependency) do the following describe?

### Q1. An Animal class that contains an animal type (enum) and name (string).

Composition - The animal type and name don’t have a use outside of the Animal.

### Q2. A text editor class with a save) function that takes a File object as an argument. The save() function writes the contents of the editor to disk.

Dependency - The text editor class is using the File object for the task of saving to disk.

### Q3. An Adventurer class that can carry various kinds of Items, such as swords, wands, potions, or spellbooks. These Items can be dropped and picked up by other Adventurers.

Aggregation - When the Items are associated with the Adventurer, the Adventurer has-them. A sword being used by an adventurer can’t be used by anybody else at that time. But the Adventurer doesn’t manage the items existences.

### Q4. The Player prays at a Shrine to receive a new power

Dependency - They player depends on the shrine to receive the power, but does not have any long-term association with it.

### Q5. A Computer class that contains a CPU class. The CPU can be removed from the Computer and tested on its own.

Aggregation - The computer has a CPU, but does not manage its existence.
