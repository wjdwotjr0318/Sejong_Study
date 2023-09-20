#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, y = 0, cnt = 0;
	scanf("%d", &n);
	y = n;

	while (n > 0) {
		cnt++;
		n /= 10;
	}

	int x[10];
	for (int i = 0; i < cnt; i++) {
		x[i] = y % 10;
		y /= 10;
	}
	for (int i = 0; i < cnt; i++) {
		printf(" %d", x[i]);
	}
	return 0;
}