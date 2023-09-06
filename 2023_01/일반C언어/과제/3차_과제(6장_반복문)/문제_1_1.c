#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d", &n); //입력할 정수 갯수 n

	for (int i = 1; i <= n; i++) { //n번 출력해야함으로 for문을 n번 반복하게한다.
		scanf("%d", &m); //입력정수 m
		printf("%d:", m);
		for (int j = 1; j <= m; j++) { // 약수를 출력할것이다. 일단 약수는 1이상 m이하다.
			if (m % j == 0) { //약수의 조건 나눠서 0되는지 확인
				printf(" %d", j); //약수 출력하자.
			}
		}
		printf("\n"); //줄바꾸기
	}
	return 0;
}