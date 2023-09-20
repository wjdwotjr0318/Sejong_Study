#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arrsum(int x[], int s, int e);

int main() {
	int n, s, e;
	int x[100] = { 0 };
	scanf("%d %d %d", &n, &s, &e);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	printf("%d", arrsum(x, s, e));
	return 0;
}

int arrsum(int x[], int s, int e) {
	int sum = 0;
	for (int i = s; i <= e; i++) {
		sum += x[i];
	}
	return sum;
}