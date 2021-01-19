#include <stdio.h>

//тъй като задачата е като 7ма-A, тук за разнообразие използвах float и друго условие при тернарния оператор

int main(void)
{
    float nA;
    scanf("\n%f", &nA);
    float nB = (nA >= 1.45683F ? 1.45683F : 0.5);
    printf("A value is %f\n", nA);
    printf("B value is %f\n", nB);
    return 0;
}