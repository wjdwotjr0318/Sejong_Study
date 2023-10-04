#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(int* p, int M);
int* sel_max(int* p, int M);
void output(int* p, int N);

int main(void) {
	int in[100], out[100], * max, i, N, M;
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		input(in, M);
		max = sel_max(in, M);
		out[i] = *max;
	}
	output(out, N);
	return 0;
}

void input(int* p, int M) {
	for (int* px = p; px < p + M; px++) {
		scanf("%d", px);
	}
}
int* sel_max(int* p, int M) {
	int max = 0;
	int* ans = NULL;
	for (int* px = p; px < p + M; px++) {
		int cnt = 0;
		for (int* py = p; py < p + M; py++) {
			if (*px == *py) {
				cnt++;
			}
		}
		if (cnt > max) {
			max = cnt;
			ans = px;
		}
	}
	return ans;
}
void output(int* p, int N) {
	for (int* px = p; px < p + N; px++) {
		printf(" %d", *px);
	}
}