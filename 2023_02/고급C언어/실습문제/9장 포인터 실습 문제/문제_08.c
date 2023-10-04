#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int swap(int* a, int* b);

int main() {
    int N[50];
    int num, i1, i2;
    int* pN;


    scanf("%d", &num);

    for (pN = N; pN < N + num; pN++) {
        scanf("%d", pN);
    }

    scanf("%d %d", &i1, &i2);

    pN = N;

    swap(pN + i1, pN + i2);

    for (pN = N; pN < N + num; pN++) {
        printf("% d", *pN);
    }

    return 0;
}

int swap(int* a, int* b) {
    int s;

    s = *a;
    *a = *b;
    *b = s;

}
