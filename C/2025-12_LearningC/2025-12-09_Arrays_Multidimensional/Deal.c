/*
 * Name: Deal.c
 * Author: TiredTiddles
 * Date: 2025-12-09
 *
 * Description:
 * Deals you a hand.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
    bool arr_inHand[NUM_SUITS][NUM_RANKS] = {false};
    int numCards, rank, suit, cardsInLine;

    const char arr_rankCode[] = {'a', '2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k'};
    const char arr_suitCode[] = {'c', 'd', 'h', 's'};

    srand((unsigned) time(NULL));

    printf("Due to character limits, I cannot write 10. Therefore, i have written \"t\" to represent 10. This deals you a hand!\n");

    printf("Enter number of cards in hand: ");
    scanf("%d", &numCards);

    printf("Your hand:\n");
    while (numCards > 0) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!arr_inHand[suit][rank]) {
            arr_inHand[suit][rank] = true;
            numCards--;
            switch (arr_rankCode[rank]) {
                default:
                    printf("%c", arr_rankCode[rank]);
                    break;
                case 'a':
                    printf("ace");
                    break;
                case 't':
                    printf("10");
                    break;
                case 'j':
                    printf("jack");
                    break;
                case 'q':
                    printf("queen");
                    break;
                case 'k':
                    printf("king");
                    break;
            }
            printf(" of ");
            switch (arr_suitCode[suit]) {
                case 'c':
                    printf("clubs");
                    break;
                case 's':
                    printf("spades");
                    break;
                case 'h':
                    printf("hearts");
                    break;
                case 'd':
                    printf("diamonds");
                    break;
            }
            printf("\t\t");
        }
        cardsInLine++;
        if (cardsInLine > 5) {
            printf("\n");
            cardsInLine = 0;
        }
    }

    printf("\n");

    return 0;
}