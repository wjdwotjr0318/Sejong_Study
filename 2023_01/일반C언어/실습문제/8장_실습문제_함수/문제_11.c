#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a1, a2, a3;

int count_strike(int x, int y, int z) {
	int result = 0;
	if (x == a1) {
		result++;
	}
	if (y == a2) {
		result++;
	}
	if (z == a3) {
		result++;
	}
	return result;
}

int count_ball(int x, int y, int z) {
	int result = 0;
	if (x == a2 || x == a3) {
		result++;
	}
	if (y == a1 || y == a3) {
		result++;
	}
	if (z == a1 || z == a2) {
		result++;
	}
	return result;

}

int main() {
	int x, y, z;
	scanf("%d %d %d", &a1, &a2, &a3);
	while (1) {
		scanf("%d %d %d", &x, &y, &z);
		printf("%dS%dB\n", count_strike(x, y, z), count_ball(x, y, z));
		if (count_strike(x, y, z) == 3) {
			break;
		}
	}



	return 0;
}