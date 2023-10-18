#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[101], word[101], min[101];
	int idx = 0;
	int a = 1;
	fgets(ch, 100, stdin);
	for (int i = 0; ch[i] != 0; i++) {
		if (ch[i] != ' ' && ch[i] != '\n') {
			word[idx] = ch[i];
			idx++;
		}
		else {
			word[idx] = 0;
			if (a || strcmp(word, min) < 0) {
				strcpy(min, word);
				a = 0;
			}
			idx = 0;
		}
	}
	if (!a && strcmp(word, min) < 0) {
		word[idx] = 0;
		strcpy(min, word);
	}
	printf("%s", min);
	return 0;
}