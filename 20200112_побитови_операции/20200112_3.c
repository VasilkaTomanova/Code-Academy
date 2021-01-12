/*3) Създайте функция iz4istiBitna. Тя получава като
параметър число и индекс, и прави на нула бита на
съответния индекс в числото.*/

#include <stdio.h>
int iz4istiBitna(int num, int ind);
int main()
{
    int number, index, result;
    number = 104;
    index = 3;
    result = iz4istiBitna(number, index);
    printf("%d", result);
}
int iz4istiBitna(int num, int ind)
{
    int mask = 1 << ind;
    mask = ~mask;
    num = num & mask;
    return num;
}