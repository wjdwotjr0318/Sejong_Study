#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char ch[101], word[101], min[101];
    int idx = 0;

    // ����ڷκ��� ���ڿ� �Է�
    gets(ch);

    // min �迭�� ���� ū ���ڷ� �ʱ�ȭ
    min[0] = 127;  // ASCII ���̺��� ���� ū ����
    min[1] = '\0';

    for (int i = 0; 1; i++) {
        if (ch[i] != ' ' && ch[i] != '\n' && ch[i] != '\0') {
            word[idx++] = ch[i];
        }
        else {
            word[idx] = '\0';  // �ܾ� ���� null ���� �߰�
            if (strcmp(word, min) < 0) {
                strcpy(min, word);
            }
            idx = 0;

            // ���ڿ��� ���� ������ �ݺ� ����
            if (ch[i] == '\0') {
                break;
            }
        }
    }

    printf("%s", min);  // �ּҰ��� �ܾ� ���
    return 0;
}
