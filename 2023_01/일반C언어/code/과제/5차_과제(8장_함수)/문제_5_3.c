#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_digits(int n);

int main() {
	int n, min = 10, org = 0, realorg = 0;

	while (1) {
		scanf("%d", &n);
		if (n < 0) {
			break;
		}
		org = n;
		if (n == 0) {
			realorg = 0;
			min = 0;
		}
		else {
			while (n >= 10) {
				n = add_digits(n);
			}
			if (n < min) {
				min = n;
				realorg = org;
			}
		}
	}
	printf("%d %d", realorg, min);
	return 0;
}

int add_digits(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}