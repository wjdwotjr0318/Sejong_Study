#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int searchingChar(char* str, char srch, int cnt) {
    if (*str == srch) {
        cnt++;
    }
    else if (*str == '\0') {
        return cnt;
    }
    else if (*str != srch) {
    }
    str++;
    return searchingChar(str, srch, cnt);

}

int main() {

    char str[100];
    int cnt = 0;
    char srch;

    scanf("%s", str);
    getchar();
    scanf("%c", &srch);

    printf("%d", searchingChar(str, srch, cnt));

    return 0;
}