#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int num;
	char copy[9];
	scanf("%d", &num);
	int idx = 0;
	while (num > 0) {
		copy[idx] = (num % 10) + '0';
		num /= 10;
		idx++;
	}
	copy[idx] = '\0';
	printf("%s", copy);
	return 0;
}