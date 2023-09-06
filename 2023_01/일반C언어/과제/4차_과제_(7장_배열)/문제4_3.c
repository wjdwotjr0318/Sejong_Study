#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n = 0, x[20], mmax[20], mmin[20]; // 입력받는 배열, 최댓값배열,최솟값배열
    int max, min, k = 0; //비교를위한 최대 최소 k변수선언

    // 배열 크기 및 요소 입력 받기
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        mmax[i] = x[i]; //최댓값을 일단 초기값으로 선언을 통해실행
        mmin[i] = x[i]; //최솟값또한 위와 같은 방식
    }

    // 입력된 요소들을 역순으로 출력
    for (int i = n - 1; i >= 0; i--) {
        printf(" %d", x[i]);
    }
    printf("\n");

    do { //do while문을 통해 초기 한번은 무조건 실행
        // 최댓값과 최솟값 갱신
        for (int i = 0; i < n; i += 3) {
            max = mmax[i]; //최댓값 받기
            min = mmin[i]; //최솟값 받기
            for (int j = i; j < i + 3 && j < n; j += 1) {
                //if문으로 최대 최소 구분
                if (mmax[j] > max) {
                    max = mmax[j];
                }
                if (mmin[j] < min) {
                    min = mmin[j];
                }
            }
            mmax[k] = max;
            mmin[k] = min;
            k += 1;
        }

        // 최댓값 출력
        for (int i = 0; i < k; i += 1) {
            printf(" %d", mmax[i]);
        }
        printf("\n");

        // 최솟값 출력
        for (int i = 0; i < k; i += 1) {
            printf(" %d", mmin[i]);
        }
        printf("\n");
        // 배열 크기 갱신
        n = k;
        k = 0;
    } while (n > 1);

    return 0;
}
