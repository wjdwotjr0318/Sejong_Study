#include <stdio.h>

int main() { 
    int a[101], b[101], x = 0, y = 0; //배열 a,b 그리고 들어갈 변수들 x,y

    while (1) { //break통해서 음수시 종료
        scanf("%d", &a[x]);
        if (a[x] < 0) {
            break;
        }
        x++;
    }

    while (1) { //위와 같은 방법으로
        scanf("%d", &b[y]);
        if (b[y] < 0) {
            break;
        }
        y++;
    }

    int s[202]; // 합집합을 저장할 배열
    int sizes = 0; // 합집합의 크기

    // 배열 a의 원소를 합집합에 추가
    for (int i = 0; i < x; i++) {
        int k = 0; // 중복 확인 변수

        // 중복된 원소인지 확인
        for (int j = 0; j < sizes; j++) {
            if (s[j] == a[i]) {
                k = 1;
                break;
            }
        }

        // 중복되지 않은 경우에만 합집합에 추가
        if (k == 0) {
            s[sizes] = a[i];
            sizes++;
        }
    }

    // 배열 b의 원소를 합집합에 추가
    for (int i = 0; i < y; i++) {
        int k = 0; // 중복 확인 변수

        // 중복된 원소인지 확인
        for (int j = 0; j < sizes; j++) {
            if (s[j] == b[i]) {
                k = 1;
                break;
            }
        }

        // 중복되지 않은 경우에만 합집합에 추가
        if (k == 0) {
            s[sizes] = b[i];
            sizes++;
        }
    }

    // 합집합을 삽입 정렬로 오름차순 정렬
    for (int i = 1; i < sizes; i++) {
        int k = s[i];
        int j = i - 1;

        while (j >= 0 && s[j] > k) {
            s[j + 1] = s[j];
            j--;
        }

        s[j + 1] = k;
    }

    // 합집합 출력
    for (int i = 0; i < sizes; i++) {
        printf(" %d", s[i]);
    }
    printf("\n");

    return 0;
}
