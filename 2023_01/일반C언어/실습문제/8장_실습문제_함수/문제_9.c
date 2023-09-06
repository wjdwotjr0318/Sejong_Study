#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max1, max2;

void update_max(int x) {
	if (x > max1) {
		max2 = max1;
		max1 = x;
	}
	else if (x > max2) {
		max2 = x;
	}
}

int main() {
	int n;
	
	scanf("%d", &n);
	max1 = n;
	scanf("%d", &n);
	max2 = n;

	int k;
	if (max1 < max2) {
		k = max1;
		max1 = max2;
		max2 = k;
	}
	while (1) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		update_max(n);
	}

	printf("%d %d", max1, max2);

	return 0;
}