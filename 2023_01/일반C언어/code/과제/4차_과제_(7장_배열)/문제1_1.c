#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x[100], n, i = 0;

    do {
        scanf("%d", &n);
        if (n <= 0) {
            break;
        }
        int m = 0;
        int originalN = n;
        while (n > 0) {
            m = m * 10 + n % 10;
            n /= 10;
        }
        if (originalN == m) {
            x[i] = originalN;
            i++;
        }
    } while (1);


    // 정렬: 버블 정렬 알고리즘
    for (int j = 0; j < i - 1; j++) {
        for (int k = 0; k < i - j - 1; k++) {
            if (x[k] < x[k + 1]) {
                int temp = x[k];
                x[k] = x[k + 1];
                x[k + 1] = temp;
            }
        }
    }

    // 출력
    for (int j = 0; j < i; j++) {
        printf("%d ", x[j]);
    }

    return 0;
}
