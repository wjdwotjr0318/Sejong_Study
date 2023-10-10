#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, x[100], t = 0, a;
	int cnt = 0, maxcnt = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a > 0) {
			x[t] = a;
			t++;
		}
	}
	printf("%d\n", t);
	if (t % 2 != 0) {
		for (int i = 0; i < t - 1; i++) {
			for (int j = 0; j < t - i - 1; j++) {
				if (x[j] > x[j + 1]) {
					int tempt = x[j];
					x[j] = x[j + 1];
					x[j + 1] = tempt;
				}
			}
		}
		for (int i = 0; i < t; i++) {
			if (x[i] % 2 != 0) {
				cnt++;
			}
			else {
				cnt = 0;
			}
			if (maxcnt < cnt) {
				maxcnt = cnt;
			}
			printf("%d ", x[i]);
		}
		printf("\n%d", maxcnt);
	}
	else {
		for (int i = 0; i < t - 1; i++) {
			for (int j = 0; j < t - i - 1; j++) {
				if (x[j] < x[j + 1]) {
					int tempt = x[j + 1];
					x[j + 1] = x[j];
					x[j] = tempt;
				}
			}
		}
		for (int i = 0; i < t; i++) {
			if (x[i] % 2 != 0) {
				cnt++;
			}
			else {
				cnt = 0;
			}
			if (maxcnt < cnt) {
				maxcnt = cnt;
			}
			printf("%d ", x[i]);
		}
		printf("\n%d", maxcnt);
		}
	return 0;
}