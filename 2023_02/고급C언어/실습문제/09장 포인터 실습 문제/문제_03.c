#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ar[50], n, cnt = 0;
	int* par = ar;

	scanf("%d", &n);

	for (par = ar; par < ar + n; par++) {
		scanf("%d", par);
	}
	for (par = ar; par < ar + n; par++) {
		if (*par != 0) {
			cnt++;
		}
		else if (*par == 0) {
			break;
		}
	}
	printf("%d", cnt);
	return 0;
}