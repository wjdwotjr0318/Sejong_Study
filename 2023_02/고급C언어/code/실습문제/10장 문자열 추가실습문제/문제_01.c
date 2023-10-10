#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char input[101];
    char word[101];
    char min_word[101];
    int i, j, word_end;

    gets(input);

    int len = strlen(input);
    i = 0;

    min_word[0] = 'z';
    min_word[1] = '\0';

    while (i < len) {
        j = 0;

        while (i < len && input[i] != ' ') {
            word[j++] = input[i++];
        }
        word[j] = '\0';

        if (strcmp(word, min_word) < 0) {
            strcpy(min_word, word);
        }

        while (i < len && input[i] == ' ') {
            i++;
        }
    }

    printf("%s", min_word);

    return 0;
}
