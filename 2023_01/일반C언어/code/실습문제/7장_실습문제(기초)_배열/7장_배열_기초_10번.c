#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x[10];
	for (int i = 0; i < 10; i++) {
		scanf("%lf", &x[i]);
		if (x[i] > 0.0 ){
			printf(" %.1f", x[i]);
		}
	}
	return 0;
}