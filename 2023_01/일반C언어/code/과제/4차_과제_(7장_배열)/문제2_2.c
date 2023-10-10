#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char x[100], y[100], z[100]; // 문자 배열 3개 선언
    int cnt = 0, yn = 0, m; // 변수 선언
    int start = -1; // start 를 통해 구분할것

    // 입력 받기
    for (int i = 0; i < 100; i++) {
        scanf("%c", &x[i]);

        // '!' 문자를 입력받으면 반복문 종료
        if (x[i] == '!') {
            break;
        }

        cnt++; // 입력된 문자 개수 증가
    }
    getchar(); // 개행 문자 제거

    // 중복되지 않은 문자 추출
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

    // 중복되지 않은 문자 출력
    for (int i = 0; i < yn; i++) {
        printf("%c", y[i]);
    }
    printf("\n");

    // 문자열 z 입력 받기
    scanf("%d", &m);
    getchar();
    for (int i = 0; i < m; i++) {
        scanf("%c", &z[i]);
    }
    getchar();

    // 문자열 z가 중복되지 않은 문자열 y의 부분 문자열인지 확인
    for (int i = 0; i <= yn - m; i++) {
        int k = 1; //k를 통해서 출력여부 확인
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

    // 결과 출력
    if (start == -1) {
        printf("none");
    }
    else if (start != -1) {
        printf("%d", start);
    }

    return 0;
}
