#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x[10];
	for (int i = 0; i < 10; i++) {
		scanf("%lf", &x[i]);
	}
	for (int i = 0; i < 10; i++) {
		int cnt = 0;
		for (int j = 0; j < 10; j++) {
			if (x[j] < x[i]) {
				cnt++;
			}
		}
		printf("%d", cnt);
	}
	return 0;
}