#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ���׽��� ���� ǥ���ϴ� ��� ����ü
typedef struct Node {
	int coef; // ���(coefficient)
	int exp;  // ����(exponent)
	struct Node* next; // ���� ���� ����Ű�� ������
} Node;

// ���׽��� ǥ���ϴ� ����Ʈ ����ü
typedef struct {
	Node* H; // ���׽��� ��� ��� ������
} List;

// ����Ʈ �ʱ�ȭ �Լ�
void init(List* L) {
	L->H = (Node*)malloc(sizeof(Node)); // ��� ��� �޸� �Ҵ�
	L->H->next = NULL; // ��� ����� next�� NULL�� �ʱ�ȭ
}

// ����Ʈ�� �� �߰� �Լ�
void appendTerm(List* L, int c, int e) {
	Node* node = (Node*)malloc(sizeof(Node)); // �� ��� ����
	node->coef = c; // ��� ����
	node->exp = e;  // ���� ����
	node->next = NULL; // ���� ��带 NULL�� ����

	Node* p = L->H; // ������� ����
	while (p->next != NULL) // ����Ʈ�� ������ �̵�
		p = p->next;
	p->next = node; // �� ��带 ����Ʈ�� �������� ����
}

// �� ���׽��� ���ϴ� �Լ�
List* addPoly(List* x, List* y) {
	List* result = (List*)malloc(sizeof(List)); // ��� ���׽� ����Ʈ
	init(result); // ��� ����Ʈ �ʱ�ȭ

	Node* p = x->H->next; // x�� ù ��° ���� ��
	Node* q = y->H->next; // y�� ù ��° ���� ��

	while (p && q) {
		if (p->exp > q->exp) { // x�� �� ������ �� Ŭ ���
			appendTerm(result, p->coef, p->exp);
			p = p->next;
		}
		else if (p->exp < q->exp) { // y�� �� ������ �� Ŭ ���
			appendTerm(result, q->coef, q->exp);
			q = q->next;
		}
		else { // ������ ���� ���
			int sum = p->coef + q->coef; // ����� ����
			if (sum != 0) // ��� ���� 0�� �ƴ� ��츸 �߰�
				appendTerm(result, sum, p->exp);
			p = p->next;
			q = q->next;
		}
	}
	while (p) { // x�� ���� �׵� �߰�
		appendTerm(result, p->coef, p->exp);
		p = p->next;
	}
	while (q) { // y�� ���� �׵� �߰�
		appendTerm(result, q->coef, q->exp);
		q = q->next;
	}

	return (result);
}

// ����Ʈ ��� �Լ�
void print(List* L) {
	for (Node* p = L->H->next; p; p = p->next) {
		printf(" %d %d", p->coef, p->exp);
	}
	printf("\n");
}

int main() {
	List* x = (List*)malloc(sizeof(List));
	List* y = (List*)malloc(sizeof(List));
	init(x);
	init(y);

	int n, c, e;
	scanf("%d", &n); // x ���׽��� �� ���� �Է�
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &c, &e); // ����� ���� �Է�
		appendTerm(x, c, e); // x�� �� �߰�
	}

	scanf("%d", &n); // y ���׽��� �� ���� �Է�
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &c, &e); // ����� ���� �Է�
		appendTerm(y, c, e); // y�� �� �߰�
	}

	List* result = addPoly(x, y); // ���׽� ����
	print(result); // ��� ���

	return (0);
}
