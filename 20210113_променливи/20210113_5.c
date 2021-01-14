#include <stdio.h>

int main()
{
    char charValue = 'b';
    printf("\n%d\n", sizeof(charValue));
    int iValue = 100;
    printf("\n%d\n", sizeof(iValue));
    long long int lValue = 11111111;
    printf("\n%d\n", sizeof(lValue));
    return 0;
}