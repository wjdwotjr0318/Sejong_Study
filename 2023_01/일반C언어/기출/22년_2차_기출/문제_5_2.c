#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int reverse_num(int n);
int is_palindromic(int n);
int del_digit(int n, int t);

int main() {
	int n, t;
	scanf("%d %d", &n, &t);

	printf("%d %d %d %d", n, reverse_num(n), is_palindromic(n), del_digit(n, t));

	return 0;
}

int reverse_num(int n) {
	int k = 0;
	while (n > 0) {
		k *= 10;
		k += n % 10;
		n /= 10;
	}
	return k;
}

int is_palindromic(int n) {
	if (n == reverse_num(n)) {
		return 1;
	}
	else {
		return 0;
	}
}
int del_digit(int n, int t) {
	int cnt = 0, x[100], newn = 0, new = 0, nok;
	nok = n;
	while (nok > 0) {
		x[cnt] = nok % 10;
		nok /= 10;
		cnt++;
	}

	if (is_palindromic(n) == 1) {
		for (int i = 0; i < cnt; i++) {
			if (i+1 == t || i+1 == cnt - t+1) {
				x[i] = -1;
			}
		}
		for (int i = cnt -1 ; i >=0 ; i--) {
			if (x[i] != -1) {
				new *= 10;
				new += x[i];
			}
		}
		return new;
	}
	else {
		for (int i = 0; i < cnt; i++) {
			if (i+1 == t) {
				x[i] = -1;
			}
		}
		for (int i = cnt -1 ; i >= 0; i--) {
			if (x[i] != -1) {
				new *= 10;
				new += x[i];
			}
		}
		return new;
	}
}