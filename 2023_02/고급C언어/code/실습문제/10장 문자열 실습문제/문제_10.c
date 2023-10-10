#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int n;
	scanf("%d", &n);

	char str[200][200];

	for (int i = 0; i < n; i++) {
		scanf("%s", str[i]);
	}
	int max = strlen(str);
	int index = 0;
	for (int i = 0; i < n; i++) {
		if (max > strlen(str[i])) {
			max = strlen(str[i]);
			index = i;
		}
	}
	printf("%s", str[index]);
	return 0;
}