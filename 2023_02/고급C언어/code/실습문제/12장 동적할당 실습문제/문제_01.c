#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	int* p = NULL;
	p = (int*)malloc(n * sizeof(int));
	for (int* q = p; q < p + n; q++) {
		scanf("%d", q);
		sum += *q;
	}
	free(p);
	printf("%d", sum);
	return 0;
}