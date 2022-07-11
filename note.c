#include<stdio.h>

int main (){
    int co =0;
    int arr [4] ;
    for(int i=0 ; i<4 ; i++){
        int note ;
        scanf("%d", &note);
        if(note >=100){

            arr[co]= note ;
             co++;


        }
    }
      //printf("%d", co);
    for(int i =0 ; i<4 ; i++){
       printf("%d \n", arr[i]);
    }




}
