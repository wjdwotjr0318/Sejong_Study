#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, test1[20], test2[20];
    int grd = 0, grd1 = 1, tmp;
    int Grd, Agrd, Bgrd, Fgrd;
    double avg[20], dtmp;

    scanf("%d", &n);  // �л� �� �Է�

    // 1�� ���� ���� �Է�
    for (int i = 0; i < n; i++) {
        scanf("%d", &test1[i]);
    }

    // 2�� ���� ���� �Է�
    for (int i = 0; i < n; i++) {
        scanf("%d", &test2[i]);
    }

    // ��� ���
    for (int i = 0; i < n; i++) {
        avg[i] = (double)test1[i] * 0.4 + test2[i] * 0.6;
    }

    int n1 = n;
    // ����� �������� �������� ����
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n1 - 1; j++) {
            if (avg[j] <= avg[j + 1]) {
                dtmp = avg[j];  // ���
                avg[j] = avg[j + 1];
                avg[j + 1] = dtmp;  // ��������

                tmp = test1[j];  // 1��
                test1[j] = test1[j + 1];
                test1[j + 1] = tmp;  // �ڸ��ٲ�

                tmp = test2[j];
                test2[j] = test2[j + 1];
                test2[j + 1] = tmp;
            }
        }
        n1--;
    }

    Agrd = n * 0.3;  // A��� �ο���
    Bgrd = (n * 0.7) - Agrd;  // B��� �ο���
    Fgrd = n - Agrd - Bgrd;  // F��� �ο���

    // ��ް� ���� ���
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            if (avg[j] < avg[k]) {
                grd++;
            }
            else if (avg[j] == avg[k])
                grd1 = 1;
        }
        Grd = grd + grd1;
        printf("%d %d %.1lf %d", test1[j], test2[j], avg[j], Grd);  // 1�� ����, 2�� ����, ���, ��� ���
        grd = 0;

        if (Grd <= Agrd) {
            printf(" A\n");  // A��� ���
        }
        else if (Grd > Agrd && Grd <= Agrd + Bgrd) {
            printf(" B\n");  // B��� ���
        }
        else if (test2[j] >= 60) {
            printf(" B\n");  // B��� ��� (2�� ���� ������ 60 �̻��� ���)
        }
        else {
            printf(" F\n");  // F��� ���
        }
    }

    return 0;
}
