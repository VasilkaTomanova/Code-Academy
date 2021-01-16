#include <stdio.h>
extern const float const_PI;

void circleAreaPrintResult(float r);
void elipseArea(float a, float b);

int main(void)
{
    float radius1 = 1.0F;
    float radius2 = 1.5F;
    float radius3 = 13.0F;

    circleAreaPrintResult(radius1);
    circleAreaPrintResult(radius2);
    circleAreaPrintResult(radius3);

    /*в условието на задачата не са дадени данни за a и b, за това взех произволни*/
    float a = 2.5;
    float b = 7.0;
    elipseArea(a,b);
}

void circleAreaPrintResult(float r)
{
    printf("%f\n", (const_PI * r * r));
}


void elipseArea(float a, float b){
     printf("%f\n", (const_PI * a * b));
}

float const const_PI = 3.14159F;