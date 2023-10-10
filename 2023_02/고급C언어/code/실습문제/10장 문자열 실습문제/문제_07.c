#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);

	char* num[10] = { "","one","two","three","four","five","six","seven","eight","nine" };
	char* de[4] = { "","TEN","HUN","THO" };

	int m = n;
	int cnt = 0;

	while (m > 0) {
		m = m / 10;
		cnt++;
	}

	int div = 1;
	for (int i = 1; i < cnt; i++) {
		div = div * 10;
	}
	int k = n;

	while (cnt > 0) {
		k = n / div;
		n = n % div;

		if (k != 0) {
			printf("%s", num[k]);
			printf("%s", de[cnt - 1]);
		}
		div = div / 10;
		cnt--;
	}

	return 0;
}