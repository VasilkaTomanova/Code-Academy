#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 10;
    int true = x && y ^ x << 1;
    // <<   ^    &&

    // 1) 10 << 1 т.е. 1010 << 1 => 10100 = 20
    printf("%d\n", 10 << 1);
    // 2) 10 ^ 20
    printf("%d\n", 20 ^ 10);
    // 3) 10 && 30
    printf("%d\n", 10 && 30);

    printf("%d",true);
    return 0;
}
