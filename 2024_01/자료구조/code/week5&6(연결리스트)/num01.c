#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	char elem;
	struct Node* next;
	struct Node* prev;
} Node;

typedef struct list {
	Node* header;
	Node* trailer;
	int size;
} List;

List* init() {
	List* list;
	list = (List*)malloc(sizeof(List));
	list->header = (Node*)malloc(sizeof(Node));
	list->trailer = (Node*)malloc(sizeof(Node));
	list->header->prev = NULL;
	list->header->next = list->trailer;
	list->trailer->prev = list->header;
	list->trailer->next = NULL;
	list->size = 0;

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

	List* list = init();

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



void add(List* list, int r, char e) {
	Node* p, * new = (Node*)malloc(sizeof(Node));
	p = list->header;
	for (int i = 1; i <= r; i++) {
		p = p->next;
	}
	new->elem = e;
	new->next = p;
	new->prev = p->prev;
	p->prev->next = new;
	p->prev = new;
	list->size++;
}

void delete(List* list, int r) {
	Node* p;
	p = list->header;
	for (int i = 1; i <= r; i++) {
		p = p->next;
	}
	p->prev->next = p->next;
	p->next->prev = p->prev;
	list->size--;

}

char get(List* list, int r) {
	Node* p;
	p = list->header;
	for (int i = 1; i <= r; i++) {
		p = p->next;
	}
	return p->elem;
}

void print(List* list) {
	Node* p;
	p = list->header->next;
	while (p != list->trailer) {
		printf("%c", p->elem);
		p = p->next;
	}
}