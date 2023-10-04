#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input(int* p);
int* sel_next(int* p, int N, int M);
int number(int* p, int* q);

int main() {
    int x[100], M;
    int* px;
    px = x;
    int N = input(px);
    scanf("%d", &M);
    int ans = number(px + M, sel_next(px, N, M));
    printf("%d", ans);
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
    int* px, * max_ans;
    int max = *(p + M);
    for (px = p + M + 1; px < p + N; px++) {
        if (max < *px) {
            max = *px;
        }
        else {
            max_ans = px;
            break;
        }
    }
    return max_ans;
}

int number(int* p, int* q) {
    int* k;
    int ans = 0; // ans를 0으로 초기화
    for (k = p; k < q; k++) {
        ans *= 10;
        ans += *k;
    }
    return ans;
}
