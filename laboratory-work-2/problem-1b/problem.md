# Problem 1B

## Q: Why should we use a class for IntPair instead of a struct?

Enumerated types and data-only structs (structs that only contain variables) represent the traditional non-object-oriented programming world, as they can only hold data. Whereas in the world of object-oriented programming, we often want our types to not only hold data, but provide functions that work with the data as well. In C++, this is typically done via the class keyword.
