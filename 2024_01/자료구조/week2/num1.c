#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int modulo(int a, int b){
    while(a >= b){
        a -= b; // 나누기연산의 나머지를 구하는 함수
    }
    return a; // 나머지 반환
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b); // a,b 입력
    printf("%d", modulo(a,b)); // a를 b로 나눈 나머지 출력
    return 0;
}