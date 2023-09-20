#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ans1, ans2, ans3;
int count_strike(int a, int b, int c);
int count_ball(int a, int b, int c);

int main() {
	scanf("%d %d %d", &ans1, &ans2, &ans3);
	int a1, a2, a3;
	while (1) {
		scanf("%d %d %d", &a1, &a2, &a3);
		printf("%dS%dB\n", count_strike(a1, a2, a3), count_ball(a1, a2, a3));
		if (count_strike(a1, a2, a3) == 3) {
			break;
		}
	}
	return 0;
}

int count_strike(int a, int b, int c) {
	int cnt_strike = 0;
	if (a == ans1) {
		cnt_strike++;
	}
	if (b == ans2) {
		cnt_strike++;
	}
	if (c == ans3) {
		cnt_strike++;
	}
	return cnt_strike;
}
int count_ball(int a, int b, int c) {
	int cnt_ball = 0;
	if (a == ans2 || a == ans3) {
		cnt_ball++;
	}
	if (b == ans1 || b == ans3) {
		cnt_ball++;
	}
	if (c == ans1 || c == ans2) {
		cnt_ball++;
	}
	return cnt_ball;
}