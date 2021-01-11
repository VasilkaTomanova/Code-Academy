/*12) Вдигнете всички битове на число, на позиции делящи
се на 3.*/

#include <stdio.h>
int main()
{
    int number = 472;
    int m3 = 1 << 3;
    number = number | m3;
    int m6 = 1 << 6;
    number = number | m6;
    int m9 = 1 << 9;
    number = number | m9;
    printf("%d", number);
}
