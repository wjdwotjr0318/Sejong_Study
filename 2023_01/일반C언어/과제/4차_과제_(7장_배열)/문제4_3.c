#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n = 0, x[20], mmax[20], mmin[20]; // �Է¹޴� �迭, �ִ񰪹迭,�ּڰ��迭
    int max, min, k = 0; //�񱳸����� �ִ� �ּ� k��������

    // �迭 ũ�� �� ��� �Է� �ޱ�
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        mmax[i] = x[i]; //�ִ��� �ϴ� �ʱⰪ���� ������ ���ؽ���
        mmin[i] = x[i]; //�ּڰ����� ���� ���� ���
    }

    // �Էµ� ��ҵ��� �������� ���
    for (int i = n - 1; i >= 0; i--) {
        printf(" %d", x[i]);
    }
    printf("\n");

    do { //do while���� ���� �ʱ� �ѹ��� ������ ����
        // �ִ񰪰� �ּڰ� ����
        for (int i = 0; i < n; i += 3) {
            max = mmax[i]; //�ִ� �ޱ�
            min = mmin[i]; //�ּڰ� �ޱ�
            for (int j = i; j < i + 3 && j < n; j += 1) {
                //if������ �ִ� �ּ� ����
                if (mmax[j] > max) {
                    max = mmax[j];
                }
                if (mmin[j] < min) {
                    min = mmin[j];
                }
            }
            mmax[k] = max;
            mmin[k] = min;
            k += 1;
        }

        // �ִ� ���
        for (int i = 0; i < k; i += 1) {
            printf(" %d", mmax[i]);
        }
        printf("\n");

        // �ּڰ� ���
        for (int i = 0; i < k; i += 1) {
            printf(" %d", mmin[i]);
        }
        printf("\n");
        // �迭 ũ�� ����
        n = k;
        k = 0;
    } while (n > 1);

    return 0;
}
