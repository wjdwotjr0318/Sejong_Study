#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch[20] = { NULL };
	scanf("%s", ch);
	for (int i = 0; i < 20; i++) {
		if (ch[i] >= 'a' && ch[i] <= 'z') {
			printf("%c", ch[i]);
		}
	}
	return 0;
}