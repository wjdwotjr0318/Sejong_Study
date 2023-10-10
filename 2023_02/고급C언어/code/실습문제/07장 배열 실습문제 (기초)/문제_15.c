#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char x[10];
	for (int i = 0; i < 10; i++) {
		scanf("%c", &x[i]);
	}
	for (int i = 0; i < 10; i++) {
		int flag = 1;
		for (int j = 0; j < 10; j++) {
			if (i != j && x[i] == x[j]) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			printf(" %c", x[i]);
		}
	}
	return 0;
}