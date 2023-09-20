#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[3][2], ans[3] = { 0 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &n[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			ans[i] += n[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d\n", ans[i]);
	}
	return 0;
}