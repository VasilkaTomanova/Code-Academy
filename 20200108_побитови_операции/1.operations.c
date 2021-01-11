/*1)Направете побитовите операции върху целите числа 3 и 5 в main().
Покажете резултата с функцията printf(“%d”, rez);*/

#include <stdio.h>

int returnResultFromAndOperation(int a, int b);
int returnResultFromOrOperation(int a, int b);
int returnResultFromZOrOperation(int a, int b);

int main()
{
    int a, b, rezFromAnd, rezFromOr, rezFromXOr;
    a = 3;
    b = 5;
    rezFromAnd = returnResultFromAndOperation(a, b);
    printf("%d\n", rezFromAnd);
    rezFromOr = returnResultFromOrOperation(a, b);
    printf("%d\n", rezFromOr);
    rezFromXOr = returnResultFromZOrOperation(a,b);
    printf("%d",rezFromXOr);
     return 0;
}

int returnResultFromAndOperation(int a, int b)
{
    int result = a & b;
    return result;
}
int returnResultFromOrOperation(int a, int b)
{
    int result = a | b;
    return result;
}
int returnResultFromZOrOperation(int a, int b)
{
    int result = a ^ b;
    return result;
}