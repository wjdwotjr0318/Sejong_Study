#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int price1, price2, price3;
    scanf("%d %d %d", &price1, &price2, &price3);
    printf("purchase 1: %5d won\n", price1);
    printf("purchase 2: %5d won\n", price2);
    printf("purchase 3: %5d won\n", price3);
    return 0;
}