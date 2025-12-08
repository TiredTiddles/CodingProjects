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
#include <ctype.h>

int main(void) {
    char ch;
    int i;

    do {
        ch = tolower(getchar());
        switch (ch) {
            case 'a': case 'b': case 'c':
                printf("1");
                break;
            case 'd': case 'e': case 'f':
                printf("2");
                break;
            case 'g': case 'h': case 'i':
                printf("1");
                break;
            case 'j': case 'k': case 'l':
                printf("2");
                break;
            case 'm': case 'n': case 'o':
                printf("1");
                break;
            case 'p': case 'r': case 's':
                printf("2");
                break;
            case 't': case 'u': case 'v':
                printf("1");
                break;
            case 'w': case 'x': case 'y':
                printf("2");
                break;
            default:
                printf("%c", ch);
        }
    } while (ch != '\n');
}