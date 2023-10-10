#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime_number(int num);

int main() {
	int n, m;
	int num;
	int x[1000];
	int cnt = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (is_prime_number(num) == 1) {
			x[cnt] = num;
			cnt++;
		}
	}

	if (cnt > m) {
		for (int i = 0; i < m; i++) {
			printf(" %d", x[i]);
		}
	}
	else if (cnt <= m) {
		if (cnt == 0) {
			printf("0");
		}
		else {
			for (int i = 0; i < cnt; i++) {
				printf(" %d", x[i]);
			}
		}
	}

	return 0;
}

int is_prime_number(int num) {
	int k = 1;
	if (num == 1) {
		k = 0;
	}
	else {
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				k = 0;
				break;
			}
		}
	}
	return k;
}