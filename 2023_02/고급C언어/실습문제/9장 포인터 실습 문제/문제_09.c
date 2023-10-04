#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mid(int x[3]);
int main() {
    int x[3];
    int* px;

    for (px = x; px < x + 3; px++) {
        scanf("%d", px);
    }

    int a = mid(x);
    printf("%d", a);

    return 0;
}

int mid(int x[3]) {
    int* pa;
    int tmp;

    for (pa = x; pa < x + 2; pa++) {
        for (int* pb = pa; pb < x + 3; pb++) {
            if (*pa > *pb) {
                tmp = *pa;
                *pa = *pb;
                *pb = tmp;
            }
        }
    }
    int* num = *(x + 1);

    return num;
}