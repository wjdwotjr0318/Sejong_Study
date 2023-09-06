#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
		if (x[i] % 2 == 0) {
			printf(" %d\n", x[i]);
		}
	}
	return 0;
}