#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[4];
	int sum = 0;

	scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);
	sum = x[0] + x[1] + x[2] + x[3] + x[4];
	double avg = sum / 5.0;

	for (int i = 0; i < 5; i++) {
		if (x[i] > avg) {
			printf("%d\n", x[i]);
		}
	}

	return 0;
}