/*Упражнение 1:
Съберете char (255 + 10).
2. Да съберем пак две числа от тип char 255 + 10, да използваме функцията
за представяне на числата в двоичен вид:
*/

#include <stdio.h>
void bin(unsigned inputNumber);

int main()
{
    char firstChar = 255;
    bin(firstChar);
    char secondChar = 10;
    bin(secondChar);
    printf("%d\n", (char)(firstChar + secondChar));
    bin(firstChar + secondChar);
    return 0;
}
void bin(unsigned inputNumber)
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1)
        (inputNumber & i) ? printf("1") : printf("0");
    printf("\n");
}