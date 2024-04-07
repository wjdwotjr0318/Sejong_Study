#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, m, i, j, k, arr[100][100];
    scanf("%d %d", &n, &m);
    int row=n;
    int col=m;
    for(i=0; i<100;i++){
        for(j=0; j<100; j++){
            arr[i][j] = 0;
        }
    }
    int pi=0, pj=0;
    arr[pi][pj] = 1;
    k =1;
    while(pj+1<m && arr[pi][pj+1]==0){
        pj++;
        k++;
        i = pi;
        j = pj;
        arr[i][j] = k;
        while(i+1 < n && j-1>=0 && arr[i+1][j-1]==0){
            k++;
            arr[i+1][j-1] = k;
            i++;
            j--;
        }
    }
    while(pi +1 < n && arr[pi+1][pj] == 0){
        pi++;
        k++;
        i = pi;
        j = pj;
        arr[i][j] = k;
        while(i+1<n && j-1>=0 && arr[i+1][j-1]==0){
            k++;
            arr[i+1][j-1]=k;
            i++;
            j--;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
