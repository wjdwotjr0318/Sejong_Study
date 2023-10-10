#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int M, N;
    char str1[101], str2[101];
    char word1[101] = "", word2[101] = "", result[202] = "";
    int wordCount, start, end;

    scanf("%d %d", &M, &N);
    getchar();

    gets(str1);
    gets(str2);

    wordCount = 0;
    for (int i = 0; str1[i] && wordCount <= M; i++) {
        if (str1[i] != ' ' && (i == 0 || str1[i - 1] == ' ')) {
            if (wordCount == M) {
                start = i;
                while (str1[i] && str1[i] != ' ') i++;
                end = i;
                strncpy(word1, str1 + start, end - start);
                word1[end - start] = '\0';
            }
            wordCount++;
        }
    }

    wordCount = 0;
    for (int i = 0; str2[i] && wordCount <= N; i++) {
        if (str2[i] != ' ' && (i == 0 || str2[i - 1] == ' ')) {
            if (wordCount == N) {
                start = i;
                while (str2[i] && str2[i] != ' ') i++;
                end = i;
                strncpy(word2, str2 + start, end - start);
                word2[end - start] = '\0';
            }
            wordCount++;
        }
    }

    if (strcmp(word1, word2) < 0) {
        strcat(result, word1);
        strcat(result, word2);
    }
    else {
        strcat(result, word2);
        strcat(result, word1);
    }

    printf("%s", result);

    return 0;
}
