#pragma warning(disable:4996)  // 컴파일러 경고 메시지 4996을 무시하는 지시자

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, n[100] = { 0 };  // N: 배열의 크기, M: 구간의 크기, n: 입력된 정수 배열
    double avg = 0.0;  // 구간의 평균값
    int sum = 0, max, min, cnt = 0;  // sum: 구간의 합, max: 칸당 최댓값, min: 칸당 최솟값, cnt: 구간 내 정수 개수

    scanf("%d %d", &N, &M);  // N과 M을 입력받음

    for (int i = 0; i < N; i++) {
        scanf("%d", &n[i]);  // N개의 정수를 입력받아 n 배열에 저장
    }

    // 각 구간에서 평균보다 큰 수 출력
    for (int i = 0; i < N; i += M) {  // M씩 증가하면서 구간을 나눔
        for (int j = i; j < i + M && j < N; j++) {  // 현재 구간 내의 정수들을 처리
            cnt++;  // 구간 내 정수 개수 증가
            sum = sum + n[j];  // 구간 내 정수들의 합 계산
        }
        avg = (double)sum / cnt;  // 구간의 평균값 계산

        for (int j = i; j < i + M && j < N; j++) {  // 다시 한 번 구간 내의 정수들을 순회
            if (n[j] >= avg)  // 평균보다 큰 수라면 출력
                printf(" %d", n[j]);
        }

        cnt = 0;  // 구간 내 정수 개수 초기화
        sum = 0;  // 구간의 합 초기화
    }
    printf("\n");

    // 칸당 최댓값 출력
    for (int i = 0; i < N; i += M) {  // M씩 증가하면서 구간을 나눔
        max = n[i];  // 현재 구간의 첫 번째 정수를 최댓값으로 초기화
        for (int j = i; j < i + M && j < N; j++) {  // 현재 구간 내의 정수들을 순회
            if (max <= n[j])  // 현재까지의 최댓값보다 큰 수라면 갱신
                max = n[j];
        }
        printf(" %d", max);  // 칸당 최댓값 출력
    }
    printf("\n");

    // 칸당 최솟값 출력
    for (int i = 0; i < N; i += M) {  // M씩 증가하면서 구간을 나눔

