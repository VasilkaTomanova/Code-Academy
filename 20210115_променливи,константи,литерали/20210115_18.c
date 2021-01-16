#include <stdio.h>

int main()
{
    unsigned short int totalNumberOfCaravans = 3;
    float pricePerDayForOneCaravana = 90;
    unsigned short int totalNumberOfCampers = 3;
    float pricePerDayForOneCamp = 100;

    float bill = 0.0;

    printf("Dobre doshli v Karavani Kempeti pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    unsigned short int rez;
    scanf("%d", &rez);

    if (rez == 1)
    {
        bill += pricePerDayForOneCaravana;
        totalNumberOfCaravans--;
    }
    else
    {
        bill += pricePerDayForOneCamp;
        totalNumberOfCampers--;
    }
    /*printf("Let caravans: %d   Left Camper: %d\n", totalNumberOfCaravans, totalNumberOfCampers);
    printf("Bill: %f\n", bill);*/
    printf("Iskate li oshte produkti\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    scanf("%d", &rez);
    return 0;
}