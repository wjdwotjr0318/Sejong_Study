#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("%c %c\n", from, to);
	}
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("%c %c\n", from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	hanoi_tower(n, 'A', 'B', 'C');
	return 0;
}
