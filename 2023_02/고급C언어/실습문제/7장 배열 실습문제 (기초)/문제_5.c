#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
	}
	int max = x[0];
	for (int i = 1; i < 10; i++) {
		if (max < x[i]) {
			max = x[i];
		}
	}
	printf("%d", max);
	return 0;
}