#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_3(int x);

int main() {

	int n;
	scanf("%d", &n);
	printf("%d", count_3(n));

	return 0;
}

int count_3(int x) {
	int cnt = 0, n, check;
	for (int i = 1; i <= x; i++) {
		n = i;
		while (n != 0) {
			check = n % 10;
			n /= 10;
			if (check == 3) {
				cnt++;
			}
		}
	}
	return cnt;
}