#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}Node;

void add(Node* set, int size) {
	int num;
	int a = 0;
	Node* ch = set;
	for (int i = 0; i < size; i++) {
		scanf("%d", &num);
		if (a == 0) {
			ch->data = num;
			a++;
		}
		else {
			Node* newSet = (Node*)malloc(sizeof(Node));
			newSet->data = num;
			newSet->next = NULL;
			ch->next = newSet;
			ch = ch->next;
		}
	}
}

int subset(Node* A, Node* B) {
	Node* ch = A;

	int size = 0;
	while (ch != NULL) {
		Node* B_horse = B;
		int cnt = 0;
		while (B_horse != NULL) {
			if (ch->data == B_horse->data) {
				cnt++;
				ch = ch->next;
				break;
			}
			else {
				B_horse = B_horse->next;
				size++;
			}
		}
		if (cnt == 0) {
			return ch->data;
		}
	}

	return 0;
}

int main() {
	Node* A = (Node*)malloc(sizeof(Node));
	Node* B = (Node*)malloc(sizeof(Node));
	A->next = NULL;
	B->next = NULL;
	int A_size, B_size;

	scanf("%d", &A_size);

	if (A_size != 0)
		add(A, A_size);
	else {
		A->data = 0;
	}

	scanf("%d", &B_size);

	if (B_size != 0)
		add(B, B_size);
	else {
		B->data = 0;
	}

	int C;

	C = subset(A, B);

	printf("%d", C);

	printf("\n");

	return 0;
}