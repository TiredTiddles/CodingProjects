// Name: BeaufortScale.c
// Description: Translates the beaufort scale
// Author: TiredTiddles

#include <stdio.h>

int main(void)
{
    float windSpeed;

    printf("Please enter a wind speed in knots: ");
    scanf("%f", &windSpeed);

    printf("That is a ")

    if (windSpeed < 1) {
        printf("Calm\n");
    }
    else if (windSpeed <= 3) {
        printf("Light air\n");
    }
    else if (windSpeed <= 27) {
        printf("Breeze\n");
    }
    else if (windSpeed <= 47) {
        printf("Gale\n");
    }
    else if (windSpeed <= 63) {
        printf("Storm\n");
    }
    else {
        printf("Hurricane\n");
    }

    return 0;
}