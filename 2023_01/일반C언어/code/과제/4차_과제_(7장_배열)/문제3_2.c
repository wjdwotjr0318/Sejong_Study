#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[20];
    int f, r, m;

    // 배열 에다가 주어진 조건값 그냥 집어넣기
    for (int i = 0; i < 20; i++) {
        a[i] = i + 1;
    }

    // frm순서 입력 받기
    scanf("%d %d %d", &f, &r, &m);

    // 주어진 조건 대로 요소 이동
    for (int i = r; i > r - m + 1; i--) {
        int k = a[i];
        a[i] = a[i - 1];
        a[i - 1] = k;
    }

    // 바뀐 배열을 출력
    for (int i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
