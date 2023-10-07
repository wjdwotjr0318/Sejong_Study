#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
	int ans = (n * (n + 1)) / 2;
	return ans;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", sum(b) - sum(a - 1));
	return 0;
}