#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "HELLO";
    for (int i = 0; i < strlen(str); i++)
    {
        int currAsciNum = (int)str[i];
        int newAScinNum = currAsciNum + 32;
        str[i] = (char)newAScinNum;
    }
    printf("%s", str);
    return 0;
}