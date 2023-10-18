#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[20][100], max_word[100], min_word[100];
	char word1[100], word2[100];
	int N, M1, M2;
	int max_len = 0, min_len = 999;
	int cnt = 0, idx = 0;
	scanf("%d%d%d", &N, &M1, &M2);
	getchar();
	for (int i = 0; i < N; i++) {
		fgets(ch[i], 100, stdin);
		if (max_len < strlen(ch[i])) {
			max_len = strlen(ch[i]);
			strcpy(max_word, ch[i]);
		}
		if (min_len > strlen(ch[i])) {
			min_len = strlen(ch[i]);
			strcpy(min_word, ch[i]);
		}
	}
	for (int i = 0; max_word[i] != 0; i++) {
		if (max_word[i] == ' ') {
			cnt++;
		}
		if (max_word[i] != ' ' && max_word[i] != '\n') {
			if (cnt == M1) {
				word1[idx] = max_word[i];
				idx++;
			}
		}
		else {
			word1[idx] = 0;
		}
	}
	cnt = 0;
	idx = 0;
	for (int i = 0; min_word[i] != 0; i++) {
		if (min_word[i] == ' ') {
			cnt++;
		}
		if (min_word[i] != ' ' && min_word[i] != '\n') {
			if (cnt == M2) {
				word2[idx] = min_word[i];
				idx++;
			}
		}
		else {
			word2[idx] = 0;
		}
	}
	printf("%s\n", max_word);
	printf("%s\n", min_word);
	if (strcmp(word1, word2) < 0) {
		strcat(word1, word2);
		printf("%s", word1);
	}
	else if (strcmp(word2, word1) <= 0) {
		strcat(word2, word1);
		printf("%s", word2);
	}
	return 0;
}