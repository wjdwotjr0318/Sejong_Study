#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch[10], ans;
	char* pch;
	int k = 0;
	for (pch = ch; pch < ch + 10; pch++) {
		scanf("%c", pch);
	}
	for (pch = ch; pch < ch + 10; pch++) {
		int cnt = 0;
		for (char* pch_2 = pch; pch_2 < ch + 10; pch_2++) {
			if (*pch == *pch_2) {
				cnt++;
			}
		}
		if (k < cnt) {
			k = cnt;
			ans = *pch;
		}
	}
	printf("%c %d", ans, k);

	return 0;
}
