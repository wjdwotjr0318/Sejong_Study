#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func2(int x, int a, int b, int c);

int main() {
	int k, a, b, c, ans;
	scanf("%d", &k);
	getchar();
	scanf("%d %d %d", &a, &b, &c);
	ans = func2(k, a, b, c);
	printf("%d", ans);
	return 0;
}

int func2(int x, int a, int b, int c) {
	return a * x * x + b * x + c;
}