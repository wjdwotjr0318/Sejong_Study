#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, x[100] = { 0 };
	int cnt = 1, maxcnt = 1, end=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < n ; i++) {
		if (x[i] * x[i + 1] < 0) {
			cnt++;
		}
		else {
			if (maxcnt <= cnt) {
				maxcnt = cnt;
				end = i;
			}
			cnt = 1;
		}
	}

	printf("%d", maxcnt);
	printf("\n");
	for (int i = end - maxcnt+1; i <= end; i++) {
		printf(" %d", x[i]);
	}
	return 0;
}