#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char strcopy(char* n1, char* n2);

int main() {
    char a[6], b[6];
    char* pa, * pb;

    for (pa = a; pa < a + 6; pa++) {
        scanf("%c", pa);
    }

    pa = a;
    pb = b;

    strcopy(pa, pb);

    for (pb = b; pb < b + 6; pb++) {
        printf("%c", *pb);
    }

    return 0;
}

char strcopy(char* n1, char* n2) {
    int a;
    for (a = 0; a < 6; a++) {
        *n2 = *n1;
        n1++;
        n2++;
    }
}