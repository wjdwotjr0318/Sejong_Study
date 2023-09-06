#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m; //입력할 nm선언
	int cnt = 0; // 약수의 갯수를 담을 변수
	int bigm = 0; // 최대약수의 갯수를 판별할때 쓸 변수
	int bigbigm = 0; // 최대약수를 갖는 정수를 담을 변수
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &m); // 정수m (n번 입력할것)
		printf("%d:", m);
		int cnt = 0; // 여기서 한번더cnt를0으로해줘야 cnt값이 누적되지 않음
		for (int j = 1; j <= m; j++) {
			if (m % j == 0) {//약수 구하는 방법
				cnt += 1; //약수갯수 더해주기
				printf(" %d", j); //약수 하나씩 표현하기
			}
		}
		printf(" %d\n", cnt); //약수갯수 표현하고 줄바꿈
		if (cnt > bigm) { //카운트가 이전카운트보다 크면
			bigm = cnt; // bigm에 새로운 cnt를 넣고
			bigbigm = m; //그 cnt에 해당하는 m값을 빅빅엠에 넣기
		}
	}
	printf("%d", bigbigm); //출력
	return 0;
}
