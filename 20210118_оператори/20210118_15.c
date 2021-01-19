#include <stdio.h>

//тъй като задачата е като 7ма, тук за разнообразие използвах float и друго условие при тернарния оператор

int main()
{
    float nA = 5.435F;
    float nB = (nA >= 5.435F ? 1.526F : 0);
    printf("A value is %f\n", nA);
    printf("B value is %f\n", nB);
    return 0;
}