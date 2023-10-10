#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func1(int x) {

	return 2 * (x * x) - 5 * x + 1;
}

int main() {

	int n, ans;
	scanf("%d", &n);

	ans = func1(n);

	printf("%d", ans);

	return 0;
}