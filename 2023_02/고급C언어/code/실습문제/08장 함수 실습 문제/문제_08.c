#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func2(int x, int a, int b, int c);

int main() {
	int x, a, b, c, d, e, f;
	scanf("%d", &x);
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &d, &e, &f);
	int sol1, sol2;
	sol1 = func2(x, a, b, c);
	sol2 = func2(sol1, d, e, f);
	printf("%d", sol2);
	return 0;
}

int func2(int x, int a, int b, int c) {
	return a * x * x + b * x + c;
}