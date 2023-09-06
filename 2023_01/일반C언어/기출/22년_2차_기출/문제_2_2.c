#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, m, x[110];
    int avg[100], max[100], min[100];
    int u = 0, y = 0, z = 0;
    int t, p;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    t = n / m;
    p = n % m;

    for (int i = 0; i < t; i++) {
        int sum = 0;
        float aavg = 0;
        int mmax = 0, mmin = 999999;
        for (int j = i * m; j < (i + 1) * m; j++) {
            if (x[j] > mmax) {
                mmax = x[j];
            }
            if (x[j] < mmin) {
                mmin = x[j];
            }
            sum += x[j];
        }
        max[y] = mmax;
        min[z] = mmin;
        y += 1;
        z += 1;
        aavg = (float)sum / m;
        for (int j = i * m; j < (i + 1) * m; j++) {  // 수정된 부분
            if (x[j] >= aavg) {  // 수정된 부분
                avg[u] = x[j];
                u++;
            }
        }
    }

    // 남은 원소 처리
    if (p > 0) {
        int sum = 0;
        float aavg = 0;
        int mmax = 0, mmin = 999999;
        for (int i = t * m; i < n; i++) {
            if (x[i] > mmax) {
                mmax = x[i];
            }
            if (x[i] < mmin) {
                mmin = x[i];
            }
            sum += x[i];
        }
        max[y] = mmax;
        min[z] = mmin;
        y += 1;
        z += 1;
        aavg = (float)sum / p;
        for (int i = t * m; i < n; i++) {
            if (x[i] >= aavg) {
                avg[u] = x[i];
                u++;
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < u; i++) {
        printf(" %d ", avg[i]);
    }
    printf("\n");

    for (int i = 0; i < y; i++) {
        printf("%d ", max[i]);
    }
    printf("\n");

    for (int i = 0; i < z; i++) {
        printf("%d ", min[i]);
    }
    printf("\n");

    return 0;
}
