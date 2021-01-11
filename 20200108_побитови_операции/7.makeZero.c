/*7) Занулете всички битове на числата, намиращи се на
четна позиция.*/

#include <stdio.h>

int main()
{
    int number = 117;
    int m0 = 1 << 0;
    number = number ^ m0;
    int m2 = 1 << 2;
    number = number ^ m2;
    int m4 = 1 << 4;
    number = number ^ m4;
    int m6 = 1 << 6;
    number = number ^ m6;
    printf("%d", number);
}
