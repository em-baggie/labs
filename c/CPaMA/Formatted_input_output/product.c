// Code to print product info

#include <stdio.h>

int main(void) {
    int item, d, m, y;
    float price;
    printf("Enter an item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &d, &m , &y);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t£%7.2f\t%d/%02d/%d\n", item, price, d, m , y);
}