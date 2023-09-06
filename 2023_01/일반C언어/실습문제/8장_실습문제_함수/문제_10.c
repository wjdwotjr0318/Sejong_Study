#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

void die3(int x, int y, int z) {

	if (x + y + z == n) {
		printf("%d %d %d\n", x, y, z);
	}

}

void die2(int x, int y) {
	for (int i = 1; i < 7; i++) {
		die3(x, y, i);
	}
}

void die1(int x) {
	for (int i = 1; i < 7; i++) {
		die2(x, i);
	}
}



int main() {

	scanf("%d", &n);
	for (int i = 1; i < 7; i++) {
		die1(i);
	}

	return 0;
}