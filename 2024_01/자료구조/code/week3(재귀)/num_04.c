#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����Լ��� �迭�� �ִ��� ã�� �Լ�
int findMax(int arr[], int n) {
    // �⺻ ���: �迭�� �ϳ��� ��Ҹ� ���� ��
    if (n == 1) {
        return arr[0];
    }

    // ��������� �迭�� ������ �κ��� �ִ��� ã��
    int max = findMax(arr, n - 1);

    // ���� ��ҿ� ������ �κ��� �ִ� �� �� ū ���� ��ȯ
    if (arr[n - 1] > max) {
        return arr[n - 1];
    }
    else {
        return max;
    }
}

int main() {
    int n, i;
    int arr[20]; // �ִ� 20���� ������ ������ �迭

    // ����ڷκ��� n���� �Է� ����
    scanf("%d", &n);

    // n���� ������ �Է� ����
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ����Լ��� ����Ͽ� �ִ��� ã�� ���
    printf("%d", findMax(arr, n));

    return 0;
}

