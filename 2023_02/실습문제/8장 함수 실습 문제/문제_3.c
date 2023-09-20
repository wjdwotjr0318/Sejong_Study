#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
	return ((n + 1) * n) / 2;
}
int main() {
	int n, ans = 0;
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++) {
		ans += sum(i);
	}
	printf("%d", ans);
	return 0;
}