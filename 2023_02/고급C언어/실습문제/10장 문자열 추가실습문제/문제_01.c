#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char input[101]; // �Է� ���� ���ڿ�
    char* token; // ��ūȭ�� �ܾ ������ ������
    char min_word[101]; // ���������� ���� ���� �ܾ ������ ���ڿ�

    // gets �Լ��� ����Ͽ� ���ڿ� �Է� �ޱ�
    gets(input);

    // ù ��° �ܾ token�� ����
    token = strtok(input, " ");
    strcpy(min_word, token); // ó������ ù ��° �ܾ ���� �����ٰ� ����

    while (token != NULL) { // ��ū�� ���� ������ �ݺ�
        if (strcmp(token, min_word) < 0) { // ���� ���� �ܾ min_word���� ���������� �����ٸ�
            strcpy(min_word, token); // min_word ������Ʈ
        }
        token = strtok(NULL, " "); // ���� �ܾ�� �̵�
    }

    printf("%s", min_word); // ��� ���

    return 0;
}
