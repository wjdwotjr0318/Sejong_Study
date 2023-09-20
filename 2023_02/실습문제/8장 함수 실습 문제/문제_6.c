#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func1(int x);

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", func1(a));
	return 0;
}

int func1(int x) {
	return x * x * 2 - 5 * x + 1;
}