#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  ���߿��� ����Ʈ�� ��� ����ü�� �����մϴ�.
typedef struct Node {
	char elem;          // ��尡 ������ ���� ������
	struct Node* next;  // ���� ��带 ����Ű�� ������
	struct Node* prev;  // ���� ��带 ����Ű�� ������
} Node;

// ���߿��� ����Ʈ ����ü�� �����մϴ�.
typedef struct list {
	Node* header;   // ����Ʈ�� ��� ���
	Node* trailer;  // ����Ʈ�� Ʈ���Ϸ� ���
	int size;       // ����Ʈ�� ��� ����
} List;

// ���ο� ���߿��� ����Ʈ�� �����ϰ� �ʱ�ȭ�ϴ� �Լ�
List* init() {
	List* list;
	list = (List*)malloc(sizeof(List));
	list->header = (Node*)malloc(sizeof(Node));
	list->trailer = (Node*)malloc(sizeof(Node));
	list->header->prev = NULL;          // ����� ���� ���� ����
	list->header->next = list->trailer; // ����� ���� ���� Ʈ���Ϸ�
	list->trailer->prev = list->header; // Ʈ���Ϸ��� ���� ���� ���
	list->trailer->next = NULL;         // Ʈ���Ϸ��� ���� ���� ����
	list->size = 0;                     // ����Ʈ ũ��� 0���� �ʱ�ȭ

	return list;
}

void add(List* list, int r, char e);
void delete(List* list, int r);
char get(List* list, int r);
void print(List* list);

void main() {
	int N;
	char command, ch;
	int r;

	List* list = init(); // ����Ʈ �ʱ�ȭ

	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) {
		scanf("%c", &command);
		getchar();
		if (command == 'A') {
			scanf("%d %c", &r, &ch);
			if (list->size + 1 < r || r < 1) {
				printf("invalid position\n");
				getchar();
				continue;
			}
			else {
				add(list, r, ch);
				getchar();
			}
		}
		else if (command == 'D') {
			scanf("%d", &r);
			if (list->size < r || r < 1) {
				printf("invalid position\n");
				getchar();
				continue;
			}
			else {
				delete(list, r);
				getchar();
			}
		}
		else if (command == 'G') {
			scanf("%d", &r);
			if (list->size < r || r < 1) {
				printf("invalid position\n");
				getchar();
				continue;
			}
			else {
				ch = get(list, r);
				printf("%c\n", ch);
				getchar();
			}
		}
		else if (command == 'P') {
			print(list);
		}
	}
	free(list->header);
	free(list->trailer);
	free(list);
}

// ������ ��ġ�� ���ο� ��Ҹ� �߰��ϴ� �Լ�
void add(List* list, int r, char e) {
	Node* p, * new = (Node*)malloc(sizeof(Node));
	p = list->header;
	for (int i = 1; i < r; i++) {
		p = p->next; // ������ ��ġ�� �ٷ� �� ���� �̵�
	}
	new->elem = e;          // �� ��忡 ������ ����
	new->next = p->next;    // �� ����� ���� ��� ����
	new->prev = p;          // �� ����� ���� ��� ����
	p->next->prev = new;    // ���� ��ġ ���� ����� ���� ��� ���� ����
	p->next = new;          // ���� ��ġ�� ���� ���� �� ��� ����
	list->size++;           // ����Ʈ ũ�� ����
}

// ������ ��ġ�� ��Ҹ� �����ϴ� �Լ�
void delete(List* list, int r) {
	Node* p;
	p = list->header->next;
	for (int i = 1; i < r; i++) {
		p = p->next; // ������ ���� �̵�
	}
	p->prev->next = p->next; // ������ ����� ���� ���� ���� ��� ����
	p->next->prev = p->prev; // ������ ����� ���� ���� ���� ��� ����
	free(p);                 // ��� �޸� ����
	list->size--;            // ����Ʈ ũ�� ����
}

// ������ ��ġ�� ��Ҹ� ��ȯ�ϴ� �Լ�
char get(List* list, int r) {
	Node* p;
	p = list->header->next;
	for (int i = 1; i < r; i++) {
		p = p->next; // ����� ��ġ�� �̵�
	}
	return p->elem; // ��� ��ȯ
}

// ����Ʈ�� ��� ��Ҹ� ����ϴ� �Լ�
void print(List* list) {
	Node* p;
	p = list->header->next;
	while (p != list->trailer) {
		printf("%c", p->elem); // ��� ���
		p = p->next;           // ���� ��ҷ� �̵�
	}
}
