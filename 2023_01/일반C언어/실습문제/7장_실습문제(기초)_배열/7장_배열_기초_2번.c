#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[10], sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
		sum += x[i];
	}
	printf("%d", sum);
	return 0;
}