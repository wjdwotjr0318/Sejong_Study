#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void make_num(int n) {
    if (n == 0) {
        return;
    }
    printf("%d\n", n % 10);
    make_num(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    make_num(n);
    return 0;
}