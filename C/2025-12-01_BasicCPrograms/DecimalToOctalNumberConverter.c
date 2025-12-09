// Name: DecimalToOctalNumberConverter.c
// Description: Converts a number from decimal to octal
// Author: TiredTiddles

#include <stdio.h>

int main(void)
{
    int n1, r1, r2, r3, r4;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n1);

    r1 = n1 / 4096;
    n1 = n1 % 4096;

    r2 = n1 / 512;
    n1 = n1 % 512;

    r3 = n1 / 64;
    n1 = n1 % 64;

    r4 = n1 / 8;
    n1 = n1 % 8;

    printf("The number you wrote is %d%d%d%d in octal\n", r1, r2, r3, r4);

    return 0;
}