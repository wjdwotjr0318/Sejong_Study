#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;

void die1(int x);
void die2(int x, int y);
void die3(int x, int y, int z);

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= 6; i++) {
		die1(i);
	}
}

void die1(int x) {
	for (int i = 1; i <= 6; i++) {
		die2(x, i);
	}
}
void die2(int x, int y) {
	for (int i = 1; i <= 6; i++) {
		die3(x, y, i);
	}
}
void die3(int x, int y, int z) {
	if (x + y + z == n) {
		printf("%d %d %d\n", x, y, z);
	}
}