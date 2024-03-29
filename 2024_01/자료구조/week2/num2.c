#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mostOnes(int A[100][100], int n) {
    int i = 0, j = 0;
    int ansrow = -1; // 초기값은 -1로 설정하여 아직 찾지 못했음을 나타냅니다.

    while (i < n && j < n) {
        if (A[i][j] == 1) {
            ansrow = i; // 현재 행을 가장 많은 1을 가진 행으로 기록합니다.
            j++; // 오른쪽으로 이동합니다.
        } else {
            i++; // 아래로 이동합니다.
        }
    }

    return ansrow;
}


int main(){
    int n;
    scanf("%d", &n);
    int A[100][100];
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("%d",mostOnes(A,n));
    return 0;
}