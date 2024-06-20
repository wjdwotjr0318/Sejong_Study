#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
}Node;

Node* getNode() {
    Node* newnode = (Node*)malloc(sizeof(Node));


    int data, left_int, right_int;
    scanf("%d %d %d", &data, &left_int, &right_int);

    newnode->data = data;

    if (left_int == 0) {
        newnode->left = NULL;
    }
    else {
        Node* left_node = getNode();
        newnode->left = left_node;
    }

    if (right_int == 0) {
        newnode->right = NULL;
    }
    else {
        Node* right_node = getNode();
        newnode->right = right_node;
    }
    return newnode;
}




void main() {

    int n;//³ëµå °³¼ö
    scanf("%d", &n);

    Node* root = getNode();
    //printNode(root);

    int tra;
    scanf("%d", &tra);

    char ch[100];
    int num;

    for (int i = 0; i < tra; i++) {
        scanf("%s", ch);
        getchar();
        //gets(ch);
        num = strlen(ch);
        //printf("%d\n", num);
        printf(" %d", root->data);

        Node* p;
        p = root;
        for (int j = 0; j < num; j++) {
            if (ch[j] == 'R') {
                printf(" %d", p->right->data);
                p = p->right;
            }
            if (ch[j] == 'L') {
                printf(" %d", p->left->data);
                p = p->left;
            }
        }
        printf("\n");
    }

    return 0;
}

