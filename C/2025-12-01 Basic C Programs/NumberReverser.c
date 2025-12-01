// Name: NumberReverser.c
// Purpose: reverses the number that you put into it
// Author: TiredTiddles

#include <stdio.h>

int main(void)
{
    int d1, d2, d3;

    printf("Please input a 3 digit number. We will display this number in reverse later. If you don't input a 3 digit number, the program crashes. ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("%d%d%d\n", d3, d2, d1);

    return 0;
}