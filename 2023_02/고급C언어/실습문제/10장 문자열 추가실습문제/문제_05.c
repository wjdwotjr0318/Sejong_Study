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

    int count;
    char* ptr = sentences[maxIdx];
    count = 0;
    while (sscanf(ptr, "%s", word) != EOF) {
        if (count == M1) {
            strcpy(longestWord, word);
            break;
        }
        ptr += strlen(word) + 1;
        count++;
    }

    ptr = sentences[minIdx];
    count = 0;
    while (sscanf(ptr, "%s", word) != EOF) {
        if (count == M2) {
            strcpy(shortestWord, word);
            break;
        }
        ptr += strlen(word) + 1;
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

