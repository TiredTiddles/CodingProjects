/*
 * Name: Square3.c
 * Author: TiredTiddles
 * Date: 2025-12-07
 * 
 * Description:
 * Keeps squaring until an overflow error is
 */

#include <stdio.h>

int main(void) {
    int n = 0,
        n2 = 0;

    while (n2 >= 0) {
        n2 = n * n;
        printf("%d, %d\n", n, n2);
        n++;
    }

    return 0;
}