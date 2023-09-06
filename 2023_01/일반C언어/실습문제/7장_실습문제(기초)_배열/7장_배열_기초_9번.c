#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, k, cnt, sum = 0;
	int i = 0;
	int x[10];
	scanf("%d", &n);
	cnt = n;
	while (n > 0) {
		scanf("%d", &k);
		n -= 1;
		x[i] = k;
		i++;
	}
	for (int j = 0; j < cnt; j++) {
		sum += x[j];
		sum *= 10;
	}

	printf("%d", sum/10);
}