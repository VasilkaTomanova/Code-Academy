#include <stdio.h>
int main(void)
{
    int i;
    char charArray[] = {'\t', '\n', '\r', '\v', '\\', '\'', '\"', '\?', '\a', '\b', '\f'};

    int charArrayLength = sizeof(charArray) / sizeof(char);

    for (i = 0; i < charArrayLength; i++)
    {
        char currentChar = charArray[i];
        int currentCharAsInteger = (int)currentChar;
        printf("%d. Escape Character %d %c\n", i+1, currentCharAsInteger, currentChar);
    }

    return 0;
}
