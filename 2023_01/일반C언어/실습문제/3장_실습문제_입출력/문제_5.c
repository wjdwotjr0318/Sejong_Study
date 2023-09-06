#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double input;
	scanf("%lf", &input);
	input = input + 0.5;
	printf("rounded up to %d\n", (int)input);
	return 0;
}