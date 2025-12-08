/*
 * Name: AlphanumericPhoneNumberTranslator.c
 * Author: TiredTiddles
 * Date: 2025-12-07
 * 
 * Description:
 * Converts letters on those pesky phone numbers
 * into numbers.
 */

#include <stdio.h>

#define N 10

int main(void) {
    int a[N], i;

    printf("Enter %d numbers:\n", N);

    for (i = 0; i < N; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = N - 1; i >= 0; i--) {
        printf("%d\t", a[i]);
    }

    return 0;
}