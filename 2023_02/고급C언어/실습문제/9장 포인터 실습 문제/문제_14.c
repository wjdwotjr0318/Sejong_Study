#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_to_k(int* pa, int* pb);

int main() {
    int N;
    int d[100];
    int* pd;
    scanf("%d", &N);
    for (pd = d; pd < d + N; pd++) {
        scanf("%d", pd);
    }
    int* pa = d;
    int* pb = d;
    int cnt = 0;
    for (pb = d; pb < d + N; pb++) {
        cnt += add_to_k(pa, pb);
    }
    printf("%d", cnt);

    return 0;
}

int add_to_k(int* pa, int* pb) {
    int res = 0;
    for (; pa <= pb; pa++) {
        res += *pa;
    }

    return res;
}
