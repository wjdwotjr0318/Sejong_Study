#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char ch[101], word[101], min[101];
    int idx = 0;

    // 사용자로부터 문자열 입력
    gets(ch);

    // min 배열을 가장 큰 문자로 초기화
    min[0] = 127;  // ASCII 테이블에서 가장 큰 문자
    min[1] = '\0';

    for (int i = 0; 1; i++) {
        if (ch[i] != ' ' && ch[i] != '\n' && ch[i] != '\0') {
            word[idx++] = ch[i];
        }
        else {
            word[idx] = '\0';  // 단어 끝에 null 문자 추가
            if (strcmp(word, min) < 0) {
                strcpy(min, word);
            }
            idx = 0;

            // 문자열의 끝을 만나면 반복 종료
            if (ch[i] == '\0') {
                break;
            }
        }
    }

    printf("%s", min);  // 최소값인 단어 출력
    return 0;
}
