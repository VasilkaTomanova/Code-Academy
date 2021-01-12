/*6) Променете стойността на бита на дадено число на
определена позиция. */

#include <stdio.h>

int main()
{
    int number, index;
    number = 23;
    index = 2;
    int mask = 1 << index;
    number = number ^ mask;
    printf("%d", number);
}
