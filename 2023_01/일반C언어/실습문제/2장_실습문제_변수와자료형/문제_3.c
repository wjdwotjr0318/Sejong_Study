#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    char ch;
    ch = a;
    printf("(int->int) %d\n", a);
    printf("(int->char->int) %d\n", ch);
    return 0;
}