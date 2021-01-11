/*5) Създайте функция obarniBitNa. Тя получава
следните параметри - число и индекс. Като резултат
функцията обръща бита на съответната позиция в
числото (съответно от 0 на 1 или от 1 на 0)*/

#include <stdio.h>
int obarniBitNa(int num, int ind);
int main()
{
    int number, index, result;
    number = 22;
    index = 4;
    result = obarniBitNa(number, index);
    printf("%d", result);
}
int obarniBitNa(int num, int ind)
{
    int mask = 1 << ind;
    num = num ^ mask;
    return num;
}