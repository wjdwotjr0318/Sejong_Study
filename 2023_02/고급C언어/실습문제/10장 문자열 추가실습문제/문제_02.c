#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int M, N;
    char str1[101], str2[101];
    char* token1, * token2;
    char word1[101] = "", word2[101] = "", result[202] = "";

    // M, N �� �Է� �ޱ�
    scanf("%d %d", &M, &N);
    getchar(); // ���ۿ� �����ִ� '\n' ����

    // �� ���ڿ� �Է� �ޱ�
    gets(str1);
    gets(str2);

    // M ��° �ܾ� ã��
    token1 = strtok(str1, " ");
    for (int i = 0; i < M; i++) {
        token1 = strtok(NULL, " ");
    }
    strcpy(word1, token1);

    // N ��° �ܾ� ã��
    token2 = strtok(str2, " ");
    for (int i = 0; i < N; i++) {
        token2 = strtok(NULL, " ");
    }
    strcpy(word2, token2);

    // �� �ܾ��� ���� ���� �� �� ����
    if (strcmp(word1, word2) < 0) {
        strcat(result, word1);
        strcat(result, word2);
    }
    else {
        strcat(result, word2);
        strcat(result, word1);
    }

    printf("%s", result); // ��� ���

    return 0;
}
