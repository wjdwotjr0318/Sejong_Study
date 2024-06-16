#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int t, s;
void push(char* st, char ch) {
    t++;
    st[t] = ch;
}
char pop(char* st) {
    char ch;
    ch = st[t];
    t--;
    return ch;
}
int calcul(char* str, int i) {
    if ((t != i) && (i == 0) && ((str[i] == '+') || (str[i] == '-'))) {
        s = 1;
        return 6;
    }
    else if ((t != -1) && ((str[i] == '+') || (str[i] == '-')) && ((str[i - 1] == '|') || (str[i - 1] == '&') || (str[i - 1] == '<') || (str[i - 1] == '>') || (str[i - 1] == '-') || (str[i - 1] == '+') || (str[i - 1] == '*') || (str[i - 1] == '/') || (str[i - 1] == '!'))) return 6;
    else if (str[i] == '|') return 1;
    else if (str[i] == '&') return 2;
    else if (str[i] == '>' || str[i] == '<') return 3;
    else if (str[i] == '+' || str[i] == '-') return 4;
    else if (str[i] == '*' || str[i] == '/') return 5;
    else if (str[i] == '!') return 6;
    else return 0;
}

void convert(char* str) {
    char stack[101] = { NULL };
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '(') push(stack, str[i]);
        else if (str[i] == ')') {
            while (stack[t] != '(') {
                printf("%c", pop(stack));
            }
            pop(stack);
        }
        else if (calcul(str, i) == 6) push(stack, str[i]);
        else if (calcul(str, i) == 0) printf("%c", str[i]);
        else {
            if (s == 1) printf("%c", pop(stack));
            else {
                while ((t != -1) && (calcul(str, i) <= calcul(stack, t))) {
                    printf("%c", pop(stack));
                }
            }
            if ((calcul(str, i) == 1) || (calcul(str, i) == 2)) {
                push(stack, str[i]);
                i++;
            }
            push(stack, str[i]);
        }
    }
    while (t != -1) {
        printf("%c", pop(stack));
    }
    printf("\n");
}

int main() {
    char ar[101] = { NULL };
    int N;
    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; i++) {
        t = -1;
        s = 0;
        gets(ar);
        convert(ar);
    }
}