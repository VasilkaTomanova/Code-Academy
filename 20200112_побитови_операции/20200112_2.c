/* 2) Създайте функция vzemiBitna. Функцията получава 
параметър число и индекс. Тя връща стойността на бита
на съответния индекс. */

#include <stdio.h>
int vzemiBitna(int num, int pos);
int main()
{
    int number, position, result;
    number = 52;
    position = 2;
    result = vzemiBitna(number, position);
    printf("%d", result);
}
int vzemiBitna(int num, int pos)
{
    int base = 1;
    num = num >> pos;
    num = num & base;
    return num;
}