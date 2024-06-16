#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int n;
    int x[100];
    int num;
    int info[100];
    int tmp[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &info[i]);
    }

    tmp[0] = x[info[0]];
    for (int i = 0; i < num - 1; i++) {
        tmp[i + 1] = x[info[i + 1]];
        x[info[i + 1]] = tmp[i];
    }

    for (int i = 0; i < n; i++) {
        printf(" %d", x[i]);
    }

    return 0;
}
