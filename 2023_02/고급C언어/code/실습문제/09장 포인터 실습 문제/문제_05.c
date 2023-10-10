#include <stdio.h>

int main() {
    int arr[5];
    int rank[5];
    int* parr, * prank, * pcheck;

    // 입력 받기
    for (parr = arr; parr < arr + 5; parr++) {
        scanf("%d", parr);
    }

    // 순위 계산
    parr = arr;
    for (prank = rank; prank < rank + 5; prank++) {
        *prank = 1; // 초기 순위 1로 설정
        for (pcheck = arr; pcheck < arr + 5; pcheck++) {
            if (*parr < *pcheck) {
                (*prank)++; // 큰 값이 발견될 경우 순위 1 증가
            }
        }
        parr++; // 여기서 parr 증가
    }

    // 결과 출력
    parr = arr;
    for (prank = rank; prank < rank + 5; prank++) {
        printf("%d=r%d ", *parr, *prank);
        parr++;
    }
    printf("\n");

    return 0;
}
