// Name: ProductInformationFormatter.c
// Purpose: formats the information of a product
// Author: TiredTiddles

#include <stdio.h>

int main(void)
{
    int itemNumber, unitPrice, purchaseDateDay, purchaseDateMonth, purchaseDateYear;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%d", &unitPrice);

    printf("Enter purchase date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &purchaseDateDay, &purchaseDateMonth, &purchaseDateYear);

    printf("Item Number\tUnit Price\tPurchaseDate\n%d\t\t%d\t\t%d/%d/%d\n",
           itemNumber, unitPrice, purchaseDateDay, purchaseDateMonth, purchaseDateYear);

    return 0;
}