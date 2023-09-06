#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char x[7];
	int cnt = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%c", &x[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (x[i] == 'c' && x[i + 1] == 'a' && x[i + 2] == 't') {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}