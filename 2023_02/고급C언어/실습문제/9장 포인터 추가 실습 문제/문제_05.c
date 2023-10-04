#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input(int* p);
int* sel_next(int* p);
int number(int* p, int* q);

int main() {
    int x[100];
    int* px = x;
    int N = input(px);

    while (*px != -1) {
        printf("%d*\n", number(px, sel_next(px)));
        px = sel_next(px);
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
    int* px = p;
    int sum = 0;

    while (px < p + 100 && *px != -1) {
        sum += *px;
        if (sum > 10) {
            break;
        }
        px++;
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