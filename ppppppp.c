#include<stdio.h>

int find_root (int a , int b , int c){

    int D = b*b - 4 *a*c;
    if(D==0){
        return 1;
    }
    else if (D >0){
        return 2 ;
    }
    else {
        return 0;
    }



}


int main (){

    int a , b , c ;

    scanf("%d %d %d", &a , &b , &c);

    int findRoot = find_root(a , b , c);
    if(findRoot ==0){
        printf("No root available");
        retrun 0 ;
    }

    if(findRoot ==1){

    }



}
