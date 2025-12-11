/*
 * Name: LengthOfString.c
 * Author: TiredTiddles
 * Date: 2025-12-07
 * 
 * Description:
 * Asks for user input, then outputs the length of the inputted string.
 */

#include <stdio.h>

int main(void) {
    int len = 0;

    printf("Enter a message: ");

    while (getchar() != '\n') {
        len++;
    }

    printf("Your message was %d character(s) long.\n", len);

    return 0; 
}