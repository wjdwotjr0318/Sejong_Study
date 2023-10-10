#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, x[50], y[50], cnt[50] = { 0 }, t = 0, tt = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		t++;
	}
	y[0] = x[0];
	for (int i = 1; i < t; i++) {
		int k = 0;
		for (int j = i - 1; j >= 0; j--) {
			if (x[i] == x[j]) {
				k++;
			}
		}
		if (k == 0) {
			y[tt] = x[i];
			tt++;
		}
	}
	
	for (int i = 0; i < tt; i++) {
		int k = 0;
		for (int j = 0; j < n; j++) {
			if (y[i] == x[j]) {
				k++;
			}
		}
		cnt[i] = k;
	}

	for (int i = 0; i < tt; i++) {
		printf("%d %d\n", y[i],cnt[i]);
	}

	return 0;
}