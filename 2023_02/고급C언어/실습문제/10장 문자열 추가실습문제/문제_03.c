#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[201];
    char words[20][200];
    int count = 0;

    // gets 함수를 사용하여 문장 입력 받기
    gets(sentence);

    // 문장을 단어 단위로 분리하여 이차원 배열에 저장
    int len = strlen(sentence);
    int start = 0;
    for (int i = 0; i < len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            strncpy(words[count], sentence + start, i - start);
            words[count][i - start] = '\0'; // NULL 문자 추가
            count++;
            start = i + 1;
        }
    }
    strncpy(words[count], sentence + start, len - start);
    words[count][len - start] = '\0'; // NULL 문자 추가
    count++;

    // 분리된 단어 출력
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }

    // 단어들을 영어 사전순으로 정렬
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                char temp[200];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    // 정렬된 단어 출력
    for (int i = 0; i < count; i++) {
        if (i != 0) printf(" ");
        printf("%s", words[i]);
    }

    return 0;
}
