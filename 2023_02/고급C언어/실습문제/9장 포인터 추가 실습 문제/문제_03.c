#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input(int* p);
int* sel_next(int* p, int N, int M);
int number(int* p, int* q);

int main() {
    int x[100], * px = x, N = input(px), M;
    scanf("%d", &M);
    printf("%d", number(px + M, sel_next(px, N, M)));
    return 0;
}

int input(int* p) {
    int cnt = 0;
    int* px;
    for (px = p; px < p + 100; px++) {
        scanf("%d", px);
        if (*px == -1) {
            break;
        }
        else {
            cnt++;
        }
    }
    return cnt;
}

int* sel_next(int* p, int N, int M) {
    int sum = 0;
    for (int* px = p + M; px < p + N; px++) {
        sum += *px;
        if (sum > 10) {
            return px;
        }
    }
    return p + N;
}

int number(int* p, int* q) {
    int ans = 0;
    for (; p < q; p++) {
        ans *= 10;
        ans += *p;
    }
    return ans;
}
