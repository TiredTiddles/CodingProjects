// Name: ISBNBreakdown.c
// Purpose: breaks down the contents of an isbn
// Author: TiredTiddles

// ISBNs are numbers in this format. They are used to identify books. 978-0-393-97950-3

#include <stdio.h>

int main(void)
{
    int gS1Prefix, groupIdentifier, publisherCode, itemNumber, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gS1Prefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: 393%d\nItem number: %d\nCheck digit: %d", gS1Prefix, groupIdentifier, publisherCode, itemNumber, checkDigit);

    return 0;
}