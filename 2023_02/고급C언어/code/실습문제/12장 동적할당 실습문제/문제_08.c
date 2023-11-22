#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	char** str = (char**)malloc(n * sizeof(char*));
	if (str == NULL) {
		printf("error");
		return -1;
	}
	for (int i = 0; i < n; i++) {
		str[i] = (char*)malloc(sizeof(char) * 101);
	}
	for (int i = 0; i < n; i++) {
		gets(str[i]);
	}
	int max = strlen(str[0]);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (strlen(str[i]) < max) {
			max = strlen(str[i]);
			ans = i;
		}
	}
	printf("%s", str[ans]);
	for (int i = 0; i < n; i++) {
		free(str[i]);
	}
	free(str);
	return 0;
}