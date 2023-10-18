#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[200], word[20][200];
	int j = 0, idx = 0;
	fgets(ch, 200, stdin);
	for (int i = 0; ch[i] != 0; i++) {
		if (ch[i] != ' ' && ch[i] != '\n') {
			word[j][idx] = ch[i];
			idx++;
		}
		else {
			word[j][idx] = 0;
			printf("%s\n", word[j]);
			j++;
			idx = 0;
		}
	}
	if (idx > 0) {
		word[j][idx] = 0;
		printf("%s\n", word[j]);
		j++;
	}
	for (int i = 0; i < j; i++) {
		for (int k = 0; k < j; k++) {
			if (strcmp(word[i], word[k]) > 0) {
				char temp[200];
				strcpy(temp, word[i]);
				strcpy(word[i], word[k]);
				strcpy(word[k], temp);
			}
		}
	}
	for (int i = j - 1; i >= 0; i--) {
		printf("%s ", word[i]);
	}
	return 0;
}