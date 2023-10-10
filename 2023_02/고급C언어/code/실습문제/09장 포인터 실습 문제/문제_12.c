#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void addArray(int* pa, int* pb, int* pc, int N);

int main() {
    int N;
    int a[20], b[20];
    int* pa, * pb;
    int c[20];
    int* pc = c;

    scanf("%d", &N);
    for (pa = a; pa < a + N; pa++) {
        scanf("%d", pa);
    }
    for (pb = b; pb < b + N; pb++) {
        scanf("%d", pb);
    }
    pa = a;
    pb = b;
    addArray(pa, pb, pc, N);

    for (; pc < c + N; pc++) {
        printf("%d ", *pc);
    }
    return 0;
}

void addArray(int* pa, int* pb, int* pc, int N) {
    int* psum = pc + N;
    int* lastb = pb + N - 1;
    for (; pc < psum; pc++) {
        *pc = *pa + *lastb;
        pa++;
        lastb--;
    }
}
