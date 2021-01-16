#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "Hello";
    unsigned short int length = strlen(str);
    char result[5];
    for (int i = 0; i < length; i++)
    {
        unsigned int x = length - i - 1;
        char currCharFromFirstWord = str[x];
        result[i] = currCharFromFirstWord;
    }
    result[5] = '\0';
    printf("%s", result);

    return 0;
}