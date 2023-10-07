#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[201];
    char words[20][200];
    int count = 0;

    // gets �Լ��� ����Ͽ� ���� �Է� �ޱ�
    gets(sentence);

    // ������ �ܾ� ������ �и��Ͽ� ������ �迭�� ����
    int len = strlen(sentence);
    int start = 0;
    for (int i = 0; i < len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            strncpy(words[count], sentence + start, i - start);
            words[count][i - start] = '\0'; // NULL ���� �߰�
            count++;
            start = i + 1;
        }
    }
    strncpy(words[count], sentence + start, len - start);
    words[count][len - start] = '\0'; // NULL ���� �߰�
    count++;

    // �и��� �ܾ� ���
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }

    // �ܾ���� ���� ���������� ����
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

    // ���ĵ� �ܾ� ���
    for (int i = 0; i < count; i++) {
        if (i != 0) printf(" ");
        printf("%s", words[i]);
    }

    return 0;
}
