#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int N, M1, M2;
    char sentences[20][101];
    char word[101];
    int minLen = 101, maxLen = -1;
    int minIdx, maxIdx;
    char shortestWord[101], longestWord[101];

    scanf("%d %d %d", &N, &M1, &M2);
    getchar();

    for (int i = 0; i < N; i++) {
        gets(sentences[i]);
        int len = strlen(sentences[i]);
        if (len < minLen) {
            minLen = len;
            minIdx = i;
        }
        if (len > maxLen) {
            maxLen = len;
            maxIdx = i;
        }
    }

    int count = 0;
    char* ptr = sentences[maxIdx];
    while (1) {
        int j = 0;
        while (ptr[j] != ' ' && ptr[j] != '\0') {
            word[j] = ptr[j];
            j++;
        }
        word[j] = '\0';

        if (count == M1) {
            strcpy(longestWord, word);
            break;
        }

        if (ptr[j] == '\0') {
            break;
        }

        ptr += j + 1;
        count++;
    }

    count = 0;
    ptr = sentences[minIdx];
    while (1) {
        int j = 0;
        while (ptr[j] != ' ' && ptr[j] != '\0') {
            word[j] = ptr[j];
            j++;
        }
        word[j] = '\0';

        if (count == M2) {
            strcpy(shortestWord, word);
            break;
        }

        if (ptr[j] == '\0') {
            break;
        }

        ptr += j + 1;
        count++;
    }

    if (strcmp(shortestWord, longestWord) < 0) {
        printf("%s\n%s\n%s%s\n", sentences[maxIdx], sentences[minIdx], shortestWord, longestWord);
    }
    else {
        printf("%s\n%s\n%s%s\n", sentences[maxIdx], sentences[minIdx], longestWord, shortestWord);
    }

    return 0;
}
