#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch[20];
	char* pch;
	int cnt = 0;
	for (pch = ch; pch < ch + 20; pch++) {
		scanf("%c", pch);
		if (*pch == '\n') {
			break;
		}
	}
	pch = ch;
	while (*pch != '#') {
		pch++;
	}
	pch--;
	while (pch >= ch) {
		printf("%c", *pch);
		pch--;
	}
	printf("\n");
	return 0;
}