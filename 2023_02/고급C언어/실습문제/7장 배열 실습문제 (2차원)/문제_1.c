#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[3][3];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &n[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		sum += n[i][i];
	}
	printf("%d", sum);
	return 0;
}