#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mostOnes(int** A, int n);

int main() {
	int n;
	scanf("%d", &n);
	int** arr = (int**)malloc(sizeof(int*) * n);
	if (arr == NULL) {
		printf("memory error\n");
		return -1;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * n);
		if (arr[i] == NULL) {
			printf("memory error\n");
			return -1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("%d", mostOnes(arr, n));
	for (int i = 0; i < n; i++) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}

int mostOnes(int** A, int n) {
	int i = 0, j = 0, ans = -1;
	while (i < n && j < n) {
		if (A[i][j] == 1) {
			ans = i;
			j++;
		}
		else {
			i++;
		}
	}
	return ans;
}