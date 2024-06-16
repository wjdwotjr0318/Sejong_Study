#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int reverse_num(int n){
//     static int reversed = 0;
//     static int base_pos = 1;
//     if(n > 0){
//         reverse_num(n/10);
//         reversed += (n % 10) * base_pos;
//         base_pos *= 10;
//     }
//     return reversed;
// }

void print_num(int n) {
    if (n == 0) {
        return;
    }
    print_num(n / 10);
    printf("%d\n", n % 10);
}

int main() {
    int n;
    scanf("%d", &n);
    print_num(n); // Now print_num will print digits in the original order, but the number is reversed
    return 0;
}
