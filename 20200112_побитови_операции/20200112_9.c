/*9) Направете на нула битовете в числа, намиращи се на
позиции между 3 и 7.*/
#include <stdio.h>
int main()
{
    int number = 151;
    int m4 = 1 << 4;
    m4 = ~m4;
    number = number & m4;
    int m5 = 1 << 5;
    m5 = ~m5;
    number = number & m5;
    int m6 = 1 << 6;
    m6 = ~m6;
    number = number & m6;
    printf("%d", number);
}
