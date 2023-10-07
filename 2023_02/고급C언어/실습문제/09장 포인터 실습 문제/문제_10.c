#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcdlcm(int a, int b, int* c, int* d);

int main() {
    int num1, num2;
    int pnum1, pnum2;

    scanf("%d %d", &num1, &num2);

    gcdlcm(num1, num2, &pnum1, &pnum2);

    printf("%d %d", pnum1, pnum2);


    return 0;
}

int gcdlcm(int a, int b, int* c, int* d) {
    int i, j;
    int x;
    int num1, num2;

    if (a < b)
        i = a, j = b;
    else
        i = b, j = a;

    for (x = 1; x <= i; x++) {
        if (a % x == 0 && b % x == 0) {
            num1 = x;
        }
    }
    num2 = (i * j) / num1;

    *c = num1;
    *d = num2;

}