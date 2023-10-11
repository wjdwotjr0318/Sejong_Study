#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int check(char*);

int main(void) {
	char ch[30];
	scanf("%s", ch);
	printf("%zd %d", strlen(ch), check(ch));
	return 0;
}

int check(char* p) {
	int len = 0;
	int cnt = 0;
	while (*(p + len) != 0) {
		len++;
	}
	for (int i = 0; *(p + i) != 0; i++) {
		if (*(p + i) != *(p + len - i - 1)) {
			cnt++;
			return 0;
		}
	}
	if (cnt == 0) {
		return 1;
	}
}