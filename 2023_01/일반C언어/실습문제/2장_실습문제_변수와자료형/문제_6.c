#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char c;
	scanf("%c", &c);
	printf("(%%c) %c\n(%%d) %d\n", c, c - '0');
	return 0;
}