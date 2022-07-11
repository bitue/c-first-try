
#include <stdio.h>

int main(){
    int N,M,A[1000];
    //int i,j,h;

    scanf("%d%d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(A[i]>A[j]){
                int temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }
    int res=0;
    for(int i=0;i<M;i++){
        if(A[i]>0){
            break;
        }
        res-=A[i];
    }
    printf("%d",res);

    return 0;
}
