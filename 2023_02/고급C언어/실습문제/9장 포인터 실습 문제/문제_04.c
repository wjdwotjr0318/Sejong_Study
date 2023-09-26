#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[3];
	int* p;
	for (p = x; p < x + 3; p++) {
		scanf("%d", p);
	}
	p = x;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2 - i; j++) {
			if (*(p + j) > *(p + j + 1)) {
				int tmp;
				tmp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = tmp;
			}
		}
	}
	printf("%d", *(p + 1));
	return 0;
}