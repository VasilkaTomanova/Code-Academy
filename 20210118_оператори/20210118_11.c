#include <stdio.h>

int main(void){
    int iCounter = 0;
    while (++iCounter < 3)
    {
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++iCounter);
        printf("-- Counter: %d\n", --iCounter);
        printf("Counter ++: %d\n", iCounter++);
        printf("Counter --: %d\n", iCounter--);
    }
    /* Какво става, ако се препълни броячът?.*/
    /* Отговор: Ще се излезне от while  - цикъла.*/
    printf("Exits the cycle.");
    return 0;
}