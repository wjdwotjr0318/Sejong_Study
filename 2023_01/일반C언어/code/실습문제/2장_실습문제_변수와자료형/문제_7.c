#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char c;
	scanf("%c", &c);
	printf("%c is the %dth lower case letter in the English alphabet.", c, c - 'a');
	return 0;
}