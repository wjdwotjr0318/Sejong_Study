#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double* prefixAverages1(int* arr, int n);
double* prefixAverages2(int* arr, int n);

int main() {
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	double* arr1 = prefixAverages1(arr, n);
	double* arr2 = prefixAverages2(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d", (int)(arr1[i] + 0.5));
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d", (int)(arr2[i] + 0.5));
	}
	return 0;
}

//ver slow
double* prefixAverages1(int* arr, int n) {
	double s = 0;
	double* avg = (double*)malloc(sizeof(double) * n);
	if (avg == NULL) {
		printf("memory error\n");
		return -1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			s += arr[j];
		}
		avg[i] = s / (i + 1);
		s = 0;
	}
	return avg;
}

//ver fast
double* prefixAverages2(int* arr, int n) {
	double s = 0;
	double* avg = (double*)malloc(sizeof(double) * n);
	if (avg == NULL) {
		printf("memory error\n");
		return -1;
	}
	for (int i = 0; i < n; i++) {
		s += arr[i];
		avg[i] = s / (i + 1);
	}
	return avg;
}