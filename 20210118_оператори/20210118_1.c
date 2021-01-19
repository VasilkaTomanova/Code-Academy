#include <stdio.h>

int main(void){
    int x = 10;
    int y = 10;
    int true, false;
    true = x == y;
    false = x != y;
    printf("Result from x == y is: %d\n", true);
    printf("Result from x != y is: %d\n", false);
    return 0;
}