#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	char* p = NULL;
	p = (char*)malloc((sizeof(char) * n) + 1);
	scanf("%s", p);
	if (p == NULL) {
		printf("error");
		return -1;
	}
	for (char* q = p;q < p + n - 2; q++) {
		if (strncmp(q, "cat", 3) == 0) {
			cnt++;
		}
	}
	printf("%d", cnt);
	free(p);
	return 0;
}