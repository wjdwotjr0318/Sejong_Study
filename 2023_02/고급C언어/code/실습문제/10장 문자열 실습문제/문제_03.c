#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[101];
	scanf("%s", str);
	int i = 0;
	int cnt = 0;
	while (1) {
		if (str[i] == '\0') {
			break;
		}
		cnt++;
		i++;
	}
	for (i = 0; i < cnt; i++) {
		printf("%s\n", str + i);
		str[cnt + i] = str[i];
		str[cnt + i + 1] = '\0';
	}
	return 0;
}