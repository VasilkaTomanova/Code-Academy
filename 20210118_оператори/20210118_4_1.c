#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 10;
    int true = x && y & x << 1;
        // <<     &    &&  

        // 1) x << 1 т.е. 10 << 1 т.е. 1010 << 1 => 10100 т.е. 20
           printf("%d\n", 10 << 1);

        // 2) 10 & 20 => 0
           printf("%d\n", 10 & 20);

        // 3) 10 && 0 => 1
        printf("%d\n", 10 && 0);

        printf("Final rezult: %d", 10 & 20);
    return 0;
}
