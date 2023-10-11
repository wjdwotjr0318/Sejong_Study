#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	char ch1[100];
	char ch2[100];
	int len = 0, cnt = 0;
	scanf("%s", ch1);
	scanf("%s", ch2);
	for (int i = 0; ch1[i] != 0; i++) {
		if (ch1[i] == ch2[i]) {
			cnt++;
		}
		len++;
	}
	printf("%d", len);
	if (cnt == len) {
		printf(" 1");
	}
	else {
		printf(" 0");
	}
	return 0;
}