#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, m;
    int x[20];
    int mmax[20] = { -1 }, mmin[20] = { 10 };

    // �迭 ũ�� �Է� �ޱ�
    scanf("%d", &n);

    // �迭 ��� �Է� �ޱ�
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // �迭 ���� ���
    for (int i = n - 1; i >= 0; i--) {
        printf(" %d", x[i]);
    }
    printf("\n");

    int z = n / 3;

    // �ִ񰪰� �ּڰ� ���
    for (int i = 0; i < z; i++) {
        int max = -99999, min = 999;
        for (int j = 0; j < 3; j++) {
            int l = 3 * i + j;
            if (x[l] > max) {
                max = x[l];
            }
            if (x[l] < min) {
                min = x[l];
            }
            mmax[i] = max;
            mmin[i] = min;
        }
    }

    // ���� ��� ó��
    if (n % 3 == 2) {
        if (x[n - 2] > x[n - 1]) {
            mmax[z] = x[n - 2];
            mmin[z] = x[n - 1];
        }
        else if (x[n - 2] < x[n - 1]) {
            mmax[z] = x[n - 1];
            mmin[z] = x[n - 2];
        }
    }
    else if (n % 3 == 1) {
        mmax[z] = x[n - 1];
        mmin[z] = x[n - 1];
    }

    // ���
    if (n == 1) {
        printf(" %d\n %d", x[0], x[0]);
    }
    else if (n % 3 != 0) {
        for (int i = 0; i <= z; i++) {
            printf(" %d", mmax[i]);
        }
        printf("\n");
        for (int i = 0; i <= z; i++) {
            printf(" %d", mmin[i]);
        }
        printf("\n");
    }
    else if (n % 3 == 0) {
        for (int i = 0; i < z; i++) {
            printf(" %d", mmax[i]);
        }
        printf("\n");
        for (int i = 0; i < z; i++) {
            printf(" %d", mmin[i]);
        }
        printf("\n");
    }

    return 0;
}
