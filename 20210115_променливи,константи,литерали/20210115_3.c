#include <stdio.h>
int main(void){
    printf("Character literals: '%c' , '%c' , '%c' \n", '\041', '\x3A', 'Z');
    printf("Integer literals: %d , %d , %lld \n", 123, 0xFFF, 123456789012345ULL);
    printf("FLoating-point literals: %lf , %lf , %lg , %lg \n", 1.23, 1234.5678, 123E-12,123E+28);
    printf("String literal: \"%s\" ,   \"%s\" ,   \"%s\"  \n       ", "xxx", "yyy", "zzz");
    return 0;
}
