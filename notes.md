# Notes on C

## Operators

**&**: returns the memory address of the passed operand

## Vocabulary

address: a place in memory. Can be retrieved by using `&` operator before a variable name.

pointer: a variable that stores an an address of another variable. (Defined wtih `*` in front of it.)

## Examples

### Pointers vs. Variables

Code:

```c
#include <stdio.h>

void main() {
    int x = 100;
    printf ("Variable is %d, its address is %p\n", x, &x);
    int *y = &x;
    printf ("Address is %p, the value at that address is %d\n", y, *y);
}
```

Output:

```
Variable is 100, its address is 0x7fff3eaae51c
Address is 0x7fff3eaae51c, the value at that address is 100
```
