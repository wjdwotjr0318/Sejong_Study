#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

void add(Node* set, int size) {
	int num;
	Node* ch = set;
	for (int i = 0; i < size; i++) {
		scanf("%d", &num);
		Node* newSet = (Node*)malloc(sizeof(Node));
		newSet->data = num;
		newSet->next = NULL;
		ch->next = newSet;

		ch = ch->next;
	}
}

Node* uni(Node* A, Node* B) {
	Node* set = (Node*)malloc(sizeof(Node));
	set->next = NULL;

	Node* p = set;
	Node* ch_A = A->next;
	Node* ch_B = B->next;

	while (ch_A != NULL && ch_B != NULL) {
		if (ch_A->data < ch_B->data) {
			Node* newSet = (Node*)malloc(sizeof(Node));
			newSet->data = ch_A->data;
			newSet->next = NULL;
			p->next = newSet;

			ch_A = ch_A->next;
		}
		else if (ch_A->data == ch_B->data) {
			Node* newSet = (Node*)malloc(sizeof(Node));
			newSet->data = ch_A->data;
			newSet->next = NULL;
			p->next = newSet;

			ch_A = ch_A->next;
			ch_B = ch_B->next;
		}
		else {
			Node* newSet = (Node*)malloc(sizeof(Node));
			newSet->data = ch_B->data;
			newSet->next = NULL;
			p->next = newSet;

			ch_B = ch_B->next;
		}
		p = p->next;
	}

	while (ch_A != NULL) {
		Node* newSet = (Node*)malloc(sizeof(Node));
		newSet->data = ch_A->data;
		newSet->next = NULL;
		p->next = newSet;

		ch_A = ch_A->next;
		p = p->next;
	}

	while (ch_B != NULL) {
		Node* newSet = (Node*)malloc(sizeof(Node));
		newSet->data = ch_B->data;
		newSet->next = NULL;
		p->next = newSet;

		ch_B = ch_B->next;
		p = p->next;
	}

	return set;
}

Node* inter(Node* A, Node* B) {
	Node* p = (Node*)malloc(sizeof(Node));
	p->next = NULL;
	Node* q = p;
	Node* ch_A = A->next;
	Node* ch_B = B->next;

	while (ch_A != NULL && ch_B != NULL) {
		if (ch_A->data == ch_B->data) {
			Node* newSet = (Node*)malloc(sizeof(Node));
			newSet->data = ch_A->data;
			newSet->next = NULL;
			q->next = newSet;
			q = q->next;
			ch_A = ch_A->next;
			ch_B = ch_B->next;
		}
		else if (ch_A->data > ch_B->data) {
			ch_B = ch_B->next;
		}
		else {
			ch_A = ch_A->next;
		}
	}

	return p;
}

int main() {
	Node* A = (Node*)malloc(sizeof(Node));
	Node* B = (Node*)malloc(sizeof(Node));
	A->next = NULL;
	B->next = NULL;

	int num_A, num_B;
	int zero_A = 0, zero_B = 0;

	scanf("%d", &num_A);

	if (num_A != 0) {
		add(A, num_A);
	}
	else {
		zero_A++;
	}

	scanf("%d", &num_B);

	if (num_B != 0) {
		add(B, num_B);
	}
	else {
		zero_B++;
	}

	Node* set_u = (Node*)malloc(sizeof(Node));
	Node* set_i = (Node*)malloc(sizeof(Node));

	set_u->next = NULL;
	set_i->next = NULL;


	if (zero_A == 1 && zero_B == 1) {
		Node* newSet = (Node*)malloc(sizeof(Node));
		newSet->data = 0;
		newSet->next = NULL;
		set_u->next = newSet;

		Node* newSet2 = (Node*)malloc(sizeof(Node));
		newSet2->data = 0;
		newSet2->next = NULL;
		set_i->next = newSet2;
	}
	else if (zero_A == 1 || zero_B == 1) {
		set_u = uni(A, B);

		Node* newSet2 = (Node*)malloc(sizeof(Node));
		newSet2->data = 0;
		newSet2->next = NULL;
		set_i->next = newSet2;
	}
	else {
		set_u = uni(A, B);
		set_i = inter(A, B);
	}


	Node* u = set_u->next;
	Node* i = set_i->next;

	while (u != NULL) {
		printf(" %d", u->data);
		u = u->next;
	}

	printf("\n");
	while (i != NULL) {
		printf(" %d", i->data);
		i = i->next;
	}

	return 0;
}