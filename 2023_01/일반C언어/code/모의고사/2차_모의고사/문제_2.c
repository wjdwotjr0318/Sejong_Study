#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ans;
	char x[100], y[100], ch;
	int cnt = 0, i = 0, j = 0;
	while (cnt < 3) {
		scanf("%c", &ch);
		if (ch == '*') {
			cnt++;
		}
		if (cnt == 0) {
			x[i] = ch;
			i++;
		}
		else if (cnt == 1 && ch != '*') {
			y[j] = ch;
			j++;
		}
		else if (cnt == 2) {
			break;
		}
	}
	for (int k = 0;; k++) {
		if (x[k] == y[k]) {
			continue;
		}
		else {
			ans = (x[k] < y[k]) ? 1 : 0;
			break;
		}
	}
	if (ans == 1) {
		for (int p = 0; p < i; p++) {
			printf("%c", x[p]);
		}
	}
	else if (ans == 0) {
		for (int p = 0; p < j; p++) {
			printf("%c", y[p]);
		}
	}

	return 0;
}