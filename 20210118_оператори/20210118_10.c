#include <stdio.h>

int main(void){
    int nResult = 13;
    int nX = 4;
    printf("Result = %d\n", nResult);
    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    nResult = 1;
    nResult <<= nX;
    printf("Result <<= %d -> %d\n", nX, nResult);
    printf("\n");

    float fResult = 125.5F;
    float fX = 24.5F;
    printf("Result = %f\n", fResult);
    fResult -= nX;
    printf("Result -= %f -> %f\n", fX, fResult);
    fResult *= fX;
    printf("Result *= %f -> %f\n", fX, fResult);
    printf("\n");

    int iRez = 9;
    printf("Result = %d\n", iRez);
    int iY = 3;
    iRez %= iY;
    printf("Result %%= %d -> %d\n", iY, iRez);
    printf("\n");

    return 0;
}