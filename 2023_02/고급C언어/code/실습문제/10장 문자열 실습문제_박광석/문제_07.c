#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	char* number[10] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int N, num;
	scanf("%d", &N);
	while (N > 0) {
		if (N >= 1000) {
			num = N / 1000;
			printf("%s THO ", number[num]);
			N = N % 1000;
		}
		else if (N >= 100 && N < 1000) {
			num = N / 100;
			printf("%s HUN ", number[num]);
			N = N % 100;
		}
		else if (N >= 10 && N < 100) {
			num = N / 10;
			printf("%s TEN ", number[num]);
			N = N % 10;
		}
		else if (N < 10) {
			num = N;
			printf("%s ", number[num]);
			N = N / 10;
		}
	}
	return 0;
}