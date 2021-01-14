
//о 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.

#include <stdio.h>

int main()
{
    unsigned short int totalNumberOfCaravans = 3;
    float pricePerDayForOneCaravana = 90;
    unsigned short int totalNumberOfCampers = 3;
    float pricePerDayForOneCamp = 100;
    printf("Dobre doshli v Karavani Kempeti pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    unsigned short int rez;
    scanf("%d", &rez);
    return 0;
}
