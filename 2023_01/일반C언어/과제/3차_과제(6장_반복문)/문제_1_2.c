#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m; //�Է��� nm����
	int cnt = 0; // ����� ������ ���� ����
	int bigm = 0; // �ִ����� ������ �Ǻ��Ҷ� �� ����
	int bigbigm = 0; // �ִ����� ���� ������ ���� ����
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &m); // ����m (n�� �Է��Ұ�)
		printf("%d:", m);
		int cnt = 0; // ���⼭ �ѹ���cnt��0��������� cnt���� �������� ����
		for (int j = 1; j <= m; j++) {
			if (m % j == 0) {//��� ���ϴ� ���
				cnt += 1; //������� �����ֱ�
				printf(" %d", j); //��� �ϳ��� ǥ���ϱ�
			}
		}
		printf(" %d\n", cnt); //������� ǥ���ϰ� �ٹٲ�
		if (cnt > bigm) { //ī��Ʈ�� ����ī��Ʈ���� ũ��
			bigm = cnt; // bigm�� ���ο� cnt�� �ְ�
			bigbigm = m; //�� cnt�� �ش��ϴ� m���� ��򿥿� �ֱ�
		}
	}
	printf("%d", bigbigm); //���
	return 0;
}
