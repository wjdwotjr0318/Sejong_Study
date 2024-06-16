#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum = 0;

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

void printNode(Node* node);
void inorder(Node* node);

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
		inorder(F1);
		printf("%d", sum);
	}
	else if (cmd == 2) {
		inorder(F2);
		printf("%d", sum);
	}
	else if (cmd == 3) {
		inorder(F3);
		printf("%d", sum);
	}
	else if (cmd == 4) {
		inorder(F4);
		printf("%d", sum);
	}
	else if (cmd == 5) {
		inorder(F5);
		printf("%d", sum);
	}
	else if (cmd == 6) {
		inorder(F6);
		printf("%d", sum);
	}
	else if (cmd == 7) {
		inorder(F7);
		printf("%d", sum);
	}
	else if (cmd == 8) {
		inorder(F8);
		printf("%d", sum);
	}
	else {
		printf("-1");
	}

	return 0;
}

void printNode(Node* node) {
	sum = sum + node->data;
}
void inorder(Node* node) {
	if (node->left != NULL) {
		inorder(node->left);
	}
	printNode(node);
	if (node->right != NULL) {
		inorder(node->right);
	}
}