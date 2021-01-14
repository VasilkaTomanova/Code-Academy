/*6. Дефинирайте променливи със стойност -127, 255, 6 237 498, 4 294 967 292, -9
000 000 000 000 775 845.
Изведете всяка променлива на екрана със printf()*/

#include <stdio.h>

int main()
{
    short int firtsNumber = -127;
    printf("%d\n", firtsNumber);
    unsigned short int secondNumber = 255;
    printf("%d\n",secondNumber);
    unsigned int thirdNumber = 6237498;
    printf("%d\n",thirdNumber);
    unsigned int fourthNumber = 4294967292;
    printf("%lld\n",fourthNumber);
    signed long long fifthNumber=-9000000000000775845;
    printf("%lld\n",fifthNumber);
    return 0;
}