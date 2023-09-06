#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,m;
	int x[20];
	scanf("%d", &n);
	int z = n / 3;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		printf(" %d", x[i]);
	}
	printf("\n");

	for (int i = 0; i < z; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %d", x[3 * i + j]);
		}
		printf("\n");
	}
	if (n % 3 == 1) {
		printf(" %d", x[n-1]);
	}
	else if (n % 3 == 2) {
		printf(" %d %d", x[n - 2], x[n-1]);
	}
	return 0;
}