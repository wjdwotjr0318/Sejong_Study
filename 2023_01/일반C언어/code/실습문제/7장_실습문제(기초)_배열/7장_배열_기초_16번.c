#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, x[10];
	int k;
	char y[10];
	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		scanf("%c", &y[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < n; i++) {
		k = 0;
		k = x[i] % n;
		printf("x[%d%%%d]=x[%d]=%c\n", x[i], n, k, y[k]);
	}
	return 0;
}
