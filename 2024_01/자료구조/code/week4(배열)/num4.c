#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int arr[100][100]={0};
    int n,m;
    scanf("%d %d", &n, &m);
    arr[0][0] = 1;
    int k = 2;
    int i=0,j=0;
    while(k < n*m){
        while(j+1<m && arr[i][j+1]==0){
            j++;
            arr[i][j] = k;
            k++;
        }
        while(i+1<n && arr[i+1][j]==0){
            i++;
            arr[i][j] = k;
            k++;
        }
        while(j-1>=0&&arr[i][j-1] == 0){
            j--;
            arr[i][j] = k;
            k++;
        }
        while(i-1>=0 && arr[i-1][j]==0){
            i--;
            arr[i][j] = k;
            k++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
