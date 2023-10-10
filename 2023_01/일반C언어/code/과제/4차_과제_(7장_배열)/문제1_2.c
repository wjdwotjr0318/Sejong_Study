#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int m1, m2, x[100], y[100], n, t = 0;

    // 입력 받기
    scanf("%d %d", &m1, &m2);

    // 입력 값 처리
    while (1) {
        int i = 0, re = 0, orn = 0, orn2 = 0, orn3 = 0;

        // 숫자 입력 받기
        scanf("%d", &n);
        orn3 = n;

        // 입력 값이 0 이하인 경우 반복문 종료
        if (n <= 0) {
            break;
        }

        // 입력 값의 각 자릿수를 배열 y에 저장
        while (n > 0) {
            y[i] = n % 10;
            n /= 10;
            i++;
        }

        // m1, m2보다 긴 자릿수는 -1로 무시
        if (m1 < i) {
            y[m1] = -1; // 삭제 대신 -1로 무시
        }
        if (m2 < i) {
            y[m2] = -1; // 삭제 대신 -1로 무시
        }

        // y 배열에서 -1이 아닌 값으로 다시 orn 만들기
        for (int j = 0; j < i; j++) {
            if (y[j] >= 0) {
                orn = orn * 10 + y[j];
            }
        }

        orn2 = orn;

        // orn 뒤집기
        while (orn > 0) {
            re = re * 10 + orn % 10;
            orn /= 10;
        }

        // orn2와 re가 같은 경우 x 배열에 저장
        if (orn2 == re) {
            x[t] = orn3;
            t++;
        }
    }

    // 결과 출력
    if (t == 0) {
        printf("none");
    }
    else {
        // 버블 정렬을 사용하여 x 배열을 내림차순으로 정렬
        for (int j = 0; j < t - 1; j++) {
            for (int k = 0; k < t - j - 1; k++) {
                if (x[k] < x[k + 1]) {
                    int temp = x[k];
                    x[k] = x[k + 1];
                    x[k + 1] = temp;
                }
            }
        }

        // 정렬된 결과 출력
        for (int j = 0; j < t; j++) {
            printf("%d ", x[j]);
        }
    }

    return 0;
}
