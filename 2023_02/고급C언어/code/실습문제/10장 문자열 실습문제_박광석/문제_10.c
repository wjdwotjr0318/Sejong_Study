#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[100], save[100];
	int N, min = 999;
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) {
		scanf("%s", ch);
		if (min > strlen(ch)) {
			min = strlen(ch);
			strcpy(save, ch);
		}
	}
	printf("%s", save);
	return 0;
}

// 이거 질문해야됨..