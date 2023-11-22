#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	float max = 0;
	float* p = NULL;
	p = (float*)malloc(n * sizeof(float));
	if (p == NULL) {
		printf("error");
		return -1;
	}
	for (float* q = p; q < p + n; q++) {
		scanf("%f", q);
	}
	max = *p;
	for (float* q = p; q < p + n; q++) {
		if (max < *q) {
			max = *q;
		}
	}
	printf("%.2f", max);
	free(p);
	return 0;
}