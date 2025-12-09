/*
 * Name: BiggestNumber.c
 * Author: TiredTiddles
 * Date: 2025-12-02
 * 
 * Description:
 * This program tells you the biggest number out of four numbers
 * you input into the application
 */

 #include <stdio.h>

 int main(void) {
    int n1, n2, n3, n4;
    int biggestNumber;

    printf("Please input 4 numbers in the format \"num1 num2 num3 num4\": ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    n1 = biggestNumber;
    if (biggestNumber < n2) {
        biggestNumber = n2;
        printf("Biggest number is now %d\n", biggestNumber);
    }
    if (biggestNumber < n3) {
        biggestNumber = n3;
        printf("Biggest number is now %d\n", biggestNumber);
    }
    if (biggestNumber < n4) {
        biggestNumber = n4;
        printf("Biggest number is now %d\n", biggestNumber);
    }

    printf("Biggest number is %d\n", biggestNumber);

    return 0;
 }