#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
} Node;

typedef struct deque {
    Node* front;
    Node* rear;
    int max_size;
} Deque;

void init(Deque* deque) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->prev = NULL;
    deque->front = newNode;
    deque->rear = newNode;
    deque->max_size = 0;
}

void add_front(Deque* deque, int X) {
    if (deque->max_size == 0) {
        deque->front->data = X;
    }
    else {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->next = deque->front;
        newNode->prev = NULL;
        newNode->data = X;
        newNode->next->prev = newNode;
        deque->front = newNode;
    }
    deque->max_size++;
}

void add_rear(Deque* deque, int X) {
    if (deque->max_size == 0) {
        deque->rear->data = X;
    }
    else {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->next = NULL;
        newNode->prev = deque->rear;
        newNode->data = X;
        newNode->prev->next = newNode;
        deque->rear = newNode;
    }
    deque->max_size++;
}

int delete_front(Deque* deque) {
    if (deque->max_size == 0) {
        return -1;
    }
    else if (deque->max_size == 1) {
        free(deque->front);
        init(deque);
    }
    else {
        deque->front = deque->front->next;
        deque->front->prev = NULL;
        deque->max_size--;

        return deque->front->data;
    }
}

int delete_rear(Deque* deque) {
    if (deque->max_size == 0) {
        return -1;
    }
    else if (deque->max_size == 1) {
        free(deque->rear);
        init(deque);
    }
    else {
        deque->rear = deque->rear->prev;
        deque->rear->next = NULL;
        deque->max_size--;

        return deque->rear->data;
    }
}

void print(Deque* deque) {
    Node* horse = deque->front;
    while (horse != NULL) {
        printf(" %d", horse->data);
        horse = horse->next;
    }
    printf("\n");
}

int main() {
    Deque* deque = (Deque*)malloc(sizeof(Deque));
    init(deque);
    int n;

    scanf("%d", &n);

    char cmd[2];
    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);
        getchar();
        if (strcmp(cmd, "AF") == 0) {
            int num;
            scanf("%d", &num);
            getchar();
            add_front(deque, num);
        }
        else if (strcmp(cmd, "AR") == 0) {
            int num;
            scanf("%d", &num);
            getchar();
            add_rear(deque, num);
        }
        else if (strcmp(cmd, "DF") == 0) {
            int del_fnum;

            del_fnum = delete_front(deque);

            if (del_fnum == -1) {
                printf("underflow\n");
                break;
            }
        }
        else if (strcmp(cmd, "DR") == 0) {
            int del_rnum;

            del_rnum = delete_rear(deque);

            if (del_rnum == -1) {
                printf("underflow\n");
                break;
            }
        }
        else if (strcmp(cmd, "P") == 0) {
            print(deque);
        }
    }

    return 0;
}