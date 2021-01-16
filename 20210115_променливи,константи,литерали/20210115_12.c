#include <stdio.h>
#include <string.h>

int main(void){
    const char c_newValueOfL = 'x';
    char str[] = "Hello";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'l')
        {
            str[i] = c_newValueOfL;
        }
    }
    printf("%s", str);
}