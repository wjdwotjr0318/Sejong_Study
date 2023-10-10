#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, test1[20], test2[20];
    int grd = 0, grd1 = 1, tmp;
    int Grd, Agrd, Bgrd, Fgrd;
    double avg[20], dtmp;

    scanf("%d", &n);  // 학생 수 입력

    // 1차 시험 점수 입력
    for (int i = 0; i < n; i++) {
        scanf("%d", &test1[i]);
    }

    // 2차 시험 점수 입력
    for (int i = 0; i < n; i++) {
        scanf("%d", &test2[i]);
    }

    // 평균 계산
    for (int i = 0; i < n; i++) {
        avg[i] = (double)test1[i] * 0.4 + test2[i] * 0.6;
    }

    int n1 = n;
    // 평균을 기준으로 내림차순 정렬
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n1 - 1; j++) {
            if (avg[j] <= avg[j + 1]) {
                dtmp = avg[j];  // 평균
                avg[j] = avg[j + 1];
                avg[j + 1] = dtmp;  // 내림차순

                tmp = test1[j];  // 1차
                test1[j] = test1[j + 1];
                test1[j + 1] = tmp;  // 자리바꿈

                tmp = test2[j];
                test2[j] = test2[j + 1];
                test2[j + 1] = tmp;
            }
        }
        n1--;
    }

    Agrd = n * 0.3;  // A등급 인원수
    Bgrd = (n * 0.7) - Agrd;  // B등급 인원수
    Fgrd = n - Agrd - Bgrd;  // F등급 인원수

    // 등급과 학점 출력
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            if (avg[j] < avg[k]) {
                grd++;
            }
            else if (avg[j] == avg[k])
                grd1 = 1;
        }
        Grd = grd + grd1;
        printf("%d %d %.1lf %d", test1[j], test2[j], avg[j], Grd);  // 1차 점수, 2차 점수, 평균, 등급 출력
        grd = 0;

        if (Grd <= Agrd) {
            printf(" A\n");  // A등급 출력
        }
        else if (Grd > Agrd && Grd <= Agrd + Bgrd) {
            printf(" B\n");  // B등급 출력
        }
        else if (test2[j] >= 60) {
            printf(" B\n");  // B등급 출력 (2차 시험 점수가 60 이상인 경우)
        }
        else {
            printf(" F\n");  // F등급 출력
        }
    }

    return 0;
}
