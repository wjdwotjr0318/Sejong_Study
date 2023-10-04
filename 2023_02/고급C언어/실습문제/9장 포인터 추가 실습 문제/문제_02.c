#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, x[100], cnt = 0, max = 0, odd_cnt = 0;
    int* px;
    scanf("%d", &N);
    for (px = x; px < x + N; px++) {
        scanf("%d", px);
        if (*px > 0) {
            cnt++;
        }
    }
    printf("%d\n", cnt);

    if (cnt % 2 == 0) {
        for (int i = 0; i < N; i++) {
            int tmp;
            for (int j = 0; j < N - 1 - i; j++) {
                if (*(x + j) < *(x + j + 1)) {
                    tmp = *(x + j);
                    *(x + j) = *(x + j + 1);
                    *(x + j + 1) = tmp;
                }
            }
        }
    }
    else {
        for (int i = 0; i < N; i++) {
            int tmp;
            for (int j = 0; j < N - 1 - i; j++) {
                if (*(x + j) > *(x + j + 1)) {
                    tmp = *(x + j);
                    *(x + j) = *(x + j + 1);
                    *(x + j + 1) = tmp;
                }
            }
        }
    }

    for (px = x; px < x + N; px++) {
        if (*px % 2 == 1) {
            odd_cnt++;
            if (max < odd_cnt) {
                max = odd_cnt;
            }
        }
        else {
            odd_cnt = 0;
        }
    }

    for (px = x; px < x + N; px++) {
        if (*px > 0) {
            printf("%d ", *px);
        }
    }

    printf("\n%d", max);
    return 0;
}
