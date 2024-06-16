#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int a, int b) {
	if (a != 0 && b != 0) {
		if (a > b) {
			return gcd(a % b, b);
		}
		else {
			return gcd(a, b % a);
		}
	}
	return a + b;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", gcd(a, b));
}
