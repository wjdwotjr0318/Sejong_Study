#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	char ch[100];
	scanf("%s", ch);
	int len = 0;
	printf("%s", ch);
	for (int i = 0; ch[i + 1] != 0; i++) {
		for (int j = 0; ch[j + 1] != 0; j++) {
			int flag = ch[j];
			ch[j] = ch[j + 1];
			ch[j + 1] = flag;
		}
		printf("%s\n", ch);
	}
	return 0;
}