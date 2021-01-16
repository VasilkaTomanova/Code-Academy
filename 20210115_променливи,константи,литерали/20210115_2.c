#include <stdio.h>
int main(void){
    printf("Size ot literal default integer %d\n", sizeof(3));
    printf("Size ot literal U %ld\n", sizeof(3U));
    printf("Size ot literal I %ld\n", sizeof(3I)); 
    printf("Size ot literal L %ld\n", sizeof(3L));
    printf("Size ot literal LL %ld\n", sizeof(3LL));
    printf("--\n");
    printf("Size ot literal default floating poing F %ld\n", sizeof(3.1));
    printf("Size ot literal F %ld\n", sizeof(3.1F));
    printf("Size ot literal D %ld\n", sizeof(3.1D)); 
    printf("Size ot literal L %ld\n", sizeof(3.1L));
    return 0;
}
