#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char input[101]; // 입력 받을 문자열
    char* token; // 토큰화한 단어를 저장할 포인터
    char min_word[101]; // 사전적으로 가장 빠른 단어를 저장할 문자열

    // gets 함수를 사용하여 문자열 입력 받기
    gets(input);

    // 첫 번째 단어를 token에 저장
    token = strtok(input, " ");
    strcpy(min_word, token); // 처음에는 첫 번째 단어가 가장 빠르다고 가정

    while (token != NULL) { // 토큰이 끝날 때까지 반복
        if (strcmp(token, min_word) < 0) { // 만약 현재 단어가 min_word보다 사전적으로 빠르다면
            strcpy(min_word, token); // min_word 업데이트
        }
        token = strtok(NULL, " "); // 다음 단어로 이동
    }

    printf("%s", min_word); // 결과 출력

    return 0;
}
