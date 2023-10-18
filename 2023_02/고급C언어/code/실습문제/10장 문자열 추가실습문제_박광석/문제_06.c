#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void StringAdd(char arr[], char ch, int index);
int Convertor(char x);

int main(void) {
	char str[18], ch1 = '+', ch2 = '*';
	scanf("%s", str);
	for (int i = 0; str[i] != 0 && str[i + 1] != 0; i++) {
		if (Convertor(str[i]) % 2 == 0 && Convertor(str[i + 1]) % 2 == 0) {
			StringAdd(str, ch2, i + 1);
			i++;
		}
		if (Convertor(str[i]) % 2 != 0 && Convertor(str[i + 1]) % 2 != 0) {
			StringAdd(str, ch1, i + 1);
			i++;
		}
	}
	printf("%s", str);
	return 0;
}

void StringAdd(char arr[], char ch, int index) {
	int str1_len = strlen(arr);
	for (int i = str1_len; i >= index; i--) {
		arr[i + 1] = arr[i];
	}
	arr[index] = ch;
}

int Convertor(char x) {
	char temp[2];
	temp[0] = x;
	temp[1] = '\0';
	return atoi(temp);
}