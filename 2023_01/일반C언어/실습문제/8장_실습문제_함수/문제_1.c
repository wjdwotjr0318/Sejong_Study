#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int main() {
	int n, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++) {
		sum = add(sum, i);
	}

	printf("%d", sum);

	return 0;
}