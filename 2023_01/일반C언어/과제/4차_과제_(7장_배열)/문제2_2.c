#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char x[100], y[100], z[100]; // ���� �迭 3�� ����
    int cnt = 0, yn = 0, m; // ���� ����
    int start = -1; // start �� ���� �����Ұ�

    // �Է� �ޱ�
    for (int i = 0; i < 100; i++) {
        scanf("%c", &x[i]);

        // '!' ���ڸ� �Է¹����� �ݺ��� ����
        if (x[i] == '!') {
            break;
        }

        cnt++; // �Էµ� ���� ���� ����
    }
    getchar(); // ���� ���� ����

    // �ߺ����� ���� ���� ����
    for (int i = 0; i < cnt; i++) {
        int k = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (x[i] == x[j]) {
                k++;
                break;
            }
        }
        if (k == 0) {
            y[yn] = x[i];
            yn++;
        }
    }

    // �ߺ����� ���� ���� ���
    for (int i = 0; i < yn; i++) {
        printf("%c", y[i]);
    }
    printf("\n");

    // ���ڿ� z �Է� �ޱ�
    scanf("%d", &m);
    getchar();
    for (int i = 0; i < m; i++) {
        scanf("%c", &z[i]);
    }
    getchar();

    // ���ڿ� z�� �ߺ����� ���� ���ڿ� y�� �κ� ���ڿ����� Ȯ��
    for (int i = 0; i <= yn - m; i++) {
        int k = 1; //k�� ���ؼ� ��¿��� Ȯ��
        for (int j = 0; j < m; j++) {
            if (z[j] != y[i + j]) {
                k = 0;
                break;
            }
        }
        if (k) {
            start = i;
            break;
        }
    }

    // ��� ���
    if (start == -1) {
        printf("none");
    }
    else if (start != -1) {
        printf("%d", start);
    }

    return 0;
}
