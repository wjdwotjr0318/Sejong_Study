#include <stdio.h>

int main() { 
    int a[101], b[101], x = 0, y = 0; //�迭 a,b �׸��� �� ������ x,y

    while (1) { //break���ؼ� ������ ����
        scanf("%d", &a[x]);
        if (a[x] < 0) {
            break;
        }
        x++;
    }

    while (1) { //���� ���� �������
        scanf("%d", &b[y]);
        if (b[y] < 0) {
            break;
        }
        y++;
    }

    int s[202]; // �������� ������ �迭
    int sizes = 0; // �������� ũ��

    // �迭 a�� ���Ҹ� �����տ� �߰�
    for (int i = 0; i < x; i++) {
        int k = 0; // �ߺ� Ȯ�� ����

        // �ߺ��� �������� Ȯ��
        for (int j = 0; j < sizes; j++) {
            if (s[j] == a[i]) {
                k = 1;
                break;
            }
        }

        // �ߺ����� ���� ��쿡�� �����տ� �߰�
        if (k == 0) {
            s[sizes] = a[i];
            sizes++;
        }
    }

    // �迭 b�� ���Ҹ� �����տ� �߰�
    for (int i = 0; i < y; i++) {
        int k = 0; // �ߺ� Ȯ�� ����

        // �ߺ��� �������� Ȯ��
        for (int j = 0; j < sizes; j++) {
            if (s[j] == b[i]) {
                k = 1;
                break;
            }
        }

        // �ߺ����� ���� ��쿡�� �����տ� �߰�
        if (k == 0) {
            s[sizes] = b[i];
            sizes++;
        }
    }

    // �������� ���� ���ķ� �������� ����
    for (int i = 1; i < sizes; i++) {
        int k = s[i];
        int j = i - 1;

        while (j >= 0 && s[j] > k) {
            s[j + 1] = s[j];
            j--;
        }

        s[j + 1] = k;
    }

    // ������ ���
    for (int i = 0; i < sizes; i++) {
        printf(" %d", s[i]);
    }
    printf("\n");

    return 0;
}
