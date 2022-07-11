#include<stdio.h>

int main (){

    int stu [100005];

    int N , P ;
    int co =0 ;
    scanf("%d %d", &N , &P);

    for(int i =0 ; i<N ; i++){
        scanf("%d", &stu[i]);


    }

   for(int i =0 ; i<N ; i++){
     if(stu[i]<P){
        co++ ;
     }
   }

   printf("%d", co);



}
