#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char decrypt(char ch, int m);

int main() {

	char x[10];
	int m;
	for (int i = 0; i < 10; i++) {
		scanf("%c", &x[i]);
	}
	getchar();
	scanf("%d", &m);
	for (int i = 0; i < 10; i++) {
		printf("%c", decrypt(x[i], m));
	}


	return 0;
}

char decrypt(char ch, int m) {

	int k;
	k = m % 26;

	if ('a' <= ch && 'z' >= ch) {
		if (ch - k >= 'a' && ch - k <= 'z') {
			ch = ch - k;
		}
		else {
			ch = 'z' - k + (ch - 'a') + 1;
		}
	}

	else if ('A' <= ch && 'Z' >= ch) {
		if (ch - k >= 'A' && ch - k <= 'Z') {
			ch = ch - k;
		}
		else {
			ch = 'Z' - k + (ch - 'A') + 1;
		}
	}
	else {
		ch = ch;
	}

	return ch;
}