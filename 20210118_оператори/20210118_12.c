#include <stdio.h>

int main(void)
{
    int nX, nY; /* homework, input with scanf */
    printf("Enter two integer numbers:\n");
    scanf("%d", &nX);
    scanf("%d", &nY);

    if (nX == nY)
    {
        printf("%d and %d are equal\n", nX, nY);
    }
    else
    {
        printf("%d and %d are not equal\n", nX, nY);
        if (nX > nY)
        {
            printf("%d is greater than %d\n", nX, nY);
        }
        else
        {
            printf("%d is greater than %d\n", nY, nX);
        }
    }

    return 0;
}