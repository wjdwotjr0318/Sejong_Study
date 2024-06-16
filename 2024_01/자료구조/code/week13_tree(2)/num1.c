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

void typeNode(int type, Node* node);
void printNode(Node* node);
void preorder(Node* node);
void inorder(Node* node);
void postorder(Node* node);

int main() {

	Node* F7 = getnode(130, NULL, NULL);
	Node* F8 = getnode(80, NULL, NULL);
	Node* F4 = getnode(70, NULL, NULL);
	Node* F5 = getnode(90, NULL, NULL);
	Node* F6 = getnode(120, F7, F8);
	Node* F2 = getnode(30, F4, F5);
	Node* F3 = getnode(50, NULL, F6);
	Node* F1 = getnode(20, F2, F3);


	int cmd, type;
	scanf("%d %d", &type, &cmd);

	if (cmd == 1) {
		typeNode(type, F1);
	}
	else if (cmd == 2) {
		typeNode(type, F2);
	}
	else if (cmd == 3) {
		typeNode(type, F3);
	}
	else if (cmd == 4) {
		typeNode(type, F4);
	}
	else if (cmd == 5) {
		typeNode(type, F5);
	}
	else if (cmd == 6) {
		typeNode(type, F6);
	}
	else if (cmd == 7) {
		typeNode(type, F7);
	}
	else if (cmd == 8) {
		typeNode(type, F8);
	}
	else {
		printf("-1");
	}

	return 0;
}
void typeNode(int type, Node* node) {
	if (type == 1) {
		preorder(node);
	}
	if (type == 2) {
		inorder(node);
	}
	if (type == 3) {
		postorder(node);
	}
}
void printNode(Node* node) {
	printf(" %d", node->data);
}

void preorder(Node* node) {
	printNode(node);
	if (node->left != NULL) {
		preorder(node->left);
	}
	if (node->right != NULL) {
		preorder(node->right);
	}
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

void postorder(Node* node) {
	if (node->left != NULL) {
		postorder(node->left);
	}
	if (node->right != NULL) {
		postorder(node->right);
	}
	printNode(node);
}