#include <stdio.h>

int main(void)
{
    int i;
    char charArray[] = "dara bara dara bara";
    for (int i = 0; i < sizeof(charArray) / sizeof(char); i++)
    {
        printf("Current char is: %c\n", charArray[i]);
    }
    printf("Number of chars in string with spaces is: %d", sizeof(charArray) / sizeof(char) - 1);
    return 0;
}