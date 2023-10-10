#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {


	int a;
	scanf("%d", &a);
	printf("The %dth upper case letter in the English alphabet is %c.", a, 'A' + a);
	return 0;
}