#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[10];
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	char c = '*';
	for (int i = 0; i < 10; i++) {
		scanf("%d", &x[i]);
		if (x[i] == 1) {
			cnt1++;
		}
		else if (x[i] == 2) {
			cnt2++;
		}
		else if (x[i] == 3) {
			cnt3++;
		}
	}
	printf("1:");
	for (int i = 0; i < cnt1; i++) {
		printf("*");
	}
	printf("\n");

	printf("2:");
	for (int i = 0; i < cnt2; i++) {
		printf("*");
	}
	printf("\n");

	printf("3:");
	for (int i = 0; i < cnt3; i++) {
		printf("*");
	}
	printf("\n");

	return 0;
}