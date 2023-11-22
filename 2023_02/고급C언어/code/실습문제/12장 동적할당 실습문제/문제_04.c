#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct student {
	char name[8];
	int kor;
	int eng;
	int math;
	double avg;
}st1;

int main() {
	int N;
	scanf("%d", &N);
	st1* p = (st1*)malloc(sizeof(st1) * N);
	for (int i = 0; i < N; i++) {
		scanf("%s %d %d %d", p[i].name, &p[i].kor, &p[i].eng, &p[i].math);
		p[i].avg = (p[i].kor + p[i].eng + p[i].math) / 3.0;
	}

	for (int i = 0; i < N; i++) {
		printf("%s %.1lf", p[i].name, p[i].avg);
		if ((p[i].kor >= 90) || (p[i].eng >= 90) || (p[i].math >= 90))
			printf(" GREAT");
		if ((p[i].kor < 70) || (p[i].eng < 70) || (p[i].math < 70))
			printf(" BAD");

		printf("\n");
	}
	return 0;
}