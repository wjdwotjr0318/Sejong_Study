#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_prime_number(int cnt, int num);
int is_prime_number(int num);


int main() {
    int n, num;
    int max_cnt = 0, cnt = 0, maxprime;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        cnt = count_prime_number(cnt, num);
        if (max_cnt < cnt) {
            max_cnt = cnt;
            maxprime = num;
        }
    }
    if (max_cnt > 0) {
        printf("%d\n%d", max_cnt, maxprime);
    }
    else {
        printf("0");
    }

	return 0;
}

int count_prime_number(int cnt, int num) {
    if (is_prime_number(num) == 1 && num < 100) {
        cnt++;
    }
    else {
        cnt = 0;
    }
    return cnt;
}


int is_prime_number(int num) {
    int k = 1;
    if (num == 1) {
        k = 0;
    }
    else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                k = 0;
                break;
            }
        }
    }
    return k;
}