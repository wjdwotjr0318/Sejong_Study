#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[100], str2[100];
	int len1, len2, count = 0;
	fgets(str1, 100, stdin);
	fgets(str2, 100, stdin);
	len1 = strlen(str1), len2 = strlen(str2);
	for (int i = 0; i <= len1 - len2;) {
		int idx = 0;
		int cnt = 0;
		for (int j = i; j < i + len2; j++) {
			if (str1[j] == str2[idx]) {
				cnt++;
			}
			idx++;
		}
		if (cnt == len2) {
			count++;
			i += len2;
		}
		else {
			i++;
		}
	}
	printf("%d", count);
	return 0;
}