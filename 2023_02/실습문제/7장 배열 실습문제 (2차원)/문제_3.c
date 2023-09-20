#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n[3];
	char x[6][5] = { {'Z','E','R','O','-'},{'O','N','E','-','-'},{'T','W','O','-','-'} ,{'T','H','R','E','E'} ,{'F','O','U','R','-'} ,{'F','I','V','E','-'} };

	for (int i = 0; i < 3; i++) {
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c", x[n[i]][j]);
		}
		printf("\n");
	}
	return 0;
}