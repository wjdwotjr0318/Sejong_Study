#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max1, max2;
void update_max(int x);

int main() {
	int n1, n2, n;
	scanf("%d %d", &n1, &n2); {
		if (n1 >= n2) {
			max1 = n1;
			max2 = n2;
		}
		else {
			max1 = n2;
			max2 = n1;
		}
	}
	while (1) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		else {
			update_max(n);
		}
	}
	printf("%d %d", max1, max2);
	return 0;
}

void update_max(int x) {
	if (x > max1) {
		max2 = max1;
		max1 = x;
	}
	else if (x > max2) {
		max2 = x;
	}
}