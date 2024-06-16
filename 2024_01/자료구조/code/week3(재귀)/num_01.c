#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}