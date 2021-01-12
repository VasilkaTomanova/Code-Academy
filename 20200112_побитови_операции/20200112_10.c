/*10) Премахнете всички битове на число след n-тия бит
включително.*/

#include <stdio.h>
int main()
{
    int number = 202;
    int n = 5;
    number = number >> n;
    printf("%d", number);
}
