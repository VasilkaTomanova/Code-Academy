/*3. Съберете signed char a = -10 с unsigned char z = 0 тип.*/

#include <stdio.h>
void bin(unsigned inputNumber);


int main() {
    signed char a = -10; // [-128,+127]
    bin(a);
    unsigned char b = 0; // [0, 255]
    bin(b);
     printf("If we put the sum in char: %c\n", (a+b));
    printf("If we put the sum in integer: %d\n", (a+b));
    bin(a+b);
}
void bin(unsigned inputNumber)
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1)
        (inputNumber & i) ? printf("1") : printf("0");
    printf("\n");
  
}