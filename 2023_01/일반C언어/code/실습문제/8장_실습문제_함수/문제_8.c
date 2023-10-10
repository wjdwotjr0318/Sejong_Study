#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func2(int x, int a, int b, int c) {

	int result = a * x * x + b * x + c;

	return result;
}

int main() {

	int n;
	int A, B, C, d, e, f;
	int sol, sol2;
	scanf("%d", &n);
	getchar();
	scanf("%d %d %d", &A, &B, &C);
	getchar();
	scanf("%d %d %d", &d, &e, &f);

	sol = func2(n, A, B, C);
	sol2 = func2(sol, d, e, f);

	printf("%d", sol2);

	return 0;
}