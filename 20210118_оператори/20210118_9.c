#include <stdio.h>

int main(void){
    printf("Example with integers, '-', '/':\n");
    int iX = 13;
    int iY = 44;
    int iResult = 0;
    iResult = iX - iY;
    printf("%d - %d = %d\n", iX, iY, iResult);
    iResult = iY / iX;
    printf("%d / %d = %d\n", iY, iX, iResult);
    iResult = iY % iX;
    printf("%d / %d Remainder %d\n", iY, iX, iResult);

    printf("\n");
    printf("Example with float, '+', '*':\n");
    float fX = 4.5F;
    float fY = 77.7F;
    float fResult = 0;
    fResult = fX + fY;
    printf("%f + %f = %f\n", fX, fY, fResult);
    fResult = fY * fX;
    printf("%f * %f = %f\n", fY, fX, fResult);
    
    return 0;
}