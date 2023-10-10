#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str1[100], str2[100];
	int n;

	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%d", &n);

	int i = 0;
	int str1_cnt = 0, str2_cnt = 0;

	while (str1[i]) {
		str1_cnt++;
		i++;
	}
	i = 0;
	while (str2[i]) {
		str2_cnt++;
		i++;
	}
	int m = str1_cnt - n;

	int a = str1_cnt + str2_cnt - 1;
	int b = str1_cnt - 1;

	for (i = 0; i < m; i++) {
		str1[a] = str1[b];
		a--;
		b--;
	}
	for (i = 0; i < str2_cnt; i++) {
		str1[n] = str2[i];
		n++;
	}
	str1[str1_cnt + str2_cnt] = NULL;
	printf("%s", str1);
	return 0;
}