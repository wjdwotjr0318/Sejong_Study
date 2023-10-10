#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func2(int x, int a, int b, int c) {

	int result = a * x * x + b * x + c;
	
	return result;
}

int main() {

	int n, A, B, C;
	int sol;
	scanf("%d", &n);
	getchar();
	scanf("%d %d %d", &A, &B, &C);
	sol = func2(n, A, B, C);

	printf("%d", sol);
	return 0;
}