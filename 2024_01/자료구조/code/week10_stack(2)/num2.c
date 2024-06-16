#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int st[100];
int t = -1;

void push(int num) {
	st[++t] = num;
}
int pop() {
	st[t--];
	return st[t + 1];
}
int check(char ar[]) {
	char* ch = ar;
	int a;
	while (*ch != NULL) {
		if (*ch == '+' || *ch == '-' || *ch == '/' || *ch == '*') {
			int f_num = pop();
			int s_num = pop();

			if (*ch == '+') {
				a = f_num + s_num;
				push(a);
			}
			else if (*ch == '-') {
				a = s_num - f_num;
				push(a);
			}
			else if (*ch == '/') {
				a = s_num / f_num;
				push(a);
			}
			else if (*ch == '*') {
				a = f_num * s_num;
				push(a);
			}
		}
		else {
			int num = *ch - '0';
			push(num);
		}
		ch++;
	}

	return a;
}
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		char ar[100] = { NULL };
		scanf("%s", ar);
		int a;
		a = check(ar);
		printf("%d\n", a);
	}
	return 0;
}