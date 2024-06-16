#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,m;
    int *x = NULL, *Reverseinfo =NULL;
    int info1, info2, tmp;
    scanf("%d",&n);
    x = (int*)malloc(n*sizeof(int));
    for(int i =0; i<n; i++){
        scanf("%d",&x[i]);
    }
    scanf("%d",&m);
    Reverseinfo = (int*)malloc(2*m*sizeof(int));
    for(int i =0; i<2*m;i++){
        scanf("%d",&Reverseinfo[i]);
    }
    for (int i =0; i<2*m; i +=2){
        info1 = Reverseinfo[i];
        info2 = Reverseinfo[i+1];
        while(info1<info2){
            tmp = x[info1];
            x[info1] = x[info2];
            x[info2] = tmp;
            info1++;
            info2--;
        }
    }
    for(int i =0; i<n; i++){
        printf(" %d ",x[i]);
    }
    free(x);
    free(Reverseinfo);
    return 0;
}
