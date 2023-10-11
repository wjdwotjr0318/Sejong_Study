#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[80], str2[10];
	int type = 0;
	scanf("%s", str1);
	scanf("%s", str2);
	for (int i = 0; i <= strlen(str1) - strlen(str2); i++) {
		int idx = 0;
		int cnt = 0;
		for (int j = i; j < i + strlen(str2); j++) {
			if (str1[j] == str2[idx]) {
				cnt++;
			}
			idx++;
		}
		if (cnt == strlen(str2)) {
			type = 1;
			printf("%d 1", strlen(str1));
			break;
		}
	}
	if (type == 0) {
		printf("%d 0", strlen(str1));
	}
	return 0;
}