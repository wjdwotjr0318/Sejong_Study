#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	scanf("%s", str1);
	scanf("%s", str2);

	int result = strcmp(str1, str2);

	if (result < 0) {
		strcat(str2, str1);
		printf("%s", str2);
	}
	else {
		strcat(str1, str2);
		printf("%s", str1);
	}
	return 0;
}