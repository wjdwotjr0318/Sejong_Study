#include <stdio.h>

int main() {
    int arr[5];
    int rank[5];
    int* parr, * prank, * pcheck;

    // �Է� �ޱ�
    for (parr = arr; parr < arr + 5; parr++) {
        scanf("%d", parr);
    }

    // ���� ���
    parr = arr;
    for (prank = rank; prank < rank + 5; prank++) {
        *prank = 1; // �ʱ� ���� 1�� ����
        for (pcheck = arr; pcheck < arr + 5; pcheck++) {
            if (*parr < *pcheck) {
                (*prank)++; // ū ���� �߰ߵ� ��� ���� 1 ����
            }
        }
        parr++; // ���⼭ parr ����
    }

    // ��� ���
    parr = arr;
    for (prank = rank; prank < rank + 5; prank++) {
        printf("%d=r%d ", *parr, *prank);
        parr++;
    }
    printf("\n");

    return 0;
}
