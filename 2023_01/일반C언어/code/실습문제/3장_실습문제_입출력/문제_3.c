#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    double s, a, b;
    scanf("%lf %lf", &a, &b);
    s = a * b;
    printf("area = %.2lf\n", s);
    return 0;
}