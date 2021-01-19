#include <stdio.h>

int main(void){
    int x = 10;
    int y = 10;
    int true, false;
    true = ++x  + x && y; 
        //10  +  11 && 10 
        // 21       && 10
        // 1        && 1 
    printf("%d", true);
    return 0;
}