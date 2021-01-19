#include <stdio.h>

int main(void){
    int firstNumber = 0, secondNumber = 0;
    printf("Pleace enter firs integer number: ");
    scanf("%d", &firstNumber);
    printf("Pleace enter second integer number, but different than first one: ");
    scanf("%d", &secondNumber);
    int result = firstNumber > secondNumber ? firstNumber : secondNumber;
    printf("Max number: %d", result);
    return 0;
}