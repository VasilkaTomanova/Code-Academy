#include <stdio.h>
extern const float const_PI;

/*Функция, която връща резултат*/
float circleAreaReturnResult(float r);

/*Функция, която НЕ връща резултат, направо prinft резултат*/
void circleAreaPrintResult(float r);

int main(void)
{
    float radius1 = 1.0F;
    float radius2 = 1.5F;
    float radius3 = 13.0F;

    float result1 = circleAreaReturnResult(radius1);
    printf("%f\n", result1);
    
    circleAreaPrintResult(radius2);
    circleAreaPrintResult(radius3);
}

float circleAreaReturnResult(float r)
{
    return const_PI * r * r;
}

void circleAreaPrintResult(float r)
{
    printf("%f\n", (const_PI * r * r));
}

float const const_PI = 3.14159F;