#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	char* p = NULL;
	p = (char*)malloc(sizeof(char));
	if (p == NULL) {
		printf("error");
		return -1;
	}
	scanf("%s", p);
	getchar();
	char a, b;
	int cnt1=0, cnt2=0;
	scanf("%c %c", &a, &b);
	for (char* q = p; q < p + n; q++) {
		if (*q == a) {
			cnt1++;
		}
		if (*q == b) {
			cnt2++;
		}
	}
	printf("%d %d", cnt1, cnt2);
	free(p);
	return 0;
}