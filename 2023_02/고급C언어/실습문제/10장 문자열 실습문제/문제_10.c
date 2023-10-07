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

	return 0;
}