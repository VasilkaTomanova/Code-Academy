#include <stdio.h>

//тъй като задачата е като 7ма-B, тук за разнообразие нмирам min - по - малкото от двете числа

int main(void){
    int firstNumber = 0, secondNumber = 0;
    printf("Pleace enter firs integer number: ");
    scanf("%d", &firstNumber);
    printf("Pleace enter second integer number, but different than first one: ");
    scanf("%d", &secondNumber);
    int result = firstNumber < secondNumber ? firstNumber : secondNumber;
    printf("Min number: %d", result);
    return 0;
}