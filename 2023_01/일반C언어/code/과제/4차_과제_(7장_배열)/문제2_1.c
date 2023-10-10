#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char x[100], y[100], z[100],p=0;
	int cnt[100] = { 0 };
	int ttt=0;
	int i = 0, j, k;
	char n;
	while (1) {
		scanf("%c", &n);
		if (n == '!') {
			break;
		}
		z[p] = n;
		p++;
		ttt++;
		k = 0;
		for (j = 0; j < i; j++) {
			if (x[j] == n) {
				k = 1;
				break;
			}
		}
		if (k==0) {
			x[i] = n;
			y[i] = n;
			i++;
		}
	}
	for (int j = 0; j < i; j++) {
		for (int k = 0; k < ttt; k++) {
			if (x[j] == x[k]) {
				cnt[j]++;
			}
		}
	}

	for (j = i - 1; j >= 0; j--) {
		printf("%c %d\n", y[j], cnt[j]);
	}

	return 0;
}