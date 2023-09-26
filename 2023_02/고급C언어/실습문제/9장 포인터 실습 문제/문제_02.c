#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch[20];
	char* pch = ch;
	int cnt = 0;

	while (cnt < 19) {
		scanf("%c", pch);

		if (*pch == '\n' || *pch == '#') {
			break;
		}
		pch++;
		cnt++;
	}
	pch--;
	while (cnt > 0) {
		printf("%c", *pch);
		pch--;
		cnt--;
	}
	return 0;
}