#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int m, cnt = 0, cnt2 = 0;
	char x[100], y[100], z[100], p;

	for (int i = 0;; i++) {
		scanf("%c", &x[i]);
		if (x[i] == '!') {
			break;
		}
		cnt++;
	}

	scanf("%d", &m);
	//배열 y 완성 갯수는 cnt2 개
	for (int i = 0; i < cnt; i++) {
		int k = 0;
		for (int j = 0; j < i; j++) {
			if (x[j] == x[i]) {
				k = 1;
				break;
			}
		}
		if (k == 0) {
			y[cnt2] = x[i];
			cnt2++;
		}
	}
	
	for (int i = 0; i < cnt2; i++) {
		p = y[i] + m;
		//소문자
		if (y[i] >= 'a' && y[i] <= 'z') {
			if (p >= 'a' && p <= 'z') {
				z[i] = p - 'a' + 'A';
			}
			else {
				z[i] = (p - 'a') % 26 + 'A';
			}
		}
		//대문자
		else {
			if (p >= 'A' && p <= 'Z') {
				z[i] = p - 'A' + 'a';
			}
			else {
				z[i] = (p - 'A') % 26 + 'a';
			}
		}
	}

	int maxk = 0, k = 0, dam;

	for (int i = 0; i < cnt2-1; i++) {
		if (z[i] >= 'A' && z[i] <= 'Z') {
			if (z[i + 1] >= 'a' && z[i + 1] <= 'z') {
				k++;
				if (maxk < k) {
					maxk = k;
					dam = i;
				}
			}
			else {
				k = 0;
			}
		}
		if (z[i] >= 'a' && z[i] <= 'z') {
			if (z[i + 1] >= 'A' && z[i + 1] <= 'Z') {
				k++;
				if (maxk < k) {
					maxk = k;
					dam = i;
				}
			}
			else {
				k = 0;
			}
		}
	}

	for (int i = 0; i < cnt2; i++) {
		printf("%c", y[i]);
	}
	printf("\n");
	for (int i = 0; i <cnt2; i++) {
		printf("%c", z[i]);
	}
	printf("\n");
	if (maxk == 0) {
		printf("none");
	}
	else {
		for (int i = 0; i < maxk + 1; i++) {
			printf("%c", z[dam - maxk + i+1]);
		}
	}

	return 0;
}