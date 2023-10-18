#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	int N, M, cnt = 0, idx = 0;
	char str1[100], str2[100], word1[100], word2[100];
	scanf("%d%d", &M, &N);
	getchar();
	fgets(str1, 100, stdin);
	fgets(str2, 100, stdin);
	for (int i = 0; str1[i] != 0; i++) {
		if (str1[i] == ' ') {
			cnt++;
		}
		if (str1[i] != ' ' && str1[i] != '\n') {
			if (cnt == M) {
				word1[idx] = str1[i];
				idx++;
			}
		}
		else {
			word1[idx] = 0;
		}
	}
	cnt = 0;
	idx = 0;
	for (int i = 0; str2[i] != 0; i++) {
		if (str2[i] == ' ') {
			cnt++;
		}
		if (str2[i] != ' ' && str2[i] != '\n') {
			if (cnt == N) {
				word2[idx] = str2[i];
				idx++;
			}
		}
		else {
			word2[idx] = 0;
		}
	}
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