#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *prefixAverage1(int A[], int n){
    int *X = (int *)malloc(sizeof(int)*n); // 평균값을 저장할 배열
    int sum; // 합을 저장할 변수
    for(int i =0; i<n; i++){
        sum = 0; // sum 초기화 n^2의 시간복잡도
        for(int j =0; j<=i; j++){
            sum += A[j]; // A[0]~A[i]까지의 합을 구함
        }
        X[i] = (int)((double)sum/(i+1) + 0.5); // 반올림 처리
    }
    return X;
}
int *prefixAverage2(int A[], int n){
    int *X = (int *)malloc(sizeof(int)*n); // 평균값을 저장할 배열
    int sum = 0; // 합을 저장할 변수
    for(int i =0; i<n; i++){ // n의 시간복잡도
        sum += A[i]; // A[0]~A[i]까지의 합을 구함
        X[i] = (int)((double)sum/(i+1) + 0.5); // 반올림 처리
    }
    return X;
}
int main(){
    int n;
    scanf("%d", &n);
    int *A = (int *)malloc(sizeof(int)*n); // 입력받을 배열
    for(int i =0; i<n; i++){
        scanf("%d", &A[i]);
    }
    int *X = prefixAverage1(A,n); // 시간복잡도 n^2
    for(int i =0; i<n; i++){
        printf("%d ", X[i]);
    }
    printf("\n");
    X = prefixAverage2(A,n); // 시간복잡도 n
    for(int i =0; i<n; i++){
        printf("%d ", X[i]);
    }
}
