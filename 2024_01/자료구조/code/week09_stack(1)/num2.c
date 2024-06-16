#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int data;
	struct node* next;
}Node;

typedef struct stack {
	int n;
	struct node* top;
}Stack;

void init(Stack* t) {
	t->top = NULL;
	t->n = 0;
}
Node* getNode(char data) {
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
char pop(Stack* t) {
	Node* p = t->top;
	char re = p->data;
	t->top = t->top->next;
	t->n--;
	free(p);
	return re;
}
void push(Stack* t, char ch) {
	Node* q = getNode(ch);

	q->next = t->top;
	t->top = q;
	t->n++;
}

int compare(Stack* t, char ch) {
	//printf("%c\n", t->top->data);
	if (t->top == NULL) {
		return 0;
	}

	if (t->top->data == '(') {
		if (ch == ')') {
			pop(t);
			return 1;
		}
	}
	else if (t->top->data == '{') {
		if (ch == '}') {
			pop(t);
			return 1;
		}
	}
	else if (t->top->data == '[') {
		if (ch == ']') {
			pop(t);
			return 1;
		}
	}
	else {
		return 0;
	}
}
int main() {

	char ch[1000];
	gets(ch);

	int num;
	num = strlen(ch);

	Stack* t = (Stack*)malloc(sizeof(Stack));
	init(t);

	int cnt = 0;
	int result;
	for (int i = 0; i < num; i++) {
		if (ch[i] == '(' || ch[i] == '{' || ch[i] == '[') {
			push(t, ch[i]);
			cnt++;
		}
		if (ch[i] == ')' || ch[i] == '}' || ch[i] == ']') {
			result = compare(t, ch[i]);
			cnt++;
		}
	}

	if (t->top != NULL) {
		result = 0;
	}

	if (result == 0) {
		printf("Wrong_%d", cnt);
	}
	else {
		printf("OK_%d", cnt);
	}


	return 0;
}