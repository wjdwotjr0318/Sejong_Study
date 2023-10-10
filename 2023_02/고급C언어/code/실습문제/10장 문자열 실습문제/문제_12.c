#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[200], str2[200];

	gets(str1);
	gets(str2);

	int num = 0;
	int cnt = 0;
	int n;

	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] == str2[0]) {
			cnt = 0;
			n = i;
			for (int j = 0; j < strlen(str2); j++) {
				if (str1[n] == str2[j]) {
					cnt++;
					n++;
				}
				else {
					break;
				}
			}
			if (strlen(str2) == cnt) {
				num++;
				i = i + strlen(str2) - 1;
			}
		}
	}
	printf("%d", num);
	return 0;
}