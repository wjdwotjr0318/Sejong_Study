#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_triangle(int x) {

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

}

int main() {
	int n;

	while (1) {
		scanf("%d", &n);
		if (n < 1) {
			break;
		}
		print_triangle(n);
	}

	return 0;
}