#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;

void PUSH(int N, char* stack, char C) {
	if (top == N - 1) {
		printf("Stack FULL\n");
	}
	else {
		stack[++top] = C;

	}
}
char POP(char* stack) {
	if (top == -1) {
		printf("Stack Empty\n");
	}
	else {
		char re = stack[top];
		top--;
		return re;
	}
}
void PEEK(char* stack) {
	if (top == -1) {
		printf("Stack Empty\n");
	}
	else {
		printf("%c\n", stack[top]);
	}
}
void DUP(int N, char* stack) {
	char C = POP(stack);
	PUSH(N, stack, C);
	PUSH(N, stack, C);
}
void UpR(char* stack, int n) {
	char tmp;
	tmp = stack[top];

	for (int i = top; i > top - n; i--) {
		stack[i] = stack[i - 1];
	}
	stack[top - n + 1] = tmp;
}
void DownR(char* stack, int n) {
	char tmp;
	tmp = stack[top - n + 1];

	for (int i = top - n + 1; i < top; i++) {
		stack[i] = stack[i + 1];
	}
	stack[top] = tmp;
}
void PRINT(char* stack) {
	for (int i = top; i >= 0; i--) {
		printf("%c", stack[i]);
	}
	printf("\n");
}


int main() {

	int N, num;
	int n;
	char cmd[8], C;

	scanf("%d", &N);
	scanf("%d", &num);

	char* stack = (char*)malloc(sizeof(char) * N);

	for (int i = 0; i < num; i++) {
		scanf("%s", cmd);
		getchar();

		if (strcmp(cmd, "PUSH") == 0) {
			scanf("%c", &C);
			PUSH(N, stack, C);
		}
		if (strcmp(cmd, "POP") == 0) {
			POP(stack);
		}
		if (strcmp(cmd, "PEEK") == 0) {
			PEEK(stack);
		}
		if (strcmp(cmd, "DUP") == 0) {
			DUP(N, stack);
		}
		if (strcmp(cmd, "UpR") == 0) {
			scanf("%d", &n);
			if (n <= top + 1) {
				UpR(stack, n);
			}
		}
		if (strcmp(cmd, "DownR") == 0) {
			scanf("%d", &n);
			if (n <= top + 1) {
				DownR(stack, n);
			}
		}
		if (strcmp(cmd, "PRINT") == 0) {
			PRINT(stack);
		}

	}




	return 0;
}