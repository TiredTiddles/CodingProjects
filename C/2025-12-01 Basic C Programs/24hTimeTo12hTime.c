// Name: 24hTimeTo12hTime
// Description: Converts 24h time to 12h time
// Author: TiredTiddles

#include <stdio.h>

int main(void)
{
    int timeH, timeM, ampm;
    ampm = 0;

    printf("Enter a 24-hour time in the format hh:mm: ");
    scanf("%d:%d", &timeH, &timeM);

    printf("The equivalent 12-hour time is: ");

    if (timeH >= 12)
    {
        ampm = 1;
    }

    if (ampm == 1 && timeH > 12)
    {
        timeH = timeH - 12;
        printf("%d:", timeH);
    }
    else
    {
        printf("%d:", timeH);
    }

    if (timeM < 10)
    {
        printf("0%d", timeM);
    }
    else
    {
        printf("%d", timeM);
    }

    if (ampm == 1)
    {
        printf(" pm\n");
    }
    else
    {
        printf(" am\n");
    }
}