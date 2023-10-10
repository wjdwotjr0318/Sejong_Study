#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_digits(int n);

int main() {
	int n;
	scanf("%d", &n);
	while (n >= 10) {
		n = add_digits(n);
	}
	printf("%d", n);

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