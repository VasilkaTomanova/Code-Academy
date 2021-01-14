/*7. Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357
674 000, 3 657 895 000.
Изведете всяка променлива на екрана със printf()*/

#include <stdio.h>

int main()
{
    unsigned short int firtsNumber = 24212;
    printf("%d\n", firtsNumber);
    int secondNumber = -1357674;
    printf("%d\n",secondNumber);
    unsigned int thirdNumber = 6237498;
    printf("%d\n",thirdNumber);
     int fourthNumber =  -1357674000;
    printf("%d\n",fourthNumber);
    unsigned long long fifthNumber= 3657895000;
    printf("%lld\n",fifthNumber);
    return 0;
}
