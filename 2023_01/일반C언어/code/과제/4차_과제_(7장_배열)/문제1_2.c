#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int m1, m2, x[100], y[100], n, t = 0;

    // �Է� �ޱ�
    scanf("%d %d", &m1, &m2);

    // �Է� �� ó��
    while (1) {
        int i = 0, re = 0, orn = 0, orn2 = 0, orn3 = 0;

        // ���� �Է� �ޱ�
        scanf("%d", &n);
        orn3 = n;

        // �Է� ���� 0 ������ ��� �ݺ��� ����
        if (n <= 0) {
            break;
        }

        // �Է� ���� �� �ڸ����� �迭 y�� ����
        while (n > 0) {
            y[i] = n % 10;
            n /= 10;
            i++;
        }

        // m1, m2���� �� �ڸ����� -1�� ����
        if (m1 < i) {
            y[m1] = -1; // ���� ��� -1�� ����
        }
        if (m2 < i) {
            y[m2] = -1; // ���� ��� -1�� ����
        }

        // y �迭���� -1�� �ƴ� ������ �ٽ� orn �����
        for (int j = 0; j < i; j++) {
            if (y[j] >= 0) {
                orn = orn * 10 + y[j];
            }
        }

        orn2 = orn;

        // orn ������
        while (orn > 0) {
            re = re * 10 + orn % 10;
            orn /= 10;
        }

        // orn2�� re�� ���� ��� x �迭�� ����
        if (orn2 == re) {
            x[t] = orn3;
            t++;
        }
    }

    // ��� ���
    if (t == 0) {
        printf("none");
    }
    else {
        // ���� ������ ����Ͽ� x �迭�� ������������ ����
        for (int j = 0; j < t - 1; j++) {
            for (int k = 0; k < t - j - 1; k++) {
                if (x[k] < x[k + 1]) {
                    int temp = x[k];
                    x[k] = x[k + 1];
                    x[k + 1] = temp;
                }
            }
        }

        // ���ĵ� ��� ���
        for (int j = 0; j < t; j++) {
            printf("%d ", x[j]);
        }
    }

    return 0;
}
