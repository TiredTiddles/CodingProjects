/*
 * Name: InterestRateCalculator.c
 * Author: TiredTiddles
 * Date: 2025-12-08
 * 
 * Description:
 * Input a sum and an interst rate, and this will tell you
 * How much your investment is worth after a set number of years.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    float interestRate[5], investment[5] = {100, 100, 100, 100, 100};
    int timeYears, i, a;

    printf("This program will allow you to calculate amount of money you would receive if you invested $100 at a certain interest rate over a certain time period\n");

    printf("Interest Rate: ");
    scanf("%f", &interestRate[0]);

    printf("Number of years: ");
    scanf("%d", &timeYears);
    
    printf("Years\t");
    for (i = 0; i < 5; i++) {
        interestRate[i] = interestRate[0] + i;
        printf("%.2f%%\t\t", interestRate[i]);
    }
    printf("\n");

    for (a = 0; a < (timeYears + 1); a++) {
        printf("%d\t", a);
        for (i = 0; i <= 4; i++) {
            printf("$ %f\t", investment[i]);
            investment[i] *= (1 + (interestRate[i] * 0.01));
        }
        printf("\n");
    }

    return 0;
}