#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[20];
    int f, r, m;

    // �迭 ���ٰ� �־��� ���ǰ� �׳� ����ֱ�
    for (int i = 0; i < 20; i++) {
        a[i] = i + 1;
    }

    // frm���� �Է� �ޱ�
    scanf("%d %d %d", &f, &r, &m);

    // �־��� ���� ��� ��� �̵�
    for (int i = r; i > r - m + 1; i--) {
        int k = a[i];
        a[i] = a[i - 1];
        a[i - 1] = k;
    }

    // �ٲ� �迭�� ���
    for (int i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
