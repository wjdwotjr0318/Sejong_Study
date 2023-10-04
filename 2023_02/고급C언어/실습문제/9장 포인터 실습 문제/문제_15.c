#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x[10];
    int* px;
    for (px = x; px < x + 10; px++) {
        scanf("%d", px);
    }
    px = x;
    int a = 10;
    for (; a > 1; a--) {
        ABC(px, a);
    }

    for (int* cnt = x; cnt < x + 10; cnt++) {
        printf(" %d", *cnt);
    }
    return 0;
}

void ABC(int* px, int a) {
    int* num;
    int swap;
    for (num = px; num < px + a; num++) {
        for (int* pb = num; pb < px + a; pb++) {
            if (*pb > *num) {
                swap = *num;
                *num = *pb;
                *pb = swap;
            }
        }
    }
}