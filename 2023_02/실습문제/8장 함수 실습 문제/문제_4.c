#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_row1(int x) {
	for (int i = 0; i < x; i++) {
		printf("%d", x);
	}
	printf("\n");
}

void print_row2(int x) {
	for (int i = 0; i < x; i++) {
		if (i == 0 || i == x - 1) {
			printf("%d", x);
		}
		else {
			printf(" ");
		}
	}
	printf("\n");
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			print_row1(n);
		}
		else {
			print_row2(n);
		}
	}
	return 0;
}