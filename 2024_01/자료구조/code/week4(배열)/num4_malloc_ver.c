#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int **arr = NULL;
    int n, m;
    scanf("%d %d", &n, &m);
    arr = (int**)malloc(sizeof(int*)*n);
    if(arr == NULL){
        printf("Memory fail\n");
        return -1;
    }
    for(int i = 0; i < n; i++){
        arr[i] = (int*)malloc(sizeof(int)*m);
        if(arr[i] == NULL){
            printf("Memory fail\n");
            return -1;
        }
        for(int j = 0; j < m; j++){
            arr[i][j] = 0;
        }
    }
    arr[0][0] = 1;
    int a = 2;
    int i = 0, j = 0;
    while(a < n * m){
        while(j + 1 < m && arr[i][j + 1] == 0){
            j++;
            arr[i][j] = a;
            a++;
        }
        while(i + 1 < n && arr[i + 1][j] == 0){
            i++;
            arr[i][j] = a;
            a++;
        }
        while(j - 1 >= 0 && arr[i][j - 1] == 0){
            j--;
            arr[i][j] = a;
            a++;
        }
        while(i - 1 >= 0 && arr[i - 1][j] == 0){
            i--;
            arr[i][j] = a;
            a++;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}
