#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[10];
	int max = -99999;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
		if (max < x[i]) {
			max = x[i];
		}
	}
	printf("%d", max);
	return 0;
}