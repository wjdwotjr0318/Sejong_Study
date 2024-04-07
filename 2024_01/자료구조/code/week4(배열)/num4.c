#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,m;
    int arr[100][100] = {0};
    scanf("%d %d", &n, &m);
    int i, j, k=2;
    arr[0][0] = 1;
    while(k<=n*m){
        while(j+1<m && arr[i][j+1]==0){
            arr[i][++j] = k++;
        }
        while(i+1<n && arr[i+1][j]==0){
            arr[++i][j] = k++;
        }
        while(j-1>=0 && arr[i][j-1]==0){
            arr[i][--j] = k++;
        }
        while(i-1>=0 && arr[i-1][j]==0){
            arr[--i][j] = k++;
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
