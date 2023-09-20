#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_triangle(int x);

int main() {
	int a;
	while (1) {
		scanf("%d", &a);
		if (a < 1) {
			break;
		}
		else {
			print_triangle(a);
		}
	}
	return 0;
}

void print_triangle(int x) {
	for (int i = 1; i < x + 1; i++) {
		for (int j = 1; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}