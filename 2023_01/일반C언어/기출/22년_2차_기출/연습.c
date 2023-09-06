#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a, x[100], y[100], z[100], t[100];
    int cnt1 = 0, cnt2 = 0, cnt = 0, ppp = 0;
    int count[100];

    while (cnt < 3) {
        scanf("%c", &a);
        if (a == '*') {
            cnt++;
        }
        if (cnt == 0) {
            x[cnt1] = a;
            t[cnt1] = a;
            cnt1++;
        }
        else if (cnt == 1 && a != '*') {
            y[cnt2] = a;
            cnt2++;
        }
        if (cnt == 2) {
            break;
        }
    }

    // 개행 문자('\n') 제거
    getchar();

    if (cnt1 == cnt2) {
        for (int i = 0; i < cnt2 - 1; i++) {
            for (int j = 0; j < cnt2 - i - 1; j++) {
                if (x[j] > x[j + 1]) {
                    char tempt;
                    tempt = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = tempt;
                }
            }
        }
        for (int i = 0; i < cnt2 - 1; i++) {
            for (int j = 0; j < cnt2 - i - 1; j++) {
                if (y[j] > y[j + 1]) {
                    char tempt;
                    tempt = y[j];
                    y[j] = y[j + 1];
                    y[j + 1] = tempt;
                }
            }
        }
        int k = 1;
        for (int i = 0; i < cnt2; i++) {
            if (x[i] != y[i]) {
                k = 0;
                printf("0");
                break;
            }
        }
        if (k == 1) {
            for (int i = 0; i < cnt2; i++) {
                int kkk = 0;
                for (int j = 0; j <= i; j++) {
                    if (x[i] == x[j]) {
                        kkk++;
                    }
                }
                if (kkk == 1) {
                    z[ppp] = x[i];
                    ppp++;
                }
            }
            for (int i = 0; i < ppp; i++) {
                int koko = 0;
                for (int j = 0; j < cnt2; j++) {
                    if (z[i] == t[j]) {
                        koko++;
                    }
                }
                count[i] = koko;
            }
            printf("1\n");
            for (int i = 0; i < ppp; i++) {
                printf("%c %d\n", z[i], count[i]);
            }
        }
        else {
            printf("0");
        }
    }
    else {
        printf("0");
    }

    return 0;
}
