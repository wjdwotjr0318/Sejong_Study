#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int max;
    int num;

    int front;
    int rear;
    int* que;
} Que;

int initQueue(Que* Que, int max) {
    Que->num = Que->front = Que->rear = 0;

    Que->que = (int*)malloc(sizeof(int) * max);
    if (Que->que == NULL) {
        Que->max = 0;
        return -1;
    }

    for (int i = 0; i < max; i++)Que->que[i] = 0;
    Que->max = max;
    return 0;
}

int enqueue(Que* Que, int data) {

    if (IsFull(Que) == 1) {
        printf("overflow");
        Print(Que);
        exit(0);
    }
    Que->num++;

    Que->que[++Que->rear] = data;
    if ((Que->rear + 1) == Que->max) Que->rear = -1;


    return 0;
}

int dequeue(Que* Que) {
    if (IsEmpty(Que) == 1) {
        printf("underflow");
        exit(0);
    }
    Que->num--;
    Que->que[++Que->front] = 0;


    if (Que->front == Que->max) Que->front = 0;
    return 0;
}

int IsEmpty(Que* Que) { return (Que->rear == Que->front); }

int IsFull(Que* Que) {
    int rtn = -1;

    if (Que->rear == (Que->max - 1) && Que->front == 0)rtn = 1;
    else if ((Que->rear + 1) == (Que->front))rtn = 1;

    return rtn;
}

void Print(Que* Que) {
    for (int i = 0; i < Que->max; i++) printf(" %d", Que->que[i]);
    printf("\n");
}

int main() {
    int size, rep, data;
    scanf("%d", &size);
    char cal, tmp;
    Que q;

    if (initQueue(&q, size) == -1) {
        puts("큐 생성 실패");
        return 1;
    }

    scanf("%d", &rep); getchar();

    for (int i = 0; i < rep; i++) {
        scanf("%c%c", &cal, &tmp);
        if (cal == 'I') {
            scanf("%d", &data);
            getchar();
            enqueue(&q, data);
        }
        else if (cal == 'P') {
            Print(&q);
        }
        else if (cal == 'D') {
            dequeue(&q);
        }
    }
}