#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s1[101];
	char s2[101];

	scanf("%s %s", s1, s2);

	int i = 0, cnt = 0, n = 0;

	while (s1[i] != '\0') {
		cnt++;
		i++;
	}
	i = 0;

	while (s1[i] != '\0') {
		if (s1[i] == s2[i]) {
			n++;
		}
		i++;
	}
	if (cnt == n) {
		printf("%d 1\n", cnt);
	}
	else {
		printf("%d 0\n", cnt);
	}
	return 0;
}