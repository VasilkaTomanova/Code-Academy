/*Упражнение 4: съберете 10 - 127*/

#include <stdio.h>
void bin(unsigned inputNumber);

int main (){
    short int a = 10;
    bin(a);
    short int b = 127;
    bin(b);
    printf("%d\n", (a+b));
    bin(a+b);

}
void bin(unsigned inputNumber)
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1)
        (inputNumber & i) ? printf("1") : printf("0");
    printf("\n");
  
}