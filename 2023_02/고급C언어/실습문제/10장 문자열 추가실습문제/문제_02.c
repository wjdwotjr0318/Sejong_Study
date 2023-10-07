#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int M, N;
    char str1[101], str2[101];
    char* token1, * token2;
    char word1[101] = "", word2[101] = "", result[202] = "";

    // M, N 값 입력 받기
    scanf("%d %d", &M, &N);
    getchar(); // 버퍼에 남아있는 '\n' 제거

    // 두 문자열 입력 받기
    gets(str1);
    gets(str2);

    // M 번째 단어 찾기
    token1 = strtok(str1, " ");
    for (int i = 0; i < M; i++) {
        token1 = strtok(NULL, " ");
    }
    strcpy(word1, token1);

    // N 번째 단어 찾기
    token2 = strtok(str2, " ");
    for (int i = 0; i < N; i++) {
        token2 = strtok(NULL, " ");
    }
    strcpy(word2, token2);

    // 두 단어의 사전 순서 비교 후 연결
    if (strcmp(word1, word2) < 0) {
        strcat(result, word1);
        strcat(result, word2);
    }
    else {
        strcat(result, word2);
        strcat(result, word1);
    }

    printf("%s", result); // 결과 출력

    return 0;
}
