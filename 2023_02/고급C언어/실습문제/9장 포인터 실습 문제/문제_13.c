#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arrsum(int* pa, int* pb);

int main() {
    int N, S, E;
    int x[100];
    int* px;
    scanf("%d %d %d", &N, &S, &E);
    for (px = x; px < x + N; px++) {
        scanf("%d", px);
    }
    int* pa = &x[S];
    int* pb = &x[E];
    int total = arrsum(pa, pb);
    printf("%d", total);

    return 0;
}

int arrsum(int* pa, int* pb) {
    int res = 0;
    for (; pa <= pb; pa++) {
        res += *pa;
    }

    return res;
}