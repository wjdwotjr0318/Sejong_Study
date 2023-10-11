#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	char word[20];
	scanf("%s", word);
	for (int i = 0; i < 20; i++) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			printf("%c", word[i]);
		}
	}
	return 0;
}