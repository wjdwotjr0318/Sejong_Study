#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int check(char* str);

int main() {
	char str[50];
	scanf("%s", str);
	printf("%d ", strlen(str));
	printf("%d ", check(str));
	return 0;
}

int check(char* str) {
	int m, total, cnt = 0;
	m = strlen(str);
	total = m / 2;

	for (int i = 0; i < total; i++) {
		if (str[i] == str[m - 1 - i]) {
			cnt++;
		}
	}
	if (cnt == total) {
		return 1;
	}
	else {
		return 0;
	}

}