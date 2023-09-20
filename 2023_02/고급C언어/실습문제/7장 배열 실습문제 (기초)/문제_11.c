#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x[10], min = 99999999999999999.0;
	for (int i = 0; i < 10; i++) {
		scanf("%lf", &x[i]);
		if (min > x[i]) {
			min = x[i];
		}
	}
	printf("%.1lf", min);
	return 0;
}