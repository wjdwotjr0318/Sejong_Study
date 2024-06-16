#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int data;
	struct node* left;
	struct node* right;
}Node;

Node* getnode(int data, Node* leftnode, Node* rightnode) {
	Node* node = (Node*)malloc(sizeof(Node));

	node->data = data;
	node->left = leftnode;
	node->right = rightnode;

	return node;
}

void printNode(Node* node) {
	printf("%d ", node->data);

	if (node->left != NULL) {
		printf("%d ", node->left->data);
	}
	if (node->right != NULL) {
		printf("%d ", node->right->data);
	}

}

int main() {

	Node* F7 = getnode(130, NULL, NULL);
	Node* F8 = getnode(80, NULL, NULL);
	Node* F4 = getnode(70, NULL, NULL);
	Node* F5 = getnode(90, NULL, NULL);
	Node* F6 = getnode(120, F7, F8);
	Node* F2 = getnode(30, F4, F5);
	Node* F3 = getnode(50, NULL, F6);
	Node* F1 = getnode(20, F2, F3);


	int cmd;
	scanf("%d", &cmd);

	if (cmd == 1) {
		printNode(F1);
	}
	else if (cmd == 2) {
		printNode(F2);
	}
	else if (cmd == 3) {
		printNode(F3);
	}
	else if (cmd == 4) {
		printNode(F4);
	}
	else if (cmd == 5) {
		printNode(F5);
	}
	else if (cmd == 6) {
		printNode(F6);
	}
	else if (cmd == 7) {
		printNode(F7);
	}
	else if (cmd == 8) {
		printNode(F8);
	}
	else {
		printf("-1");
	}


	return 0;
}