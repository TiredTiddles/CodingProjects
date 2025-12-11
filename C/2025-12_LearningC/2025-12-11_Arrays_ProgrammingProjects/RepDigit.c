/*
 * Name: RepDigit.c
 * Author: TiredTiddles
 * Date: 2025-12-11
 * 
 * Description:
 * Tells you what digits have been repeated.
 */

#include <stdio.h>

int main(void) {
    char digits[32];
    int counter[10] = {0};   // initialize counters
    int i = 0;
    char c;

    printf("You may input digits of up to 32 length, not separated by anything.\n");

    while (i < 32) {
        scanf("%c", &c);
        if (c == '\n')
            break;
        digits[i] = c;
        if (c >= '0' && c <= '9') {
            counter[c - '0']++;
        }
        i++;
    }

    for (i = 0; i < 10; i++) {
        if (counter[i] > 1) {
            printf("%d ", i);
        }
    }

    return 0;
}