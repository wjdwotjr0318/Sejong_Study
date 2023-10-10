#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int hex;
    scanf("%x", &hex);
    printf("decimal number = %d\n", hex);
    printf("octal number = %o\n", hex);
    return 0;
}