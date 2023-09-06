#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[5];
	int max1 = -99999, max2 = -99999;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &x[i]);
		if (i == 0) {
			max1 = x[1];
		}
		else if (x[i] > max1) {
			max2 = max1;
			max1 = x[i];
		}
	}
	printf("%d\n%d", max1, max2);
	return 0;
}