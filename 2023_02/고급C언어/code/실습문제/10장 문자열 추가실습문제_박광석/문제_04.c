#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[10][100], max_word[100], min_word[100], MAX[100], MIN[100];
	char max[100], min[100];
	int N, max_len = 0, min_len = 999;
	int idx = 0, a = 1;
	scanf("%d", &N);
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
		if (max_word[i] != ' ' && max_word[i] != '\n') {
			max[idx] = max_word[i];
			idx++;
		}
		else {
			max[idx] = 0;
			if (a || strcmp(max, MAX) > 0) {
				strcpy(MAX, max);
				a = 0;
			}
			idx = 0;
		}
	}
	if (!a && strcmp(max, MAX) > 0) {
		max[idx] = 0;
		strcpy(MAX, max);
	}
	idx = 0;
	a = 1;
	for (int i = 0; min_word[i] != 0; i++) {
		if (min_word[i] != ' ' && min_word[i] != '\n') {
			min[idx] = min_word[i];
			idx++;
		}
		else {
			min[idx] = 0;
			if (a || strcmp(min, MIN) < 0) {
				strcpy(MIN, min);
				a = 0;
			}
			idx = 0;
		}
	}
	if (!a && strcmp(min, MIN) < 0) {
		min[idx] = 0;
		strcpy(MIN, min);
	}
	printf("%s\n", MIN);
	printf("%s", MAX);
	return 0;
}