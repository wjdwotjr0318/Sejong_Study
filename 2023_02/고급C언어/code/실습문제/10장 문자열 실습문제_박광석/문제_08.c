#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	char w1[50], w2[50];
	int min;
	scanf("%s", w1);
	scanf("%s", w2);
	if (strlen(w1) > strlen(w2)) {
		min = strlen(w2);
	}
	else {
		min = strlen(w1);
	}
	for (int i = 0; i < min; i++) {
		if (w1[i] < w2[i]) {
			printf("%s%s", w2, w1);
			break;
		}
		else if (w1[i] > w2[i]) {
			printf("%s%s", w1, w2);
			break;
		}
		else if (w1[i] == w2[i]) {
			if (i == min - 1) {
				printf("%s%s", w1, w2);
			}
		}
	}
	return 0;
}