#include <stdio.h>

int main()
{
    float tomatoPricePerCilo = 4.5;
    float flourPricePerCilo = 1.8;
    float yogurtPricePerCount = 0.5;
    float iceCreamPricePerCount = 0.6;
    float candyPricePerCilo = 1.5;
    float yollipopPricePerCount = 0.15;
    float fTomatoWeight;
    printf("Hello, welcome to our shop! Today we offer tomatos,flour, yougurt, ice cream and lollipop.\n");
    printf("How many kilograms of tomatos do you want?   ");
    scanf("%f", &fTomatoWeight);
    float fTomatoTotal = fTomatoWeight * tomatoPricePerCilo;
    printf("\nYour bill is %f", fTomatoTotal);
    return 0;
}
