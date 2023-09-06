#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[10];
	for (int i = 0 ; i < 10; i++) {
		scanf("%d", &x[i]);
	}
	int flag;
	for (int i = 0; i < 10; i++) {
		flag = 1;
		for (int j = 0; j < 10; j++) {
			if (i < j) {
				break;
			}
			else if (i > j && x[i]==x[j]) {
				flag = 0 ;
				break;
			}
		}
		if (flag) {
			printf(" %d", x[i]);
		}
	}
	return 0;
}