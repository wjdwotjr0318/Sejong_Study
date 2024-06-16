#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 재귀함수로 배열의 최댓값을 찾는 함수
int findMax(int arr[], int n) {
    // 기본 경우: 배열에 하나의 요소만 있을 때
    if (n == 1) {
        return arr[0];
    }

    // 재귀적으로 배열의 나머지 부분의 최댓값을 찾음
    int max = findMax(arr, n - 1);

    // 현재 요소와 나머지 부분의 최댓값 중 더 큰 값을 반환
    if (arr[n - 1] > max) {
        return arr[n - 1];
    }
    else {
        return max;
    }
}

int main() {
    int n, i;
    int arr[20]; // 최대 20개의 정수를 저장할 배열

    // 사용자로부터 n값을 입력 받음
    scanf("%d", &n);

    // n개의 정수를 입력 받음
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 재귀함수를 사용하여 최댓값을 찾고 출력
    printf("%d", findMax(arr, n));

    return 0;
}

