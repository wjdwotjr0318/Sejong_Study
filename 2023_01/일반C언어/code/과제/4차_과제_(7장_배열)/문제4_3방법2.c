#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int x[20], y[20];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		y[n - i - 1] = x[i];
	}

	for(int i =0; i<n/3;)

	for (int i = 0; i < n; i++) {
		printf(" %d", y[i]);
	}

	return 0;
}