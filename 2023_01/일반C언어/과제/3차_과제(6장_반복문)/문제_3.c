#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m; // n~m ���� 
	int big = 0; // �����ִ�
	int bigbig = 0; // ��������ִ��μ����� ����

	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++) { //i�� n���� m���� 1���ö󰡱�
		int cnt = 0; // ī��Ʈ �ʱ�ȭ
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) { //������ϴ°���
				cnt += 1; //����� 1 ���ϱ�
			}
		}
		if (cnt > big) { //���� �ְ� ��� ���ŵǸ�
			big = cnt; // �ְ� ��� ������ big�� ���
			bigbig = i; // �ְ� ������� ������ bigbig����´�.
		}
	}
	printf("%d %d", bigbig, big); // ������� ���
}