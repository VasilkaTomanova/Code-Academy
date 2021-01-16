#include <stdio.h>
extern int g_Value;
void test();
int main()
{
    test();
    test();
    test();
    /*За да изнесем/извадлим финалната стойност на статик променливата от нейния обхват/scope трябва да я присвоим на глобалната и така
    ще имаме достъп до стойността й и в main;
    или просто да показваме долу в самия метод след всяко увеличение*/
    printf("%d\n", g_Value);
    return 0;
}

void test()
{
    static int count = 0;
    count++;
    g_Value= count;
    printf("%d\n", count);
}
int g_Value = 0;