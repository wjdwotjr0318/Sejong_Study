#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char x[5];
	for (int i = 0; i < 5; i++) {
		scanf("%c", &x[i]);
	}
	getchar();

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0) {
				printf("%c", x[j]);
			}
			else {
				printf("%c", x[(3*i+j)%5]);
			}
		}
		printf("\n");
	}
	return 0;
}