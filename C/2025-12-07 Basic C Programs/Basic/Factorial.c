/*
 * Name: Factorial.c
 * Author: TiredTiddles
 * Date: 2025-12-07
 * 
 * Description:
 * Gets the factorial of a inputted number.
 */

#include <stdio.h>

int main(void) {
    int num, fac;

    printf("Please input a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is: ", num);
    
    while (num > 0) {
        fac *= num;
        num -= 1;
        printf("%d\n", fac);
    }

    printf("%d", num);

    return 0;
}