#include<stdio.h>


int main (){

    int N , K ;

    scanf("%d %d", &N , &K);
    int itx =1 ;

    for(int i=0 ; i<N ; i++){
        if(itx > K) {
            itx +=K ;
        }
        else {
             itx = itx * 2 ;

        }



    }

    printf("%d", itx);


}
