#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max_num(int n1, int n2);
int min_num(int n1, int n2);

int main() {
	int a[100], cnt = 0, n1, n2, tmp;
	int max, min;
	for (int i = 0;; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			break;
		}
		cnt++;
	}
	scanf("%d %d", &n1, &n2);
	for (int i = 0; i < (n2 - n1 + 1)/2; i++) {
		tmp = a[n1 + i];
		a[n1 + i] = a[n2 - i];
		a[n2 - i] = tmp;
	}
	for (int i = 0; i < cnt; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	max = a[n1];
	min = a[n1];

	for (int i = n1; i < n2; i++) {
		if (max < max_num(a[i], a[i + 1])) {
			max = max_num(a[i], a[i + 1]);
		}
		if (min > min_num(a[i], a[i + 1])) {
			min = min_num(a[i], a[i + 1]);
		}
	}

	printf("%d %d", max, min);

	return 0;
}

int max_num(int n1, int n2) {
	int max;
	max = (n1 > n2) ? n1 : n2;
	return max;
}

int min_num(int n1, int n2) {
	int min;
	min = (n1 < n2) ? n1 : n2;
	return min;
}