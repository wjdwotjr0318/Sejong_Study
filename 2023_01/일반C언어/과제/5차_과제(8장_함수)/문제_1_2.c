#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char decrypt(char ch, int m);
char encrypt(char ch, int m);

int main() {
	char x[101];
	int m1, m2;
	int t = 0;
	for (int i = 0;; i++) {
		scanf("%c", &x[i]);
		if (x[i] == '*') {
			break;
		}
		t++;
	}
	scanf("%d %d", &m1, &m2);

	for (int i = 0; i < t; i++) {
		printf("%c", decrypt(x[i], m1));
		x[i] = decrypt(x[i], m1);
	}

	printf("\n");

	for (int i = 0; i < t; i++) {
		printf("%c", encrypt(x[i], m2));
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

char encrypt(char ch, int m) {
	int k;
	k = m % 26;

	if ('a' <= ch && 'z' >= ch) {
		if (ch + k >= 'a' && ch + k <= 'z') {
			ch = ch + k;
		}
		else {
			ch = 'a' + k - ('z' - ch) - 1;
		}
	}

	else if ('A' <= ch && 'Z' >= ch) {
		if (ch + k >= 'A' && ch + k <= 'Z') {
			ch = ch + k;
		}
		else {
			ch = 'A' + k - ('Z' - ch) - 1;
		}
	}
	else {
		ch = ch;
	}

	return ch;
}