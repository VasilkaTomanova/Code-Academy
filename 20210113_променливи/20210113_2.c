/*2. Да направим функция, която ще принтира числата от
десетичен в бинарен вид:*/
#include <stdio.h>

void bin(unsigned inputNumber);

int main()
{
    unsigned inputNumber;
    printf("Please write number: ");
    scanf("%d", &inputNumber);
    bin(inputNumber);
    return 0;
}

void bin(unsigned inputNumber)
{
    unsigned i;
    for (i = 1 << 15; i > 0; i = i >> 1)
        (inputNumber & i) ? printf("1") : printf("0");
    printf("\n");
  
}