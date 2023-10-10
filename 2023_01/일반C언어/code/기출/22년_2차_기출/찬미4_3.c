#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char ch, x[100], y[100], tmp;
    int m, max = 0, check;
    int cnt = 0, cnty = 0, cnt3 = 0;

    while (1) {
        scanf("%c", &ch);
        if (ch == '!') {
            break;
        }
        else {
            x[cnt] = ch;
            cnt++;
        }
    }
    scanf("%d", &m);

    for (int i = 0; i < cnt; i++) {
        int k = 0;
        for (int j = 0; j <= i; j++) {
            if (x[i] == x[j]) {
                k++;
            }
        }
        if (k == 1) {
            y[cnty] = x[i];
            cnty++;
        }
        k = 0;
    }
    for (int i = 0; i < cnty; i++)
        printf("%c", y[i]);
    printf("\n");

    for (int i = 0; i < cnty; i++) {
        tmp = y[i] + m;
        if (y[i] >= 'a' && y[i] <= 'z') {
            if (tmp >= 'a' && tmp <= 'z')
                y[i] = 'A' + (tmp - 'a');
            else if (y[i] + m > 'z') {
                y[i] = 'A' + (tmp - 'a') % 26;
            }
        }
        else if (y[i] >= 'A' && y[i] <= 'Z') {
            if (y[i] + m >= 'A' && y[i] + m <= 'Z')
                y[i] = 'a' + (tmp - 'A');
            else if (y[i] + m > 'Z') {
                y[i] = 'a' + (tmp - 'A') % 26;
            }
        }
    }
    for (int i = 0; i < cnty; i++) {
        printf("%c", y[i]);
    }
    printf("\n");

    for (int i = 0; i < cnty - 1; i++) {
        if (y[i] >= 'a' && y[i] <= 'z') {
            if (y[i + 1] >= 'A' && y[i + 1] <= 'Z') {
                cnt3++;
                if (max < cnt3) {
                    max = cnt3;
                    check = i;
                }
            }
            else cnt3 = 0;
        }
        else if (y[i] >= 'A' && y[i] <= 'Z') {
            if (y[i + 1] >= 'a' && y[i + 1] <= 'z') {
                cnt3++;
                if (max < cnt3) {
                    max = cnt3;
                    check = i;
                }
            }
            else cnt3 = 0;
        }
    }

    if (max == 0) {
        printf("none");
    }
    else {
        for (int i = (check + 1 - max); i <= check + 1; i++) {
            printf("%c", y[i]);
        }
    }

    return 0;
}
