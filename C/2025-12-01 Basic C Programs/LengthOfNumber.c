// Name: LengthOfNumber.c
// Description: Tells you the length of a number in the bounds of 0 and 9999
// Author: TiredTiddles

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a integer between 0 and 9999: ");
    scanf("%d", &num);

    printf("The number %d", num);
    if (num >= 1000)
    {
        printf(" has 4 digits\n");
    }
    else if (num >= 100)
    {
        printf(" has 3 digits\n");
    }
    else if (num >= 10)
    {
        printf(" has 2 digits\n");
    }
    else if (num >= 0)
    {
        printf(" has 1 digits\n");
    }
    else
    {
        printf(" has an unknown number of digits. Did you know that negative numbers don't count?");
    }

    return 0;
}