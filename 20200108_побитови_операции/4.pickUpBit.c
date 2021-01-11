/*4) Създайте функция vdigniBitNa. Тя получава
следните параметри - число и индекс. Функцията трябва
да "вдига" бита на съответния индекс в числото (под
"вдига" ще разбираме да му присвои стойност 1).*/


#include <stdio.h>
int vdigniBitNa(int num, int ind);
int main()
{
    int number, index, result;
    number = 103;
    index = 4;
    result = vdigniBitNa(number, index);
    printf("%d", result);
}
int vdigniBitNa(int num, int ind)
{
    int mask = 1 << ind;
    num = num | mask;
    return num;
}