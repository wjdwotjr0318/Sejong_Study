#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char x[10], y[10];

    for (int i = 0; i < 10; i++) {
        scanf("%c", &x[i]);
    }
    getchar();

    for (int i = 0; i < 10; i++) {
        scanf("%c", &y[i]);
    }
    getchar();

    for (int i = 0; i < 10; i++) {
        printf("%c %c ", x[i], y[i]);
    }

    return 0;
}