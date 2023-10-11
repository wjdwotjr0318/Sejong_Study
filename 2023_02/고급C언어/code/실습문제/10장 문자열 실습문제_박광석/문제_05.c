#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	char str1[40], str2[20];
	int pos;
	int str1_len = 0, str2_len = 0;
	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%d", &pos);
	while (str1[str1_len] != 0) {
		str1_len++;
	}
	while (str2[str2_len] != 0) {
		str2_len++;
	}
	for (int i = str1_len; i >= pos; i--) {
		str1[i + str2_len] = str1[i];
	}
	for (int i = 0; i < str2_len; i++) {
		str1[pos + i] = str2[i];
	}
	printf("%s", str1);
	return 0;
}