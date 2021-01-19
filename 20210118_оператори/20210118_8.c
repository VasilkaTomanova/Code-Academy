#include <stdio.h>

/*функция, която проверява дали подадения параметър е буква или не*/
int isLetter(char c);

int main(void) {
    printf("Pleace enter char: ");
    char inputChar;
    scanf("%c", &inputChar);
    int result = isLetter(inputChar);
    if (result == 1)
    {
        printf("\'%c\' is letter.", inputChar);
    }
    else
    {
        printf("\'%c\' Is NOT letter.", inputChar);
    }
    return 0;
}
int isLetter(char c)
{
    int currAsciiNum = (int)c;
    if (currAsciiNum >= 65 && currAsciiNum <= 90 || currAsciiNum >= 97 && currAsciiNum <= 112)
    {
        return 1;
    }
    return 0;
}