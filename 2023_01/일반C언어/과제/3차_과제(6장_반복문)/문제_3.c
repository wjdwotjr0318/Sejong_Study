#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m; // n~m 사이 
	int big = 0; // 갯수최대
	int bigbig = 0; // 약수갯수최대인수담을 변수

	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++) { //i가 n부터 m까지 1씩올라가기
		int cnt = 0; // 카운트 초기화
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) { //약수구하는공식
				cnt += 1; //약수면 1 더하기
			}
		}
		if (cnt > big) { //만약 최고 약수 갱신되면
			big = cnt; // 최고 약수 갯수를 big에 담고
			bigbig = i; // 최고 약수갖는 정수를 bigbig에담는다.
		}
	}
	printf("%d %d", bigbig, big); // 순서대로 출력
}