#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, i = 0;
	char str[10];
	scanf("%d", &a);
	while (a != 0) {
		char ch;
		ch = a % 10;
		str[i] = ch + '0';
		i++;
		a /= 10;
	}
	str[i] = '\0';
	printf("%s", str);
	return 0;
}