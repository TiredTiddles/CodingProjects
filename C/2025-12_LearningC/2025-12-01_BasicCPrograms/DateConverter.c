// Name: DateConverter.c
// Purpose: rearranges the format of a date
// Author: Xirui Cai

#include <stdio.h>

int main(void)
{
    int inputYear, inputMonth, inputDay;

    printf("Input date here in dd/mm/yyyy format here: ");
    scanf("%d/%d/%d", &inputDay, &inputMonth, &inputYear);

    printf("%d%d%d\n", inputYear, inputMonth, inputDay);

    return 0;
}