#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char x[3],y[5];
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%c", &x[i]);
	}
	getchar();

	while (cnt < 5) {
		scanf("%c", &y[i]);
		getchar();
		if (y[i] == x[0]) {
			printf(" %c _ _\n", x[1]);
			cnt++;
			scanf("%c", &y[i]);
			getchar();
			if (y[i] == x[0]) {
				printf(" %c _ _\n", x[1]);
				cnt++;
			}
			else if (y[i] == x[1]) {
				printf(" %c %c _\n", x[2]);
				cnt++;
			}
			else if (y[i] == x[2]) {
				printf(" %c _ %c\n", x[3]);
				cnt++;
			}
			else {
				cnt++;
			}
		}
		}
		else if (y[i] == x[1]) {
			printf(" _ %c _\n", x[2]);
			cnt++;
		}
		else if (y[i] == x[2]) {
			printf(" _ _ %c\n", x[3]);
			cnt++;
		}
		else {
			cnt++;
		}
	}
	printf("%c", x[1]);
}