#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void StringAdd(char arr[], char ch, int index);
int Convertor(char x);

int main() {
    char str[17];
    gets(str);

    int len = strlen(str);

    for (int i = 0; i < len - 1; i++) {
        int currentNum = Convertor(str[i]);
        int nextNum = Convertor(str[i + 1]);

        if (currentNum % 2 && nextNum % 2) {
            StringAdd(str, '+', i + 1);
            len++;
            i++;
        }
        else if (!(currentNum % 2) && !(nextNum % 2)) {
            StringAdd(str, '*', i + 1);
            len++;
            i++;
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
