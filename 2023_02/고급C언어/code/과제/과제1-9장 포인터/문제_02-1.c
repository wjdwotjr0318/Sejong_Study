#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int arr[21];
    int* parr;
    int cnt = 0;
    int cnt1 = 0;
    int* p_a;

    scanf("%d", &n);

    for (parr = arr; parr < arr + n; parr++)
        scanf("%d", parr);

    if (n < 5)
        printf("-1");
    else {
        for (parr = arr; parr < arr + n; parr++) {
            for (p_a = arr; p_a < arr + n; p_a++) {
                if (*parr == *p_a) {
                    if (p_a < parr) {
                        break;
                    }
                    cnt++;
                }
            }
            if (cnt == 1) {
                cnt1++;
            }
            if (cnt > 1) {
                printf("%d %d\n", *parr, cnt);
            }
            cnt = 0;
        }
        if (cnt1 == n)
            printf("0");
    }
    return 0;
}
