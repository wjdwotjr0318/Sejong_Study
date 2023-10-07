#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int x);
int next_prime(int x);
int main() {
	int n, m, start;
	scanf("%d %d", &n, &m);
	while (m > 0) {
		start = next_prime(n);
		printf(" %d", start);
		n = start;
		m--;
	}
	return 0;
}

int is_prime(int x) {
	int k = 1;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			k = 0;
			break;
		}
	}
	return k;
}
int next_prime(int x) {
	int ans;
	for (int i = x + 1;; i++) {
		if (is_prime(i)) {
			ans = i;
			break;
		}
	}
	return ans;
}