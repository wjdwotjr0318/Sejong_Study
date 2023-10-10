#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x) {
	int ans = x * (x + 1) / 2;
	return ans;
}

int main() {
	int a, b, result;
	scanf("%d %d", &a, &b);
	result = sum(b) - sum(a-1);
	printf("%d", result);

	return 0;
}