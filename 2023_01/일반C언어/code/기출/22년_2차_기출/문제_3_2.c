#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int test1[20], test2[20];
    float average[20];
    int rank[20];
    char grade[20];

    scanf("%d", &n);

    // 입력 받은 1차 인증점수와 2차 인증점수 저장
    for (int i = 0; i < n; i++) {
        scanf("%d", &test1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &test2[i]);
    }

    // 평균 점수 계산
    for (int i = 0; i < n; i++) {
        average[i] = test1[i] * 0.4 + test2[i] * 0.6;
    }

    // 평균 점수를 기준으로 정렬하여 등수 부여
    for (int i = 0; i < n; i++) {
        rank[i] = 1;
        for (int j = 0; j < n; j++) {
            if (average[j] > average[i]) {
                rank[i]++;
            }
        }
    }

    // 등급 부여
    int top30 = n * 0.3;
    int top70 = n * 0.7;
    int aCount = 0, bCount = 0;

    for (int i = 0; i < n; i++) {
        if (rank[i] <= top30) {
            grade[i] = 'A';
            aCount++;
        }
        else if (rank[i] <= top70 || (rank[i] <= n && test2[i] >= 60)) {
            grade[i] = 'B';
            bCount++;
        }
        else {
            grade[i] = 'F';
        }
    }

    // 평균 점수를 기준으로 학생 정보 정렬 (버블 정렬 사용)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (average[j] < average[j + 1]) {
                // 1차 인증점수, 2차 인증점수, 평균 점수, 등수, 학점 교환
                int temp1 = test1[j];
                test1[j] = test1[j + 1];
                test1[j + 1] = temp1;

                int temp2 = test2[j];
                test2[j] = test2[j + 1];
                test2[j + 1] = temp2;

                float tempAvg = average[j];
                average[j] = average[j + 1];
                average[j + 1] = tempAvg;

                int tempRank = rank[j];
                rank[j] = rank[j + 1];
                rank[j + 1] = tempRank;

                char tempGrade = grade[j];
                grade[j] = grade[j + 1];
                grade[j + 1] = tempGrade;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d %d %.1f %d %c\n", test1[i], test2[i], average[i], rank[i], grade[i]);
    }


    return 0;
}