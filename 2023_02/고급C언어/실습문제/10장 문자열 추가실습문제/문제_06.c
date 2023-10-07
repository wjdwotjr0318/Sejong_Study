#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void StringAdd(char arr[], char ch, int index);
int Convertor(char x);

int main() {
    char str[17]; // 최대 길이의 문자열(8자리) + 추가될 최대 문자(8자리) + '\0'
    gets(str);

    int len = strlen(str); // 처음에 입력받은 문자열의 길이를 구합니다.

    for (int i = 0; i < len - 1; i++) {
        int currentNum = Convertor(str[i]);
        int nextNum = Convertor(str[i + 1]);

        if (currentNum % 2 && nextNum % 2) {  // 홀수가 연속되는 경우
            StringAdd(str, '+', i + 1);
            len++;  // 문자열 길이가 1 증가
            i++;   // +를 추가했기 때문에 그 다음 문자를 검사
        }
        else if (!(currentNum % 2) && !(nextNum % 2)) {  // 짝수가 연속되는 경우
            StringAdd(str, '*', i + 1);
            len++;  // 문자열 길이가 1 증가
            i++;   // *를 추가했기 때문에 그 다음 문자를 검사
        }
    }

    printf("%s\n", str);

    return 0;
}

void StringAdd(char arr[], char ch, int index) {
    int len = strlen(arr);
    for (int i = len; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = ch;
    arr[len + 1] = '\0';
}

int Convertor(char x) {
    return x - '0';
}
