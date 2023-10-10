#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	scanf("%s", str1);
	scanf("%s", str2);

	printf("%d ", strlen(str1));

	int num = 0, cnt = 0, n;
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
				printf("1");
				num++;
				break;
			}
		}
	}
	if (num == 0) {
		printf("0");
	}
	return 0;
}