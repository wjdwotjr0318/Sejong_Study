#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, z;
	int* px, * py, * pz, * tmp;

	px = &x;
	py = &y;
	pz = &z;
	scanf("%d %d %d", px, py, pz);
	tmp = pz;
	pz = py;
	py = px;
	px = tmp;

	printf("%d %d %d", *px, *py, *pz);

	return 0;
}