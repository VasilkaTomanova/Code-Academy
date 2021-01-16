#include <stdio.h>
int main(void)
{
    float floatNumber = 0xAAF;
    signed int intNum = 0xAA;
    unsigned int uIntNum = 0xAAu;
    printf("f = %f, i = %d, a = %d", floatNumber, intNum, uIntNum);
}
