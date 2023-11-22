#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int* p = NULL;
	p = (int*)malloc(n * sizeof(int));
	if (p == NULL) {
		printf("error");
		return -1;
	}
	for (int* q = p; q < p + n; q++) {
		scanf("%d", q);
	}
	int tmp;
	for (int* q = p; q < p + n - 1; q++) {
		if (*q > *(q + 1)) {
			tmp = *q;
			*q = *(q + 1);
			*(q + 1) = tmp;
		}
	}
	for (int* q = p; q < p + n; q++) {
		printf("%d\n", *q);
	}
	free(p);
	return 0;
}