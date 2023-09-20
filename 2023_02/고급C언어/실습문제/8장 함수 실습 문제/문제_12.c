#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_line(int x, int y, int z);

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		print_line(n - i, 2 * i - 1, n - i);
	}
}

void print_line(int x, int y, int z) {
	for (int i = 0; i < x; i++) {
		printf(" ");
	}
	for (int i = 0; i < y; i++) {
		printf("*");
	}
	for (int i = 0; i < z; i++) {
		printf(" ");
	}
	printf("\n");
}