#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);
    printf("year %04d month %02d date %02d\n", year, month, day);
    return 0;
}