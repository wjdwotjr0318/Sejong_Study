#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

void input(int* p, int M);
int* sel_max(int* p, int M);
void outpout(int* p, int N);

int main() {
	int in[100], out[100], * max, i, N, M;

	scanf("%d%d", &N, &M);
	for (i = 0; i < N; i++) {
		input(in, M);
		max = sel_max(in, M);
		out[i] = *max;
	}
	output(out, N);
	return 0;
}

void input(int* p, int M) {
	int* point;
	for (point = p; point < p + M; point++) {
		scanf("%d", point);
	}
}

int* sel_max(int* p, int M) {
	int max_cnt = 0;
	int* max_ptr = NULL;

	for (int i = 0; i < M; i++) {
		int k = 0;

		for (int j = 0; j < M; j++) {
			if (p[i] == p[j]) {
				k++;
			}
		}

		if (k > max_cnt) {
			max_cnt = k;
			max_ptr = &p[i];
		}
	}

	return max_ptr;
}

void output(int* p, int N) {
	int* point;
	for (point = p; point < p + N; point++) {
		printf(" %d", *point);
	}
}