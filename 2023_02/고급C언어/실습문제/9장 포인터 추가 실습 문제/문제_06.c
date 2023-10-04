#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input(int* p);
int* sel_next(int* p);
int number(int* p, int* q);

int main() {
    int x[100];
    int* px = x;
    int N = input(px);
    while (1) {
        if (*px == -1) {
            break;
        }
        printf("%d\n", number(px, sel_next(px)));
        px = sel_next(px);
        if (*px != -1) {
            px -= 1;
        }
    }
    return 0;
}

int input(int* p) {
    int cnt = 0;
    int* px = p;

    while (px < p + 100) {
        scanf("%d", px);
        if (*px == -1) {
            return cnt;
        }
        cnt++;
        px++;
    }
    return cnt;
}

int* sel_next(int* p) {
    int* px = p + 1, max = *p;

    if (*px > max) {
        while (*px != -1 && *px > max) {
            max = *px;
            px++;
        }
    }
    else if (*px < max) {
        while (*px != -1 && *px < max) {
            max = *px;
            px++;
        }
    }

    return px;
}


int number(int* p, int* q) {
    int* k = p;
    int ans = 0;

    while (k < q) {
        ans *= 10;
        ans += *k;
        k++;
    }

    return ans;
}
