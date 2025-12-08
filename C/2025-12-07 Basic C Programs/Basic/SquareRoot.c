/*
 * Name: SquareRoot.c
 * Author: TiredTiddles
 * Date: 2025-12-07
 * 
 * Description:
 * Uses Newton's method to square root until a certain degree of accuracy is reached.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 0, y = 1, xoy = 0, avg = 0, lateY;

    printf("Please enter a number to square root: ");
    scanf("%lf", &x);

    printf("x\t\t y\t\t xoy\t\t avg\t\t lateY\n");

    do {
        lateY = y;
        xoy = x / y;
        avg = (y + xoy) / 2;
        y = avg;

        printf("%lf\t %lf\t %lf\t %lf\t %lf\n", x, y, xoy, avg, lateY);
    } while (fabs(avg - lateY) > 0.00001);

    return 0;
}