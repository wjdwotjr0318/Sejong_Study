#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[5];

	int max = -9999999, max_2 = -9999999;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (max < x[i]) {
			max_2 = x[i];
			max = x[i];
		}
		else if (max_2 < x[i] && x[i] != max) {
			max_2 = x[i];
		}
		else if (max_2 == max && x[i] < max); {
			max_2 = x[i];
		}
	}
	printf("%d\n%d", max, max_2);
}