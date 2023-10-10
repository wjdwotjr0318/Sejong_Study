#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char sentences[10][101];
    int minLength = 101, maxLength = 0;
    int minIndex, maxIndex;

    scanf("%d", &N);
    getchar();


    for (int i = 0; i < N; i++) {
        gets(sentences[i]);
        int len = strlen(sentences[i]);
        if (len < minLength) {
            minLength = len;
            minIndex = i;
        }
        if (len > maxLength) {
            maxLength = len;
            maxIndex = i;
        }
    }

    char minWord[101] = "", maxWord[101] = "", tempWord[101];
    int start = 0, len;

    for (int i = 0; i <= minLength; i++) {
        if (sentences[minIndex][i] == ' ' || sentences[minIndex][i] == '\0') {
            len = i - start;
            strncpy(tempWord, sentences[minIndex] + start, len);
            tempWord[len] = '\0';
            if (minWord[0] == '\0' || strcmp(tempWord, minWord) < 0) {
                strcpy(minWord, tempWord);
            }
            start = i + 1;
        }
    }

    start = 0;
    for (int i = 0; i <= maxLength; i++) {
        if (sentences[maxIndex][i] == ' ' || sentences[maxIndex][i] == '\0') {
            len = i - start;
            strncpy(tempWord, sentences[maxIndex] + start, len);
            tempWord[len] = '\0';
            if (maxWord[0] == '\0' || strcmp(tempWord, maxWord) > 0) {
                strcpy(maxWord, tempWord);
            }
            start = i + 1;
        }
    }

    printf("%s\n", minWord);
    printf("%s\n", maxWord);

    return 0;
}
