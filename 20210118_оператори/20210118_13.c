#include <stdio.h>
int main(void){
    printf("Enter four integer\n");
    int nA, nB, nX, nY;
    scanf("%d", &nA);
    scanf("%d", &nB);
    scanf("%d", &nX);
    scanf("%d", &nY);

    if (nA > nB && nA != 0)
    {
        printf("&& Operator : Both conditions are true\n");
    }
    if (nX > nY || nY != 20)
    {
        printf("|| Operator : Only one condition is true\n");
    }
    if (!(nA > nB && nB != 0))
    {
        printf(" ! Operator : Both conditions are true\n");
    }
    else
    {
        printf("Both conditions are true.\n");
    }

    if (nA == nB && nB == nX && nX == nY)
    {
        printf("&& Operator : All conditions are true\n");
    }
    if (nA != nB && nA != nX && nA != nY)
    {
        printf("&& Operator : All conditions are true\n");
    }
     if ( nA *2 > nB)
    {
        printf("The condition is true\n");
    }
    return 0;
}
