#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiple(int x, int y);
int maximum(int x, int y);
int digit_maximum(int x);

int main() {
	int n, m, k;
	int max = 0;
	scanf("%d %d %d", &n, &m, &k);

	for (int i = n; i <= m; i++) {
		if (multiple(i, k) == 1) {
			if (max < digit_maximum(i)) {
				max = digit_maximum(i);
			}
		}
		else {
			if (max < i % k) {
				max = i % k;
			}
		}
	}
	printf("%d", max);
	return 0;
}

int multiple(int x, int y) {
	int k = 0;
	if (x % y == 0) {
		k = 1;
	}

	return k;
}
int maximum(int x, int y) {
	int max;
	max = (x > y) ? x : y;
	return max;
}
int digit_maximum(int x) {
	int n1, n2, max = 0, before_max;
	while (x > 0) {
		n1 = x % 10;
		n2 = (x / 10) % 10;
		x /= 10;
		before_max = maximum(n1, n2);
		max = maximum(max, before_max);
	}
	return max;
}