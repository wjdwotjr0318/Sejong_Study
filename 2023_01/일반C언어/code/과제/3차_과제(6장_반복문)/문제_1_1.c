#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d", &n); //�Է��� ���� ���� n

	for (int i = 1; i <= n; i++) { //n�� ����ؾ������� for���� n�� �ݺ��ϰ��Ѵ�.
		scanf("%d", &m); //�Է����� m
		printf("%d:", m);
		for (int j = 1; j <= m; j++) { // ����� ����Ұ��̴�. �ϴ� ����� 1�̻� m���ϴ�.
			if (m % j == 0) { //����� ���� ������ 0�Ǵ��� Ȯ��
				printf(" %d", j); //��� �������.
			}
		}
		printf("\n"); //�ٹٲٱ�
	}
	return 0;
}