#include <stdio.h>
extern int g_value;
void test();
int main(void){
    test();
    test();
    test();
    printf("%i", g_value);
}

int g_value = 0;
void test()
{
    g_value++;
}
